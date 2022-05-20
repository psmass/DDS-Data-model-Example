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
#include <ndds/ndds_cpp.h>
#include "CommandResp.h"   // rti generated file from idl to use model const Topics
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"


namespace MODULE
{

// Path relative to build directory in CommandResponse c++ example
const char* QOS_FILE = "../../../model/CommandProject.xml";

void run_device_application() {  
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
            create_participant_from_config(MODULE::DEVICE1_PARTICIPANT);

    // Instantiate Topic Readers and Writers w/threads
    ConfigDevRdr config_dev_reader(participant, _TOPIC_CONFIGURE_DEV_CFT); 
    DeviceStateWtr device_state_writer(participant);
    config_dev_reader.RunThread();
    device_state_writer.RunThread();

    NDDSUtility::sleep(wait_period); // let entities get up and running

    // config_dev_reader needs the devices state writer to update the currentState
    config_dev_reader.setDevStateWtr(&device_state_writer);

    NDDSUtility::sleep(wait_period); // let entities get up and running

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
        NDDSUtility::sleep(wait_period); // let entities get up and running
    }

    pthread_cancel(config_dev_reader.Reader::getThreadId());
    pthread_cancel(device_state_writer.Writer::getThreadId());
    // give threads a second to shut down
    NDDSUtility::sleep(wait_period); // give time for entities to shutdown
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
    // dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}


