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


import sys
import constants
import argparse
from os import path as osPath
from time import sleep
import rti.connextdds as dds
import application
import topics

filepath = osPath.dirname(osPath.realpath(__file__))


def device_main(domain_id):
    print("Device Powering Up")

    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.DEVICE_PARTICIPANT_NAME)

    # Declare topics for the device (creates: readers, writers, and threads)
    device_dsw = topics.DeviceStateWtr(participant)
    device_cdr = topics.ConfigDevRdr(participant)

    # The DeviceState topic holds the device Id and State
    # The ConfigureDevRdr object instance needs the corresponding DeviceStateWriter
    # object to obtain the devices DeviceID and state.
    device_cdr.set_device_state_writer(device_dsw)
    # device_dsw.start()  # writer thread can be optionally omitted
    device_dsw.listener()
    device_cdr.start()

    # Update the deviceID for the config_dev_reader so we only get config
    # commands directed to our device. It also loads the sample with static data (deviceID)
    # This must be done after the writer thread has run to as the deviceID is stored in the
    # sample that must be created within the device_state_writer thread.
    device_cdr.update_id_cft();

    while application.run_flag:
        # write the current state to the controller once anytime it changes
        if device_dsw.get_current_state() != device_dsw.get_previous_state():
            device_dsw.write_data(device_dsw.get_current_state())
            # then set them equal.
            device_dsw.set_previous_state(device_dsw.get_current_state())
        # print a background idle '.'
        print(".", end='', flush=True)
        sleep(1)

    # shut down threads
    device_cdr.join()
    # device_dsw.join()
    print("Device Exiting")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Command Response Device)"
    )
    parser.add_argument("-d", "--domain", type=int, default=0, help="DDS Domain ID")

    args = parser.parse_args()
    assert 0 <= args.domain < 233

    device_main(args.domain)  # uncomment for debug

    try:
        device_main(args.domain)
    except:
        print("Exception Running Device")


