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

 INSTANTIATE YOUR TOPICS IN THIS FILE

 Your topics must inherit either a ddsEntities.Reader or ddsEnities.Writer
 They MUST implement / override the handler() member functions to deal with
 topic specific fields (read/write) and will likely need extended member functions
 and data members to do specific functions based on application and specific
 topic status/state.

 You may also set filters and DDS event conditions as those may be topic dependent.
 Example, the a device application instance only needs concern itself with commands
 directed to it's target device ID. As such, code should be included in the configuration
 command to filter on the targetId fields that match this devices id.

 Filtering on controller bound topics is probably not desired as the controller usually
 needs to see all status and responses from a device unless there are multiple controllers
 where some topic field values are used to load balance.

 If you don't which to run writer threads for event or a periodic topics you may omit
 calling the writer.start(). If you would prefer to use a listener to montior events
 you will need to modify the ddsEntities.py infrastructure file.

 Periodic writers may be created by placing a call to a topic handler while loop.

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

    def get_current_state(self):
        return self._current_state

    def handler(self, data):
        print("Device State Reader Handler Executing")
        print(data)

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
    def __init__(self, participant, periodic=False, period=4.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.DEVICE_STATE_TYPE_NAME,
                                    constants.DEVICE_STATE_WRITER)
        self._previous_state = constants.DeviceStateEnum.ERROR
        # Preload sample with this devices static ID
        self._sample["myDeviceId.resourceId"] = 2
        self._sample["myDeviceId.id"] = 20

    # write() is effectively a runtime down cast for periodic data
    def write(self, state):
        print("Writing DeviceState Sample")
        self._sample["state"] = state
        self._writer.write(self._sample)

    def set_current_state(self, state):
        # print("device setting state to requested state of: {m_state}".format(m_state=state))
        self._sample["state"] = state

    def get_current_state(self):
        return self._sample["state"]

    def set_previous_state(self, state):
        self._previous_state = state

    def get_previous_state(self):
        return self._previous_state

    def get_data_sample(self):
        return self._sample


class ConfigDevRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.CONFIGURE_DEVICE_TYPE_NAME,
                                    constants.CONFIGURE_DEVICE_READER)
        self._device_state_writer = None

    # def __del__(self): # d'tor

    # Associated the Device State writer with this topic since it's
    # where the Device keeps its Id and State info.
    def set_device_state_writer(self, device_state_writer):
        self._device_state_writer = device_state_writer

    def handler(self, data):
        print("Configure Device Reader Handler Executing")
        print(data)
        # If we get a CONFIGURE_DEVICE_TOPIC then set the device
        # current state to the requested state
        self._device_state_writer.set_current_state(data["deviceConfig.stateReq"])

    def update_id_cft(self):
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant, constants.CONFIGURE_DEVICE_CFT)
        dw_sample = self._device_state_writer.get_data_sample()
        cft_topic.filter_parameters = [str(dw_sample["myDeviceId.resourceId"]), str(dw_sample["myDeviceId.id"])]
        print("CFT ID installed")


class ConfigDevWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=4.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.CONFIGURE_DEVICE_TYPE_NAME,
                                    constants.CONFIGURE_DEVICE_WRITER)
        self._device_state_reader = None

    # def __del__(self): # d'tor

    # write() is effectively a runtime down cast for periodic data
    def write(self):
        self.write_data(self._device_state_reader.get_current_state())  # send in the current state

    # Associated the Device State writer with this topic since it's
    # where the Device keeps its Id and State info.
    def set_device_state_reader(self, device_state_reader):
        self._device_state_reader = device_state_reader

    def write_data(self, request):
        print("Writing Config Request to device ")
        self._sample["targetDeviceId.resourceId"] = self._device_state_reader.get_device_resource_id()
        self._sample["targetDeviceId.id"] = self._device_state_reader.get_device_id()
        self._sample["deviceConfig.stateReq"] = request
        self._writer.write(self._sample)

