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
 */
"""
import sys
import argparse
from os import path as osPath
from time import sleep
import rti.connextdds as dds
import application
import constants
import topics

filepath = osPath.dirname(osPath.realpath(__file__))


def controller_main(domain_id):
    print("Controller Powering Up")

    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.CONTROLLER_PARTICIPANT_NAME)

    controller_dsr = topics.DeviceStateRdr(participant)
    controller_cdw = topics.ConfigDevWtr(participant)
    # The ConfigureDevWrt object instance needs to have the corresponding DeviceState Object
    # reference to access target DeviceID and track state.
    controller_cdw.set_device_state_reader(controller_dsr)
    controller_dsr.start()
    controller_cdw.start()

    while application.run_flag:
        if controller_dsr.get_current_state() == constants.DeviceStateEnum.UNINITIALIZED:
            controller_cdw.writeData(constants.DeviceStateEnum.ON)
        print(".", end='', flush=True)
        sleep(1)

    controller_cdw.join()
    controller_dsr.join()

    print("Controller Exiting")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Command Response Controller)"
    )
    parser.add_argument("-d", "--domain", type=int, default=0, help="DDS Domain ID")

    args = parser.parse_args()
    assert 0 <= args.domain < 233

    # controller_main(args.domain) # uncomment for debug

    try:
        controller_main(args.domain)
    except:
        print("Exception Running Device")


