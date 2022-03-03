"""
 (c) 2020 Copyright, Real-Time Innovations, Inc.  All rights reserved.
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

connector = rti.Connector("ShapesParticipantLibrary::ShapesPubParticipant", filepath + "/../xml/Shapes_Project.xml")
outputDDS = connector.getOutput("ShapesPublisher::SquareWriter")