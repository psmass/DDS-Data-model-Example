"""
 * (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.

 GENERALLY, CODE IN THIS FILE SHOULD NOT BE MODIFIED AS IT HANDLES ALL OF THE
 GENERIC DDS INFRASTRUCTURE AND CREATES THREADS (and dds Waitsets)

 User Code (Topics in topics.py) Should Inherit a Reader or Writer and extend
 the class memberfunction handler to set/read topic specific data type fields.
 The user topic specific classes can also add data members and member functions
 as needed.

"""
import threading
from datetime import time
from time import sleep
import constants
import application
import topics
import rti.connextdds as dds


class DefaultWriterListener(dds.DynamicData.NoOpDataWriterListener):
    def on_publication_matched(self, writer, status):
        print("Listener Callback On Publication Match ")
        print("Writer Subs: {0} {1}".format(status.current_count, status.current_count_change))

class Writer(threading.Thread):

    def __init__(self, participant, periodic, period, topic_type_name, writer_name):
        self._topic_type_name = topic_type_name
        self._writer_name = writer_name
        self._periodic = periodic
        self._period = period
        qos_provider = dds.QosProvider(constants.QOS_URL)
        # get the topic type and writer for this topic
        self._topic_type = qos_provider.type(qos_provider.type_libraries[0], self._topic_type_name)
        self._sample = dds.DynamicData(self._topic_type)
        self._writer = dds.DynamicData.DataWriter.find_by_name(participant, self._writer_name)
        self._status_condition = dds.StatusCondition(self._writer)
        self._status_condition.enabled_statuses = dds.StatusMask.PUBLICATION_MATCHED
        self._waitset = dds.WaitSet()
        self._waitset += self._status_condition
        threading.Thread.__init__(self)
        print("Writer Topic {w_name} created".format(w_name=self._writer_name))

    # def __del__(self): # d'tor

    # TODO: Take in a Listener object to be assigned to self._listener allowing user defined listener mfs
    def listener(self):
        self._writer.bind_listener(DefaultWriterListener(), dds.StatusMask.ALL)

    def run(self):  # Thread of execution Override to threading class
        print("Writer Thread running for {w_name}".format(w_name=self._writer_name))
        # handler() is implemented by concrete topic class and should
        # not return until program exit. It's while loop periodicity should
        # be set to 1 or more seconds or the rate of writing a periodic topic
        while application.run_flag:
            active = self._waitset.wait(self._period)
            if self._status_condition in active:
                status_mask = self._writer.status_changes
                st = self._writer.publication_matched_status
                if dds.StatusMask.PUBLICATION_MATCHED in status_mask:
                    print("Writer Subs: {0} {1}".format(st.current_count, st.current_count_change))
            elif self._periodic:  # no active condition, check if periodic
                print(self._periodic)
                self.write()


    # ********* MUST OVERRIDE TO SET CONCRETE TOPIC CLASS WRITER **********
    def write(self):
        print("DEFAULT {w_name} WRITER - OVERRIDE WITH TOPIC SPECIFIC write()".format(w_name=self._writer_name))

    def get_writer_handle(self):
        return self._writer

    def join(self):
        super().join()

    # ***  NEED TO OVERRIDE TO SET CONCRETE TOPIC SPECIFIC EVENT HANDLER
    # ***  DEFAULT IS TO PRINT MATCHED SUBSCRIBERS
    # ***  IF A TOPIC IS PERIODIC YOU WOULD ALSO SET THE WAIT IN THE HANDLER TO
    # ***  THE PERIODICITY OF THE TOPIC AND CALL write() from the handler
    def handler(self):
        # do periodic writing here
        # print("DEFAULT WRITER HANDLER FOR {w_name} NOT SET ".format(w_name=self._writer_name))
        # print("*** OVERRIDE TO SET STATIC TOPIC VALUES")
        print("DWH", end='', flush=True)

    @classmethod
    def enable(cls):
        _enabled = True

    @classmethod
    def disable(cls):
        _enabled = False


class Reader(threading.Thread):

    def __init__(self, participant, topic_type_name, reader_name):
        self._participant = participant
        self._topic_type_name = topic_type_name
        self._reader_name = reader_name
        qos_provider = dds.QosProvider(constants.QOS_URL)
        # get the topic type and reader for this topic
        self._topic_type = qos_provider.type(qos_provider.type_libraries[0], self._topic_type_name)
        self._reader = dds.DynamicData.DataReader.find_by_name(participant, self._reader_name)
        # Create a ReadCondition to get any data
        self._read_condition = dds.ReadCondition(self._reader, dds.DataState.any_data)
        self._status_condition = dds.StatusCondition(self._reader)
        self._status_condition.enabled_statuses = dds.StatusMask.SUBSCRIPTION_MATCHED
        # Create WaitSet and attach conditions
        self._waitset = dds.WaitSet()
        self._waitset += self._status_condition
        self._waitset += self._read_condition
        threading.Thread.__init__(self)
        print("Reader Topic {r_name} created".format(r_name=self._reader_name))

        # def __del__(self): # d'tor

    def run(self):  # Thread of execution Override to threading class
        print("Reader Thread running for {r_name}".format(r_name=self._reader_name))
        while application.run_flag:
            # Get the StatusCondition associated with the reader and set the mask to get liveliness updates
            # change Status condition for matched publishers
            active = self._waitset.wait(4.0)
            if self._status_condition in active:
                status_mask = self._reader.status_changes
                st = self._reader.subscription_matched_status
                if dds.StatusMask.SUBSCRIPTION_MATCHED in status_mask:
                    print( "Reader Pubs: {0} {1}".format(st.current_count, st.current_count_change))

            if self._read_condition in active:
                for (data, info) in filter(lambda s: s.info.valid, self._reader.take()):
                    self.handler(data) # execute the reader specific handler to parse topic
                    #print(data)


    def join(self):
        super().join()

    # ********* MUST OVERRIDE TO HANDLE CONCRETE TOPIC CLASS READER SAMPLE DATA  **********
    def handler(self, data):
        # print("DEFAULT READER HANDLER FOR {r_name} NOT SET ".format(r_name=self._reader_name))
        # print("*** OVERRIDE TO READ SPECIFIC TOPIC VALUES")
        print("DRH", end='', flush=True)

    def get_reader_handle(self):
        return self._reader








