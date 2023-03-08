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
#include "CommandRespSupport.h"
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"


namespace device
{

// Path relative to build directory in CommandResponse c++ example
const char* QOS_FILE = "../model/CommandProject.xml";

/* Delete all entities */
static int participant_shutdown(DDSDomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            std::cout <<  "delete_contained_entities error: " << retcode << std::endl;
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            std::cout <<  "delete_participant error: " << retcode << std::endl;
            status = -1;
        }
    }

    /* RTI Connext provides finalize_instance() method on
       domain participant factory for people who want to release memory used
       by the participant factory. Uncomment the following block of code for
       clean destruction of the singleton. */

    /*
    retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        std::cout << "finalize_instance error" << retcode << std::endl;
        status = -1;
    }
    */

    return status;
}

extern "C" int run_device_application(int domain_id) {  
    // Create the participant
    const char *url_profiles[1] = { QOS_FILE }; 
    DDS_Duration_t wait_period = {2,0};
    DDS_ReturnCode_t retcode;

    // https://community.rti.com/static/documentation/connext-dds/5.3.0/doc/manuals/connext_dds/html_files/RTI_ConnextDDS_CoreLibraries_UsersManual/Content/UsersManual/PROFILE_QosPolicy__DDS_Extension__.htm
    // for doing this, but I like the way the Sensor Example uses 
    // TheParticipantFactory too load my_custom_qos_profiles.xml,we need
    // to modify the factory_qos profile
    DDS_DomainParticipantFactoryQos factory_qos;
    DDSTheParticipantFactory->get_qos(factory_qos);

    // We are only going to add one XML file to the url_profile sequence
    factory_qos.profile.url_profile.from_array(url_profiles, 1);
    DDSTheParticipantFactory->set_qos(factory_qos);

    // create DDS containser entities: Participant, Publisher and Subscriber
    // (with default QoS Profiles, we'll put the  QoS on the Readers and Writers)
     DDSDomainParticipant * participant = 
        DDSTheParticipantFactory->create_participant(
            domain_id,
            DDS_PARTICIPANT_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        std::cout << "create_participant error" << std::endl;
        participant_shutdown(participant);
        return -1;
    }

    DDSSubscriber * subscriber = participant->create_subscriber(
            DDS_SUBSCRIBER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        std::cout << "create_subscriber error" << std::endl;
        participant_shutdown(participant);
        return -1;
    }

    DDSPublisher * publisher = participant->create_publisher(
            DDS_PUBLISHER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        std::cout << "create_publisher error" << std::endl;
        participant_shutdown(participant);
        return -1;
    }

    // create the device writer first since this devices ID is loaded in the c'tor
    topics::DeviceStateWtr device_state_writer(participant, publisher);

    // Create a listener if we'd rather use vs. event waitset thread.
    // Here we use a Default listener we created, but you can create your own
    // listener(s) (and as many as you need if topic specific)
    entities::DefaultDataWriterListener * listener = new entities::DefaultDataWriterListener();
    device_state_writer.getMyDataWriter()->set_listener(listener);

    // Device filters ConfigureDeviceRequests to it's deviceID
    std::string s1 = std::to_string(device_state_writer.getTopicSample()->myDeviceId.resourceId);
    std::string s2 = std::to_string(device_state_writer.getTopicSample()->myDeviceId.id);
    const char *param_list[] = { s1.c_str(), s2.c_str(), NULL };
    // std::cout << "****** " << param_list << " " << sizeof(param_list) << " " << sizeof(param_list[0]) << std::endl;

    topics::Cft cdr_cft(param_list, "targetDeviceId.resourceId = %0 and targetDeviceId.id=%1" ); // create a filter for the ConfigureDeviceReader

    // Instantiate Topic Readers and Writers w/threads
    topics::ConfigDevRdr config_dev_reader(participant, subscriber, cdr_cft); 

    // config_dev_reader needs the devices state writer to update the currentState
    config_dev_reader.setDevStateWtr(&device_state_writer);
    config_dev_reader.runThread();
    //device_state_writer.runThread(); // comment out to disable event monitoring on wtr

    while (!application::shutdown_requested)  {
        // Device State Machine goes here;
        // In this case, we simply publish current deviceState upon change.
        
        if (device_state_writer.getCurrentState() != device_state_writer.getPrevState()) {
            device_state_writer.writeData(device_state_writer.getCurrentState());
            // then set them equal.
            device_state_writer.setPrevState(device_state_writer.getCurrentState());
        }
        
        std::cout << "." << std::flush;        
        NDDSUtility::sleep(wait_period); // let entities get up and running
    }
    
    pthread_cancel(config_dev_reader.Reader::getThreadId());
    //pthread_cancel(device_state_writer.Writer::getThreadId());
    delete listener;
    // give threads a second to shut down
    NDDSUtility::sleep(wait_period); // give time for entities to shutdown

    /* Delete all entities */
    return participant_shutdown(participant);
    std::cout << "Device main thread shutting down" << std::endl;
}
} // namespace device


int main(int argc, char *argv[])
{

    using namespace application;

    int domain_id = 0;

    setup_signal_handlers();

    try  {
        return device::run_device_application(domain_id);
    }
    catch (const std::exception &ex)  {
        // This will catch DDS exceptions
        std::cerr<< "Exception in run_device_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
