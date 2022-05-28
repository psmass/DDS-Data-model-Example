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
    print("Device Powering up")

    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.DEVICE_PARTICIPANT_NAME)


    #my_type = qos_provider.type(qos_provider.type_libraries[0], KVP_TYPE_NAME)

    #writer = dds.DynamicData.DataWriter.find_by_name(participant, WRITER_NAME)

    #reader = dds.DynamicData.DataReader.find_by_name(participant, READER_NAME)
    #reader.bind_listener(MyDataReaderListener(), dds.StatusMask.DATA_AVAILABLE)

    while (application.run_flag):
        print(".", end='', flush=True)
        sleep(1)

    print("Device Exiting")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Command Response Device)"
    )
    parser.add_argument("-d", "--domain", type=int, default=0, help="DDS Domain ID")

    args = parser.parse_args()
    assert 0 <= args.domain < 233

    device_main(args.domain)



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
} // namespace MODULE


int main(int argc, char *argv[])
{

    using namespace application;

    setup_signal_handlers();

    try  {
        MODULE::run_device_application();
    }
    catch (const std::exception &ex)  {
        // This will catch DDS exceptions
        std::cerr<< "Exception in run_device_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
"""

"""
import threading

class MyThread (threading.Thread):
    die = False
    def __init__(self, name):
        threading.Thread.__init__(self)
        self.name = name

    def run (self):
        while not self.die:
            time.sleep(1)
            print (self.name)

    def join(self):
        self.die = True
        super().join()

if __name__ == '__main__':
    f = MyThread('first')
    f.start()
    s = MyThread('second')
    s.start()
    try:
        while True:
            time.sleep(2)
    except KeyboardInterrupt:
        print('Device Exiting')
        f.join()
        s.join()

"""