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

filepath = osPath.dirname(osPath.realpath(__file__))


def device_main(domain_id):
    print("Device Powering Up")

    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.DEVICE_PARTICIPANT_NAME)



    while application.run_flag:
        print(".", end='', flush=True)
        #f.func_b(1)
        sleep(1)

    print("Device Exiting")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Command Response Device)"
    )
    parser.add_argument("-d", "--domain", type=int, default=0, help="DDS Domain ID")

    args = parser.parse_args()
    assert 0 <= args.domain < 233

    try:
        device_main(args.domain)
    except:
        print("Exception Running Device")


"""
{

void run_device_application() {  
    // Create the participant
    dds::core::QosProvider qos_provider({ MODULE::QOS_FILE });
    dds::domain::DomainParticipant participant =
        qos_provider->create_participant_from_config(MODULE::DEVICE1_PARTICIPANT);

    // Instantiate Topic Readers and Writers w/threads
    ConfigDevRdr config_dev_reader(participant, MODULE::TOPIC_CONFIGURE_DEV_CFT); 
    DeviceStateWtr device_state_writer(participant);
    config_dev_reader.RunThread(participant);
    device_state_writer.RunThread(participant);

    // config_dev_reader needs the devices state writer to update the currentState
    config_dev_reader.setDevStateWtr(&device_state_writer);

    rti::util::sleep(dds::core::Duration(2)); // let entities get up and running

    while (!application::shutdown_requested)  {
        //Device State Machine goes here;
        // In this case, we simply publish current deviceState upon change.
        if (device_state_writer.getCurrentState() != device_state_writer.getPrevState()) {
            device_state_writer.writeData(device_state_writer.getCurrentState());
            // then set them equal.
            device_state_writer.setPrevState(device_state_writer.getCurrentState());
        }
        std::cout << "." << std::flush;        
        //device_state_writer.writeData(device_state_writer.getCurrentState());
        rti::util::sleep(dds::core::Duration(1));
    }

    config_dev_reader.Reader::getThreadHndl()->join();
    device_state_writer.Writer::getThreadHndl()->join();
    // give threads a second to shut down
    rti::util::sleep(dds::core::Duration(1));
    std::cout << "Device main thread shutting down" << std::endl;
}
"""


# f = B()

class A:
    def __init__(self):
        print("A C't'r")

    def func_a(self, a):
        print("func_a Default {aN}".format(aN=a))
        self.func_c(a+1)


class B(A):
    def __init__(self):
        super().__init__()
        print("B C'tor")

    def func_b(self, b):
        print("func_b {bN}".format(bN=b))
        self.func_a(b+1)

    """
    def func_a(self, a):
        print("func_a override {aON}".format(aON=a))
        self.func_c(4)
    """
    @classmethod
    def func_c(cls, c):
        print("fun_c {cN}".format(cN = c))
