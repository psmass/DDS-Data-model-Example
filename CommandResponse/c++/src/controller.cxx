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
#include "CommandRespSupport.h"
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"

namespace MODULE
{

// Path relative to build directory in CommandResponse c++ example
const char* QOS_FILE = "../../../model/CommandProject.xml";

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


extern "C" int run_controller_application(int domain_id) {

    const char *url_profiles[1] = { QOS_FILE }; 
    DDS_Duration_t wait_period = {2,0}; 

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

    // Instantiate Topic Readers and Writers w/threads
    ConfigDevWtr config_dev_writer(participant, publisher); 
    DeviceStateRdr device_state_reader(participant, subscriber);
    config_dev_writer.RunThread();
    device_state_reader.RunThread();

    // configure the request
    MODULE::ConfigureDevice config_dev_topic;
    config_dev_topic.targetDeviceId.resourceId=2;
    config_dev_topic.targetDeviceId.id = 20;
    config_dev_topic.deviceConfig.stateReq=ON;

    NDDSUtility::sleep(wait_period); // let entities get up and running

    while (!application::shutdown_requested) {
        //Controller State Machine goes here;
        // If a devices device_state is UNITIALIZED then turn it on
        if (device_state_reader.getCurrentState() == UNINITIALIZED) {
            config_dev_writer.WriteData (config_dev_topic);
        }
        std::cout << "." << std::flush;                 
        NDDSUtility::sleep(wait_period);
    }

    pthread_cancel(config_dev_writer.Writer::getThreadId());
    pthread_cancel(device_state_reader.Reader::getThreadId());
    // give threads a second to shut down
    NDDSUtility::sleep(wait_period); // give time for entities to shutdown
    
    /* Delete all entities */
    return participant_shutdown(participant);
    std::cout << "Controller main thread shutting down" << std::endl;

    // TO_DO do I need a delete_participant call to clean anything up?
}
} // namespace MODULE

int main(int argc, char *argv[]) {

    using namespace application;

    int domain_id = 0;

    setup_signal_handlers();

    try {
        return MODULE::run_controller_application(domain_id);
    }
    catch (const std::exception &ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_controller_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

