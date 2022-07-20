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

 Note: For other language bindings these constants are defined with the data
 module (in the idl). RtiCodeGenerator is used to create a project header file
 to ascertain these constants.

"""

from enum import IntEnum

MODULE = "ExCmdRsp::"  # IDL MODULE NAME SPACE NOT USED WITH Python
QOS_URL = "file://../model/CommandProject.xml"
DEVICE_PARTICIPANT_NAME = "CmdRspParticipantLibrary::DeviceParticipant1"
CONTROLLER_PARTICIPANT_NAME = "CmdRspParticipantLibrary::ControllerParticipant1"
DEVICE_STATE_TYPE_NAME = MODULE+"DeviceState"
CONFIGURE_DEVICE_TYPE_NAME = MODULE+"ConfigureDevice"
DEVICE_STATE_READER = "ControllerSubscriber::DeviceStateReader"
DEVICE_STATE_WRITER = "DevicePublisher::DeviceStateWriter"
CONFIGURE_DEVICE_READER = "DeviceSubscriber::ConfigureDeviceReader"
CONFIGURE_DEVICE_CFT = "ConfigureDevice::MyFilter"
CONFIGURE_DEVICE_WRITER = "ControllerPublisher::ConfigureDeviceWriter"


class DeviceStateEnum (IntEnum):
    UNINITIALIZED = 0
    OFF = 1
    ON = 2
    ERROR = 3
