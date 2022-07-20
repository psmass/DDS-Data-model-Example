
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
from Alarms import Alarms_IntrusionAlarm
from Alarms import Common_UnitType

class Alarms_IntrusionAlarmPublisher:

    @staticmethod
    def run_publisher(domain_id: int, sample_count: int):

        # A DomainParticipant allows an application to begin communicating in
        # a DDS domain. Typically there is one DomainParticipant per application.
        # DomainParticipant QoS is configured in USER_QOS_PROFILES.xml
        participant = dds.DomainParticipant(domain_id)

        # A Topic has a name and a datatype.
        topic = dds.Topic(participant, "Example Alarms_IntrusionAlarm", Alarms_IntrusionAlarm)

        # This DataWriter will write data on Topic "Example Alarms_IntrusionAlarm"
        # DataWriter QoS is configured in USER_QOS_PROFILES.xml
        writer = dds.DataWriter(participant.implicit_publisher, topic)
        data1 = Alarms_IntrusionAlarm()
        data2 = Alarms_IntrusionAlarm()

        instance1 = dds.InstanceHandle()
        instance2 = dds.InstanceHandle()

        data1.sourceId.id = 1  # note the keyed value is set to something unique
        data1.sourceId.resourceId = 10  # note the keyed value is set to something unique
        instance1 = writer.register_instance(data1)

        data2.sourceId.id = 2  # note the keyed value is set to something unique
        data2.sourceId.resourceId = 10  # note the keyed value is set to something unique
        instance2 = writer.register_instance(data2)

        for count in range(sample_count):
            # Catch control-C interrupt
            try:
                # Modify the data to be sent here
                data1.alarmTypeName = "alarm name 1"
                data1.severity = Alarms_IntrusionAlarm.severity.Critical
                data1.null = Alarms_IntrusionAlarm.null.Open
                data1.numericValue.number = count
                data1.numericValue.Units = Common_UnitType.Farenheit

                data2.alarmTypeName = "alarm name 2"
                data2.severity = Alarms_IntrusionAlarm.severity.Minor
                data2.null = Alarms_IntrusionAlarm.null.Closed
                data2.numericValue.number =  count
                data2.numericValue.Units = Common_UnitType.Celcius
                
                print(f"Writing Alarms_IntrusionAlarm, count {count}")
                writer.write(data1,instance1)
                writer.write(data2,instance2)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down...")

