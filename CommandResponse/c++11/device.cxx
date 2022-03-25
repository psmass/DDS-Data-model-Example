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
#include <chrono>
#include <dds/dds.hpp>
#include <rti/util/util.hpp> // for sleep()
#include "application.hpp"   // for ctrl-c
#include "CommandResp.hpp"  // rti generated file from idl to use model const Topics

#define MODULE ExCmdRsp  // Same as MODULE_NAMESPACE defined in the idl file. Need without Quotes

const std::string QOS_FILE = "../../model/CommandProject.xml";

// The idea below is to encapsulate the DDS entity names assocated with  TOPICS, PARTICIPANTS,
// READERS, // and WRITERS as constants in with the system XML project (and include in the IDL
// file). This allows running the IDL file through rtiCodeGen to create a headerfile with
// constants defined as part of the data/system model and not replicated in the application.
// It may be inefficient for only two Participants each with two topics, but for a larger data
// model it is quite relavent to maintain consistant naming should the data/system model change.
const std::string _PARTICIPANT = MODULE::DEVICE1_PARTICIPANT;
const std::string _DEVICE_STATE_WRITER = MODULE::DEVICE_STATE_WRITER;
const std::string _CONFIGURE_DEVICE_READER = MODULE::CONFIGURE_DEVICE_READER;

const std::string _TOPIC_DEVICE_STATE = MODULE::MODULE_NAMESPACE + "::" + MODULE::TOPIC_DEVICE_STATE;



void run_device_application()
{
  
    rti::core::QosProviderParams provider_params;
    // Configure the default QosProvider to load the configuration
    // config_file == "/the/path/to/your/xml/configuration.xml"
    provider_params.url_profile({ QOS_FILE });
    rti::core::default_qos_provider_params(provider_params);
 
     // Create the participant
    auto qos_provider = dds::core::QosProvider::Default();
    dds::domain::DomainParticipant deviceParticipant =
        qos_provider->create_participant_from_config(_PARTICIPANT);

    std::cout<< "_TOPIC: " << _TOPIC_DEVICE_STATE << std::endl;

  
    // Lookup the specific topic DeviceState as defined in the xml file.
    // This will be needed to create samples of the correct type
    const dds::core::xtypes::DynamicType &deviceStateType =
      qos_provider->type(_TOPIC_DEVICE_STATE);
    
    // Find the DataWriter defined in the xml by using the participant and the
    // publisher::writer pair as the datawriter name.
    dds::pub::DataWriter<dds::core::xtypes::DynamicData> writerDeviceState =
        rti::pub::find_datawriter_by_name<
            dds::pub::DataWriter<dds::core::xtypes::DynamicData>>(
            deviceParticipant,
            _DEVICE_STATE_WRITER);
 
    // Create one sample from the specified type and populate the id field.
    // This sample will be used repeatedly in the loop below.
    dds::core::xtypes::DynamicData deviceState(deviceStateType);
    
    //deviceStateSample.value<int32_t>("sourceId.resourceId", 2);
    //sample.value<int32_t>("sourceId.id", 20);
    //sample.value<std::string>("sensorTypeName", "Humidity");

    auto sampleNumber = 1;
   
    while (!application::shutdown_requested)
    {
        std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
        auto duration = now.time_since_epoch();
        auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

        // Modify the data to be written here
        //sample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
        //sample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
        //sample.value<float_t>("relativeHumidity", percent);
	//        writerDeviceState.write(deviceState);

        std::cout
	  << "Writing Sample: " << sampleNumber 
          //  << "{'sourceId': {'resourceId': " << sample.value<int32_t>("sourceId.resourceId") 
          //  << ", 'id': " << sample.value<int32_t>("sourceId.id") << "}"
          //  << ", 'sensorTypeName': '" << sample.value<std::string>("sensorTypeName") << "'"
          //  << ", 'metaData': {'timeOfGeneration': {'secs': " << sample.value<int64_t>("metaData.timeOfGeneration.secs")
	  //   << ", 'nsecs': " << sample.value<int64_t>("metaData.timeOfGeneration.nsecs") << "}}"
          //  << ", 'relativeHumidity': " << sample.value<float_t>("relativeHumidity") << "}"
            << std::endl;

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
	sampleNumber++;
    }
}

int main(int argc, char *argv[])
{

    using namespace application;

    setup_signal_handlers();

    try
    {
        run_device_application();
    }
    catch (const std::exception &ex)
    {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_device_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
