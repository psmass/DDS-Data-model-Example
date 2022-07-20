"""
 * (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.

"""


import sys
import signal

def signal_handler(sig, frame):
    print('You pressed Ctrl+C!')
    global run_flag
    run_flag = False

signal.signal(signal.SIGINT, signal_handler)
run_flag = True
print("Enter Ctrl+C to quit")
