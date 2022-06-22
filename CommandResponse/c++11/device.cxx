/*
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

#include <iostream>
#include <thread>
#include <chrono>
#include <dds/dds.hpp>
#include <rti/util/util.hpp> // for sleep()
#include "CommandResp.hpp"   // rti generated file from idl to use model const Topics
#include "ddsEntities.hpp"
#include "topics.hpp"
#include "application.hpp"


namespace MODULE
{

void run_device_application() {  
    // Create the participant
    dds::core::QosProvider qos_provider({ MODULE::QOS_FILE });
    dds::domain::DomainParticipant participant =
        qos_provider->create_participant_from_config(MODULE::DEVICE1_PARTICIPANT);

    // Instantiate Topic Readers and Writers w/threads
    DeviceStateWtr device_state_writer(participant);
    ConfigDevRdr config_dev_reader(participant); 
    config_dev_reader.setDevStateWtr(&device_state_writer);

    rti::util::sleep(dds::core::Duration(2)); // let entities get up and running
 
    config_dev_reader.runThread();
    device_state_writer.runThread();

    rti::util::sleep(dds::core::Duration(2)); // let entities get up and running

    // Install the deviceID and upate the filter for the config_dev_reader so we only get config
    // commands directed to our deviceID. It also loads the sample with static data (deviceID)
    // This must be done after the writer thread has run to as the deviceID is stored in the 
    // sample that must be created within the device_state_writer thread.
    config_dev_reader.installIdCft();

    while (!application::shutdown_requested)  {
        // Device State Machine goes here;
        // In this case, we simply publish current deviceState upon change.
        if (device_state_writer.getCurrentState() != device_state_writer.getPrevState()) {
            device_state_writer.writeData(device_state_writer.getCurrentState());
            // then set them equal.
            device_state_writer.setPrevState(device_state_writer.getCurrentState());
        }
        std::cout << "." << std::flush;        

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


