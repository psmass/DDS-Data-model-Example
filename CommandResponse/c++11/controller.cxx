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

#include <algorithm>
#include <iostream>
#include <thread>
#include <chrono>
#include <dds/dds.hpp>
#include <rti/util/util.hpp> // for sleep
#include "CommandResp.hpp"   // rti generated file from idl to use model const Topics
#include "ddsEntities.hpp"
#include "topics.hpp"
#include "application.hpp"

namespace MODULE
{

void run_controller_application() {
   // Create the participant
    dds::core::QosProvider qos_provider({ MODULE::QOS_FILE });
    dds::domain::DomainParticipant participant =
        qos_provider->create_participant_from_config(MODULE::CONTROLLER1_PARTICIPANT);

    // Instantiate Topic Readers and Writers w/threads
    ConfigDevWtr config_dev_writer(participant); 
    DeviceStateRdr device_state_reader(participant);

    // Associate devices_state_reader with the config_dev_writer since the
    // device_state_reader holds the targetId of the request and current device state
    config_dev_writer.setDevStateRdr(&device_state_reader);

    config_dev_writer.runThread();
    device_state_reader.runThread();

    while (!application::shutdown_requested) {
        //Controller State Machine goes here;
        // If a devices device_state is UNITIALIZED then turn it on
        if (device_state_reader.getCurrentState() == MODULE::DeviceStateEnum::UNINITIALIZED) {
            config_dev_writer.writeData (MODULE::DeviceStateEnum::ON);
        }
        std::cout << "." << std::flush;                 
        rti::util::sleep(dds::core::Duration(1));
    }

    config_dev_writer.Writer::getThreadHndl()->join();
    device_state_reader.Reader::getThreadHndl()->join();
    // give threads a second to shut down
    rti::util::sleep(dds::core::Duration(1));
    std::cout << "Controller main thread shutting down" << std::endl;

}
} // namespace MODULE

int main(int argc, char *argv[]) {

    using namespace application;

    setup_signal_handlers();

    try {
        MODULE::run_controller_application();
    }
    catch (const std::exception &ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_controller_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}

