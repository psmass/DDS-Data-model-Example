
# (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the software solely for use with RTI Connext DDS. Licensee may
# redistribute copies of the software provided that all such copies are subject
# to this license. The software is provided "as is", with no warranty of any
# type, including any warranty for fitness for any purpose. RTI is under no
# obligation to maintain or support the software. RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability
# to use the software.

import time
import rti.connextdds as dds
from SensorInfo import Sensor_GasSensor
from SensorInfo import Sensor_Constants_SENSOR_QOS_LIBRARY
from SensorInfo import Sensor_Constants_RELIABLE_QOS_PROFILE
from SensorInfo import Sensor_Constants_GAS_TOPIC

class Sensor_GasSensorSubscriber:

    @staticmethod
    def process_data(reader):
        # take_data() returns copies of all the data samples in the reader
        # and removes them. To also take the SampleInfo meta-data, use take().
        # To not remove the data from the reader, use read_data() or read().
        samples = reader.take_data()
        for sample in samples:
            print(f"Received: {sample}\n")
    
        return len(samples)

    @staticmethod
    def run_subscriber(domain_id: int, sample_count: int):

        reliable_profile = Sensor_Constants_SENSOR_QOS_LIBRARY + "::" + Sensor_Constants_RELIABLE_QOS_PROFILE

        # Even though the SensorInfo.xml contains domain information, it is not used. 
        # The application only needs the file for setting QoS.
        qos_provider = dds.QosProvider("../model/SensorInfo.xml")

        # A DomainParticipant allows an application to begin communicating in
        # a DDS domain. Typically there is one DomainParticipant per application.
        # DomainParticipant QoS is configured in SensorInfo.xml.
        participant = dds.DomainParticipant(domain_id, qos_provider.participant_qos_from_profile(reliable_profile))

        # A Topic has a name and a datatype.
        topic = dds.Topic(participant, Sensor_Constants_GAS_TOPIC, Sensor_GasSensor)

        # This DataReader reads data on Topic "Example Sensor_GasSensor".
        # DataReader QoS is configured in SensorInfo.xml.
        reader = dds.DataReader(participant.implicit_subscriber, topic, qos_provider.datareader_qos_from_profile(reliable_profile))

        # Initialize samples_read to zero
        samples_read = 0

        # Associate a handler with the status condition. This will run when the
        # condition is triggered, in the context of the dispatch call (see below)
        # condition argument is not used
        def condition_handler(_):
            nonlocal samples_read
            nonlocal reader
            samples_read += Sensor_GasSensorSubscriber.process_data(reader)

        # Obtain the DataReader's Status Condition
        status_condition = dds.StatusCondition(reader)

        # Enable the 'data available' status and set the handler.
        status_condition.enabled_statuses = dds.StatusMask.DATA_AVAILABLE
        status_condition.set_handler(condition_handler)

        # Create a WaitSet and attach the StatusCondition
        waitset = dds.WaitSet()
        waitset += status_condition

        while samples_read < sample_count:
            # Catch control-C interrupt
            try:
                # Dispatch will call the handlers associated to the WaitSet conditions
                # when they activate

                waitset.dispatch(dds.Duration(1))  # Wait up to 1s each time
            except KeyboardInterrupt:
                break

        print('preparing to shut down...')

