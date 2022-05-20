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
#include <ndds/ndds_cpp.h>
#include "CommandResp.h"   // rti generated file from idl to use model const Topics
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"

namespace MODULE
{

// Path relative to build directory in CommandResponse c++ example
const char* QOS_FILE = "../../../model/CommandProject.xml";

void run_controller_application() {
   // Create the participant


    const char *url_profiles[1] = { QOS_FILE }; 
    DDS_Duration_t wait_period = {2,0}; 

    DDSDomainParticipantFactory *factory =
	    DDSDomainParticipantFactory::get_instance();
    DDS_DomainParticipantFactoryQos factoryQos;
    DDS_ReturnCode_t retcode = factory->get_qos(factoryQos);
    factoryQos.profile.url_profile.from_array(url_profiles, 1);
    factory->set_qos(factoryQos);

    DDSDomainParticipant * participant = DDSTheParticipantFactory->
            create_participant_from_config(MODULE::CONTROLLER1_PARTICIPANT);

    // Instantiate Topic Readers and Writers w/threads
    ConfigDevWtr config_dev_writer(participant); 
    DeviceStateRdr device_state_reader(participant);
    config_dev_writer.RunThread();
    device_state_reader.RunThread();

 
    NDDSUtility::sleep(wait_period); // let entities get up and running

    while (!application::shutdown_requested) {
        //Controller State Machine goes here;
        // If a devices device_state is UNITIALIZED then turn it on
        if (device_state_reader.getCurrentState() == UNINITIALIZED) {
            config_dev_writer.writeData (ON);
        }
        std::cout << "." << std::flush;                 
        NDDSUtility::sleep(wait_period);
    }

    pthread_cancel(config_dev_writer.Writer::getThreadId());
    pthread_cancel(device_state_reader.Reader::getThreadId());
    // give threads a second to shut down
    NDDSUtility::sleep(wait_period); // give time for entities to shutdown
    std::cout << "Controller main thread shutting down" << std::endl;

    // TO_DO do I need a delete_participant call to clean anything up?
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

    return EXIT_SUCCESS;
}

