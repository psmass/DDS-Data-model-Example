"""
 (c) 2022 Copyright, Real-Time Innovations, Inc.  All rights reserved.
 RTI grants Licensee a license to use, modify, compile, and create derivative
 works of the Software.  Licensee has the right to distribute object form only
 for use with RTI products.  The Software is provided "as is", with no warranty
 of any type, including any warranty for fitness for any purpose. RTI is under
 no obligation to maintain or support the Software.  RTI shall not be liable for
 any incidental or consequential damages arising out of the use or inability to
 use the software.
 """

import sys
import argparse
import signal
import time 
from os import path as osPath
from time import sleep
filepath = osPath.dirname(osPath.realpath(__file__))
import rticonnextdds_connector as rti

def signal_handler(sig, frame):
    print('You pressed Ctrl+C!')
    sys.exit(0)

def publisher_main(sample_count):
    connector = rti.Connector("EnvironmentParticipantLibrary::PubParticipant", filepath + "/../SensorInfo.xml")
    humidityOutputDDS = connector.getOutput("SensorsPublisher::HumidityWriter")

    sourceId_resourceId = 1
    sourceId_id = 10
    sensorTypeName = "Humidity"

    count = 0
    while (sample_count == 0) or (count < sample_count):
        percent = 53.75
        time_nanosec = time.time_ns()
        metaData_timeOfGeneration_secs = time_nanosec // 1000000000
        metaData_timeOfGeneration_nsecs= time_nanosec % 1000000000

        humidityOutputDDS.instance.set_dictionary({
            "sourceId.resourceId":sourceId_resourceId, 
            "sourceId.id":sourceId_id, 
            "sensorTypeName":sensorTypeName,
            "metaData.timeOfGeneration.secs":metaData_timeOfGeneration_secs,
            "metaData.timeOfGeneration.nsecs":metaData_timeOfGeneration_nsecs,
            "relativeHumidity":percent})
       
        print(humidityOutputDDS.instance.get_dictionary())
        humidityOutputDDS.write()

        count += 1
        sleep(1)

if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal_handler)

    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Sensor (Publisher)"
    )
    parser.add_argument(
        "-c", "--count", type=int, default=0, help="Number of samples to send"
    )

    args = parser.parse_args()
    assert args.count >= 0

    publisher_main(args.count)