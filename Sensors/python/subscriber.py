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
from os import path as osPath
from time import sleep
filepath = osPath.dirname(osPath.realpath(__file__))
import rticonnextdds_connector as rti

def signal_handler(sig, frame):
    print('You pressed Ctrl+C!')
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)

print("Enter Ctrl+C to quit")

connector = rti.Connector("EnvironmentParticipantLibrary::SubParticipant", filepath + "/../SensorInfo.xml")
humidityInputDDS = connector.getInput("SensorsSubscriber::HumidityReader")

while (1):
    try:
        humidityInputDDS.wait(4000)  # wait 4 seconds or until data arrives
        humidityInputDDS.take()
        for sample in humidityInputDDS.samples.valid_data_iter:
            print(sample.get_dictionary())
    except rti.TimeoutError:
        print("[Info] Subscriber timed out waiting for data")
    except rti.Error:
        print("[Error] Subscriber experienced a DDS Error")
