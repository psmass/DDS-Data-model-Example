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
import signal
import time 
from os import path as osPath
from time import sleep
filepath = osPath.dirname(osPath.realpath(__file__))
import rticonnextdds_connector as rti

def signal_handler(sig, frame):
    print('You pressed Ctrl+C!')
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)

print("Enter Ctrl+C to quit")

connector = rti.Connector("EnvironmentParticipantLibrary::PubParticipant", filepath + "/../model/SensorInfo.xml")
humidityOutputDDS = connector.getOutput("SensorsPublisher::HumidityWriter")

sourceId_resourceId = 1
sourceId_id = 10
sensorTypeName = "ACME Humidity Sensor Model x123a"
while (1):
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
    sleep(1)
