/*
 * (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
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
#include <stdio.h>
#include <stdlib.h>
#include <chrono>

#include "Sensor.h"
#include "SensorSupport.h"
#include "ndds/ndds_cpp.h"
#include "ndds/ndds_namespace_cpp.h"
#include "application.h"

using namespace DDS;
using namespace application;

static int shutdown_participant(
    DomainParticipant *participant,
    const char *shutdown_message,
    int status);

int run_publisher_application(unsigned int domain_id, unsigned int sample_count)
{
    /* To load my_custom_qos_profiles.xml, as explained above, we need to modify
     * the  TheParticipantFactory Profile QoSPolicy */
    DDS_DomainParticipantFactoryQos factory_qos;
    TheParticipantFactory->get_qos(factory_qos);

    /* We are only going to add one XML file to the url_profile sequence, so we
     * ensure a length of 1,1. */
    factory_qos.profile.url_profile.ensure_length(1, 1);

    /* The XML file will be loaded from the working directory. That means, you
     * need to run the example like this:
     * ./objs/<architecture>/Sensor_publisher.exe
     */
    factory_qos.profile.url_profile[0] = DDS_String_dup("../xml/SensorQoS.xml");
    TheParticipantFactory->set_qos(factory_qos);

    // Start communicating in a domain, usually one participant per application
    DomainParticipant *participant =
        TheParticipantFactory->create_participant_with_profile(
            domain_id,
            Sensor::Constants::SENSOR_QOS_LIBRARY,
            Sensor::Constants::RELIABLE_QOS_PROFILE,
            NULL /* listener */,
            STATUS_MASK_NONE);
    if (participant == NULL)
    {
        return shutdown_participant(participant, "create_participant error", EXIT_FAILURE);
    }

    // A Publisher allows an application to create one or more DataWriters
    Publisher *publisher = participant->create_publisher(
        PUBLISHER_QOS_DEFAULT,
        NULL /* listener */,
        STATUS_MASK_NONE);
    if (publisher == NULL)
    {
        return shutdown_participant(participant, "create_publisher error", EXIT_FAILURE);
    }

    // Register the datatype to use when creating the Topic
    const char *type_name = Sensor::HumiditySensorTypeSupport::get_type_name();
    ReturnCode_t retcode =
        Sensor::HumiditySensorTypeSupport::register_type(participant, type_name);
    if (retcode != RETCODE_OK)
    {
        return shutdown_participant(participant, "register_type error", EXIT_FAILURE);
    }

    // Create a Topic with a name and a datatype
    Topic *topic = participant->create_topic(
        Sensor::Constants::HUMIDITY_TOPIC,
        type_name,
        TOPIC_QOS_DEFAULT,
        NULL /* listener */,
        STATUS_MASK_NONE);
    if (topic == NULL)
    {
        return shutdown_participant(participant, "create_topic error", EXIT_FAILURE);
    }

    // This DataWriter writes data on Sensor::Constants::HUMIDITY_TOPIC Topic
    DataWriter *untyped_writer = publisher->create_datawriter_with_profile(
        topic,
        Sensor::Constants::SENSOR_QOS_LIBRARY,
        Sensor::Constants::RELIABLE_QOS_PROFILE,
        NULL /* listener */,
        STATUS_MASK_NONE);
    if (untyped_writer == NULL)
    {
        return shutdown_participant(participant, "create_datawriter error", EXIT_FAILURE);
    }

    // Narrow casts from an untyped DataWriter to a writer of your type
    Sensor::HumiditySensorDataWriter *typed_writer =
        Sensor::HumiditySensorDataWriter::narrow(untyped_writer);
    if (typed_writer == NULL)
    {
        return shutdown_participant(participant, "DataWriter narrow error", EXIT_FAILURE);
    }

    // Create data for writing, allocating all members
    Sensor::HumiditySensor *data = Sensor::HumiditySensorTypeSupport::create_data();
    if (data == NULL)
    {
        return shutdown_participant(
            participant,
            "Sensor::HumiditySensorTypeSupport::create_data error",
            EXIT_FAILURE);
    }

    data->sourceId.resourceId = 3;
    data->sourceId.id = 30;
    snprintf(data->sensorTypeName, Common::MIN_LEN, "Initech Humidity Sensor Model sr7928");
    // Main loop, write data
    for (unsigned int samples_written = 0;
         !shutdown_requested && samples_written < sample_count;
         ++samples_written)
    {
        std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
        auto duration = now.time_since_epoch();
        auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

        auto percent = 43.11f;
        // Modify the data to be written here
        data->metaData.timeOfGeneration.secs = nanoseconds / 1000000000;
        data->metaData.timeOfGeneration.nsecs = nanoseconds % 1000000000;
        data->relativeHumidity = percent;

        std::cout
            << "{'sourceId': {'resourceId': " << data->sourceId.resourceId
            << ", 'id': " << data->sourceId.id << "}"
            << ", 'sensorTypeName': '" << data->sensorTypeName << "'"
            << ", 'metaData': {'timeOfGeneration': {'secs': " << data->metaData.timeOfGeneration.secs
            << ", 'nsecs': " << data->metaData.timeOfGeneration.nsecs << "}}"
            << ", 'relativeHumidity': " << data->relativeHumidity << "}"
            << std::endl;

        retcode = typed_writer->write(*data, HANDLE_NIL);
        if (retcode != RETCODE_OK)
        {
            std::cerr << "write error " << retcode << std::endl;
        }

        // Send once every second
        Duration_t send_period = {1, 0};
        NDDSUtility::sleep(send_period);
    }

    // Delete previously allocated Sensor::HumiditySensor, including all contained elements
    retcode = Sensor::HumiditySensorTypeSupport::delete_data(data);
    if (retcode != RETCODE_OK)
    {
        std::cerr << "Sensor::HumiditySensorTypeSupport::delete_data error " << retcode
                  << std::endl;
    }

    // Delete all entities (DataWriter, Topic, Publisher, DomainParticipant)
    return shutdown_participant(participant, "Shutting down", EXIT_SUCCESS);
}

// Delete all entities
static int shutdown_participant(
    DomainParticipant *participant,
    const char *shutdown_message,
    int status)
{
    ReturnCode_t retcode;

    std::cout << shutdown_message << std::endl;

    if (participant != NULL)
    {
        // Cleanup everything created by this Participant
        retcode = participant->delete_contained_entities();
        if (retcode != RETCODE_OK)
        {
            std::cerr << "delete_contained_entities error " << retcode
                      << std::endl;
            status = EXIT_FAILURE;
        }

        retcode = TheParticipantFactory->delete_participant(participant);
        if (retcode != RETCODE_OK)
        {
            std::cerr << "delete_participant error " << retcode << std::endl;
            status = EXIT_FAILURE;
        }
    }

    return status;
}

int main(int argc, char *argv[])
{

    // Parse arguments and handle control-C
    ApplicationArguments arguments;
    parse_arguments(arguments, argc, argv);
    if (arguments.parse_result == PARSE_RETURN_EXIT)
    {
        return EXIT_SUCCESS;
    }
    else if (arguments.parse_result == PARSE_RETURN_FAILURE)
    {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    NDDSConfigLogger::get_instance()->set_verbosity(arguments.verbosity);

    std::cout << "*** Starting Sensor Publisher on Domain " << arguments.domain_id << ". CTRL-C to exit. ***" << std::endl;
    int status = run_publisher_application(arguments.domain_id, arguments.sample_count);

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    ReturnCode_t retcode = DomainParticipantFactory::finalize_instance();
    if (retcode != RETCODE_OK)
    {
        std::cerr << "finalize_instance error " << retcode << std::endl;
        status = EXIT_FAILURE;
    }

    return status;
}
