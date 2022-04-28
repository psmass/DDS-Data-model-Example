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
#include "topics.hpp"
#include "application.hpp"

namespace MODULE
{

// The idea below is to encapsulate the DDS entity names assocated with  TOPICS, PARTICIPANTS,
// READERS, // and WRITERS as constants in with the system XML project (and include in the IDL
// file). This allows running the IDL file through rtiCodeGen to create a headerfile with
// constants defined as part of the data/system model and not replicated in the application.
// It may be inefficient for only two Participants each with two topics, but for a larger data
// model it is quite relavent to maintain consistant naming should the data/system model change.
// 
// The Reader (readers if we had more than one) run in their own thread as they wait for available data. 
// The writer (writers if we had more than one) run in the mainline code, but should run in their own
// thread if we are monitoring event conditions.
const std::string _PARTICIPANT = MODULE::DEVICE1_PARTICIPANT;
const std::string _DEVICE_STATE_WRITER = MODULE::DEVICE_STATE_WRITER;
const std::string _CONFIGURE_DEVICE_READER = MODULE::CONFIGURE_DEVICE_READER;

const std::string _TOPIC_DEVICE_STATE = MODULE::MODULE_EX_CMD_RSP + "::" + MODULE::TOPIC_DEVICE_STATE;
const std::string _TOPIC_CONFIGURE_DEVICE = MODULE::MODULE_EX_CMD_RSP + "::" + MODULE::TOPIC_CONFIGURE_DEVICE;

void run_device_application()
{  
    // Create the participant
    dds::core::QosProvider qos_provider({ MODULE::QOS_FILE });
    dds::domain::DomainParticipant participant =
        qos_provider->create_participant_from_config(_PARTICIPANT);

    Reader config_dev_reader(participant, _TOPIC_CONFIGURE_DEVICE, _CONFIGURE_DEVICE_READER);
    Writer device_state_writer(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_WRITER);

    // Lookup the specific topic DeviceState as defined in the xml file.
    // This will be needed to create samples of the correct type
    const dds::core::xtypes::DynamicType &deviceStateType =
      qos_provider->type(_TOPIC_DEVICE_STATE);

    // rti::core::xtypes::print_idl(deviceStateType);

   // Find the DataWriter defined in the xml by using the participant and the
    // publisher::writer pair as the datawriter name.
    dds::pub::DataWriter<dds::core::xtypes::DynamicData> writerDeviceState =
        rti::pub::find_datawriter_by_name<
            dds::pub::DataWriter<dds::core::xtypes::DynamicData>>(
            participant,
            _DEVICE_STATE_WRITER);

    // Create one sample from the specified type and populate the id field.
    // This sample will be used repeatedly in the loop below.
    dds::core::xtypes::DynamicData deviceStateSample(deviceStateType);
    
    deviceStateSample.value<int32_t>("myDeviceId.resourceId", 2);
    deviceStateSample.value<int32_t>("myDeviceId.id", 20);
    MODULE::DeviceStateEnum foo = MODULE::DeviceStateEnum::UNINITIALIZED;
    //deviceStateSample.value<int32_t>("state", foo);
    //deviceStateSample.value<int32_t>("state", MODULE::DeviceStateEnum::UNINITIALIZED);

    auto sampleNumber = 1;
   
    while (!application::shutdown_requested)
    {
        std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
        auto duration = now.time_since_epoch();
        auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

       // Modify the data to be written here
        //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
        //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
        writerDeviceState.write(deviceStateSample);

        std::cout
	    << "Writing Sample: " << sampleNumber 
        << "{'myDeviceId': {'resourceId': " << deviceStateSample.value<int32_t>("myDeviceId.resourceId") 
        << ", 'id': " << deviceStateSample.value<int32_t>("myDeviceId.id") << "}"
        << std::endl;

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
	    sampleNumber++;
    }
    //cfg_dev_rd_thread.join();
    std::cout << "main thread shutting down" << std::endl;
}
} // namespace MODULE

int main(int argc, char *argv[])
{

    using namespace application;

    setup_signal_handlers();

    try
    {
        MODULE::run_device_application();
    }
    catch (const std::exception &ex)
    {
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


