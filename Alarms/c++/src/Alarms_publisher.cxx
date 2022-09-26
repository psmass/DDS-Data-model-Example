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

#include "Alarms.h"
#include "AlarmsSupport.h"
#include "ndds/ndds_cpp.h"
#include "application.h"

using namespace application;

static int shutdown_participant(
    DDSDomainParticipant *participant,
    const char *shutdown_message,
    int status);

int run_publisher_application(unsigned int domain_id, unsigned int sample_count)
{
    // Start communicating in a domain, usually one participant per application
    DDSDomainParticipant *participant =
    DDSTheParticipantFactory->create_participant(
        domain_id,
        DDS_PARTICIPANT_QOS_DEFAULT,
        NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        return shutdown_participant(participant, "create_participant error", EXIT_FAILURE);
    }

    // A Publisher allows an application to create one or more DataWriters
    DDSPublisher *publisher = participant->create_publisher(
        DDS_PUBLISHER_QOS_DEFAULT,
        NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        return shutdown_participant(participant, "create_publisher error", EXIT_FAILURE);
    }

    // Register the datatype to use when creating the Topic
    const char *type_name = Alarms_IntrusionAlarmTypeSupport::get_type_name();
    DDS_ReturnCode_t retcode =
    Alarms_IntrusionAlarmTypeSupport::register_type(participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        return shutdown_participant(participant, "register_type error", EXIT_FAILURE);
    }

    // Create a Topic with a name and a datatype
    DDSTopic *topic = participant->create_topic(
        "Example Alarms_IntrusionAlarm",
        type_name,
        DDS_TOPIC_QOS_DEFAULT,
        NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        return shutdown_participant(participant, "create_topic error", EXIT_FAILURE);
    }

    // This DataWriter writes data on "Example Alarms_IntrusionAlarm" Topic
    DDSDataWriter *untyped_writer = publisher->create_datawriter(
        topic,
        DDS_DATAWRITER_QOS_DEFAULT,
        NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (untyped_writer == NULL) {
        return shutdown_participant(participant, "create_datawriter error", EXIT_FAILURE);
    }

    // Narrow casts from an untyped DataWriter to a writer of your type 
    Alarms_IntrusionAlarmDataWriter *typed_writer =
    Alarms_IntrusionAlarmDataWriter::narrow(untyped_writer);
    if (typed_writer == NULL) {
        return shutdown_participant(participant, "DataWriter narrow error", EXIT_FAILURE);
    }

    // Create data for writing, allocating all members
//Create memory for Instance #1: this will allocate space for the Alarms data structure 
    Alarms_IntrusionAlarm *data = Alarms_IntrusionAlarmTypeSupport::create_data();
    if (data == NULL) {
        return shutdown_participant(
            participant,
            "Alarms_IntrusionAlarmTypeSupport::create_data error",
            EXIT_FAILURE);
    }
//This creates separate memory for Instance #2 called data2
    Alarms_IntrusionAlarm *data2 = Alarms_IntrusionAlarmTypeSupport::create_data();
    if (data2 == NULL) {
        return shutdown_participant(
            participant,
            "Alarms_IntrusionAlarmTypeSupport::create_data error",
            EXIT_FAILURE);
    }

//Optional use of having an Instance handle permanently generated
	DDS_InstanceHandle_t fl265Handle = typed_writer->register_instance(*data);
	DDS_InstanceHandle_t fl265Handle2 = typed_writer->register_instance(*data2);

    // Main loop, write data
    for (unsigned int samples_written = 0;
    !shutdown_requested && samples_written < sample_count;
    ++samples_written) {


        // Modify the data to be written here
//Instance #1 - populating the content of this sample
		char alarm_string[] = "alarm name";
		data->sourceId.id = 1;  //note the keyed value is set to something unique
		data->sourceId.resourceId = 10;  //note the keyed value is set to something unique
		data->alarmTypeName = alarm_string;
		data->severity = Critical;
		data->null = Open;
		data->numericValue.number =  (float) samples_written;
		data->numericValue.Units = Celcius;

//Instance #2 - populating the sample
		data2->sourceId.id = 2;  //note the keyed value is set to something unique
		data2->sourceId.resourceId = 20;  //note the keyed value is set to something unique
		data2->alarmTypeName = alarm_string;
		data2->severity = Critical;
		data2->null = Open;
		data2->numericValue.number = (float) samples_written;
		data2->numericValue.Units = Farenheit;

        std::cout << "Writing Alarms_IntrusionAlarm, count " << samples_written 
        << std::endl;
//Write Instance #1
        retcode = typed_writer->write(*data, fl265Handle);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "write error " << retcode << std::endl;
        }
//Write Instance #2
        retcode = typed_writer->write(*data2, fl265Handle2);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "write error " << retcode << std::endl;
        }

        // Send once every second
        DDS_Duration_t send_period = { 1, 0 };
        NDDSUtility::sleep(send_period);
    }
	//  Unregister Instances - indicating they will no longer be updated

	if (typed_writer->unregister_instance(*data, fl265Handle) != DDS_RETCODE_OK) {
		std::cerr << "Alarms_IntrusionAlarmTypeSupport::Instance 1 unregistration error " << retcode
			<< std::endl;
	}
	if (typed_writer->unregister_instance(*data2, fl265Handle2) != DDS_RETCODE_OK) {
		std::cerr << "Alarms_IntrusionAlarmTypeSupport::Instance 2 unregistration error " << retcode
			<< std::endl;
	}

    // Delete previously allocated Alarms_IntrusionAlarm, including all contained elements
    retcode = Alarms_IntrusionAlarmTypeSupport::delete_data(data);
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "Alarms_IntrusionAlarmTypeSupport::delete_data error " << retcode
        << std::endl;
    }
	retcode = Alarms_IntrusionAlarmTypeSupport::delete_data(data2);
	if (retcode != DDS_RETCODE_OK) {
		std::cerr << "Alarms_IntrusionAlarmTypeSupport::delete_data2 error " << retcode
			<< std::endl;
	}
    // Delete all entities (DataWriter, Topic, Publisher, DomainParticipant)
    return shutdown_participant(participant, "Shutting down", EXIT_SUCCESS);
}

// Delete all entities
static int shutdown_participant(
    DDSDomainParticipant *participant,
    const char *shutdown_message,
    int status)
{
    DDS_ReturnCode_t retcode;

    std::cout << shutdown_message << std::endl;

    if (participant != NULL) {
        // Cleanup everything created by this Participant
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "delete_contained_entities error " << retcode
            << std::endl;
            status = EXIT_FAILURE;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
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
    if (arguments.parse_result == PARSE_RETURN_EXIT) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == PARSE_RETURN_FAILURE) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    NDDSConfigLogger::get_instance()->set_verbosity(arguments.verbosity);

    int status = run_publisher_application(arguments.domain_id, arguments.sample_count);

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    DDS_ReturnCode_t retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "finalize_instance error " << retcode << std::endl;
        status = EXIT_FAILURE;
    }

    return status;
}

