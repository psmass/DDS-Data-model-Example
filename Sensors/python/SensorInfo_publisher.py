
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


class Sensor_GasSensorPublisher:

    @staticmethod
    def run_publisher(domain_id: int, sample_count: int):

        reliable_profile = Sensor_Constants_SENSOR_QOS_LIBRARY + "::" + Sensor_Constants_RELIABLE_QOS_PROFILE

        # Even though the SensorInfo.xml contains domain information, it is not used. 
        # The application only needs the file for setting QoS.
        qos_provider = dds.QosProvider("../model/SensorInfo.xml")

        # A DomainParticipant allows an application to begin communicating in
        # a DDS domain. Typically there is one DomainParticipant per application.
        # DomainParticipant QoS is configured SensorInfo.xml.
        participant = dds.DomainParticipant(domain_id, qos_provider.participant_qos_from_profile(reliable_profile))

        # A Topic has a name and a datatype.
        topic = dds.Topic(participant, Sensor_Constants_GAS_TOPIC, Sensor_GasSensor)

        # This DataWriter will write data on Topic "Example Sensor_GasSensor"
        # DataWriter QoS is configured in SensorInfo.xml.
        writer = dds.DataWriter(participant.implicit_publisher, topic, qos_provider.datawriter_qos_from_profile(reliable_profile))
        sample = Sensor_GasSensor()

        sample.sourceId.resourceId = 247
        sample.sourceId.id = 21
        sample. sensorTypeName = "Tyrell Corp. Gas Sensor - Model 8317VAC-15"

        for count in range(sample_count):
            # Catch control-C interrupt
            try:
                # Modify the data to be sent here
                percent = 30.32
                time_nanosec = time.time_ns()

                sample.metaData.timeOfGeneration.secs = time_nanosec // 1000000000
                sample.metaData.timeOfGeneration.nsecs = time_nanosec % 1000000000
                sample.concetration = percent
    
                print(f"\nWriting {Sensor_Constants_GAS_TOPIC} Sensor, count {count}")
                print(sample)

                writer.write(sample)
                time.sleep(1)
            except KeyboardInterrupt:
                break

        print("preparing to shut down...")

