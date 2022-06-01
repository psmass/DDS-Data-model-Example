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

    device_dsw = topics.DeviceStateWtr(participant)
    device_cdr = topics.ConfigDevRdr(participant)
    # The ConfigureDevRdr object instance needs to have the corresponding DeviceStateWriter
    # object reference to access the devices DeviceID and state.
    device_cdr.set_device_state_writer(device_dsw)
    device_dsw.start()
    device_cdr.start()

    while application.run_flag:
        if device_dsw.get_current_state() != device_dsw.get_previous_state():
            device_dsw.write_data(device_dsw.get_current_state())
            # then set them equal.
            device_dsw.set_previous_state(device_dsw.get_current_state())
        print(".", end='', flush=True)
        sleep(1)

    device_cdr.join()
    device_dsw.join()
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


