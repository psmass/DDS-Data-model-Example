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
 """

 """
    /* How to use specific topic Readers and Writers:

    The Topic specific Reader Constructor -  can be used to update Topic Specific Content filters 
     - e.g. in the case of a device Reader, it should register for myTopic - i.e.
     commands directed specifically to it from a controller.

    The controller readers likely would not want to filter for a specific deviceID,
    as generally controllers handle all the data sent to them. Controllers typically
    are not a specific target ID either.

    The Topic specific Writer member functions. 

    Specific Writer Handlers have two parts, the Initial Setup and the Handler Loop.
    The user may want add code  in the Initial Setup (prior to the Handler Loop) to
    statically set the source ID (in the case of a device) or any other static data. 
    This is done once and is topic specific.

    Code can be added in the loop write the topic periodically. If non periodic, the loop
    can be used for writer event status and sleep periodically with no write operation.
    A separate writeData(data) member funcstion can be added to the specific topic class to
    allow the main program to set data and write at will.
"""

import application
import ddsEntities
import constants
import rti.connextdds as dds
from time import sleep

class DeviceStateRdr(ddsEntities.Reader):
    # The DeviceStateReader is used by the controller to
    # track the current device state of the device(s).
    # If there is more than one device, we should keep an
    # array of devices
    #
    # The controller state machine looks to receive an
    # UNINITIALIZED Device state to know a new device has
    # announced itself, causing the controller to issue
    # a configuration command. So we need to initialize
    # the current state to something other tha UNINITIALIZED
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.DEVICE_STATE_TYPE_NAME,
                                    constants.DEVICE_STATE_READER)
        self._current_state = constants.DeviceStateEnum.ERROR
        self._device_id = 0
        self._device_resource_id = 0

    # def __del__(self): # d'tor

    def get_device_resource_id(self):
        return self._device_resource_id

    def get_device_id(self):
        return self._device_id

    def handler(self, data):
        print ("Device State Reader Handler Executing")

        self._current_state = data["state"]
        self._device_resource_id = data["myDeviceId.resourceId"]
        self._device_id = data["myDeviceId.id"]

        print("Controller Tracking Device Current state to: ", end='')
        # could use the new 3.10 match / case (switch)
        if self._current_state == constants.DeviceStateEnum.UNINITIALIZED:
                print("UNINITIALIZED", flush=True)
        elif self._current_state == constants.DeviceStateEnum.ON:
                print("ON", flush=True)
        elif self._current_state == constants.DeviceStateEnum.OFF:
            print("OFF", flush=True)
        elif self._current_state == constants.DeviceStateEnum.ERROR:
            print("ERROR", flush=True)
        else:
            print("Oops the CurrentState is not a valid value ")


class DeviceStateWtr(ddsEntities.Writer):
    # The DeviceStateWriter is used by each Device to
    # track and send the current device state when it changes.
    #
    # Initialize the current_state as UNINITIALIZED, make
    # the previous state something different to force the
    # initial publication (Durably) which notifies the
    # controller of the device.
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                constants.DEVICE_STATE_TYPE_NAME,
                                constants.DEVICE_STATE_WRITER)
        self._previous_state = constants.DeviceStateEnum.ERROR
        self._current_state = constants.DeviceStateEnum.UNINITIALIZED
        self._sample = dds.DynamicData(constants.DEVICE_STATE_TYPE_NAME)
        self._sample["myDeviceId.resourceId"] = 2
        self._sample["myDeviceId.Id"] = 20

    def handler(self):
        # The topic specific writer handler, sits only on events
        # you may want to handle for this topic
        print("Device State Writer Handler Executing")
        # in a real device these would be dug out of EPROM somewhere

        while application.run_flag:
            #  if periodic data handler should set the sleep duration
            #  to topic write periode and call write() here
            sleep(1)

    def write_data(self, state):
        print("Writing DeviceState Sample")
        self._sample["state"] = state
        self._writer.write(self._sample)

    def set_current_state(self, state):
        self._previous_state = self._current_state
        self._current_state = state


class ConfigDevRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.CONFIGURE_DEVICE_TYPE_NAME,
                                    constants.CONFIGURE_DEVICE_READER)
        # need associated writer to change state where state is kept
        self._device_state_writer = DeviceStateWtr.get_writer_handle()

        # def __del__(self): # d'tor

    def handler(self, data):
        print("Configure Device Reader Handler Executing")
        # If we get a CONFIGURE_DEVICE_TOPIC then set the device
        # current state to the requested state
        self._device_state_writer.set_current_state(data["deviceConfig.stateReq"])

class ConfigDevWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.CONFIGURE_DEVICE_TYPE_NAME,
                                    constants.CONFIGURE_DEVICE_WRITER)
        self._sample = dds.DynamicData(constants.ONFIGURE_DEVICE_TYPE_NAME)
        self._device_state_rdr = DeviceStateRdr.get_reader_handle()

        # def __del__(self): # d'tor

    def handler(self):
        # The topic specific writer handler, initializes the targeted
        # device id and monitors events you may want to handle for this topic
        print("Configure Device Writer Handler Executing")
        # if there were mulitple devices we'd want to index by device
        # number to get the target devive ID for the request
        self._sample["targetDeviceId.resourceId"] = self._device_state_rdr.get_device_resource_id()
        self._sample["targetDeviceId.id"] = self._device_state_rdr.get_device_id()

        while application.run_flag:
            #  if periodic data handler should set the sleep duration
            #  to topic write periode and call write() here
            sleep(1)

    def writeData(self, request):
        print("Writing Config Request to device ")

        self._sample["deviceConfig.stateReq"] = request
        self._writer.write(self._sample)
        