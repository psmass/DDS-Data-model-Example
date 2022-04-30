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

#include "topics.hpp"
#include "CommandResp.hpp"

const std::string _DEVICE_STATE_READER = MODULE::DEVICE_STATE_READER;
const std::string _DEVICE_STATE_WRITER = MODULE::DEVICE_STATE_WRITER;
const std::string _CONFIGURE_DEVICE_READER = MODULE::CONFIGURE_DEVICE_READER;
const std::string _CONFIGURE_DEVICE_WRITER = MODULE::CONFIGURE_DEVICE_WRITER;

const std::string _TOPIC_DEVICE_STATE = MODULE::MODULE_EX_CMD_RSP + "::" + MODULE::TOPIC_DEVICE_STATE;
const std::string _TOPIC_CONFIGURE_DEVICE = MODULE::MODULE_EX_CMD_RSP + "::" + MODULE::TOPIC_CONFIGURE_DEVICE;
namespace MODULE
{

    DeviceStateRdr::DeviceStateRdr(dds::domain::DomainParticipant participant )
                 : Reader(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_READER) {
    };

    void DeviceStateRdr::Handler() {
        std::cout << "Device State Reader Handler Executing" << std::endl; 
    }    

    DeviceStateWtr::DeviceStateWtr(dds::domain::DomainParticipant participant)
                 : Writer(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_WRITER) {
    };

    void DeviceStateWtr::Handler(
        dds::pub::DataWriter<dds::core::xtypes::DynamicData> deviceStateWriter, 
         dds::core::xtypes::DynamicData deviceStateSample) {

        // Writer Handlers run in thread and don't return until exit
        // The handler loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Device State Writer Handler Executing" << std::endl; 

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
            deviceStateWriter.write(deviceStateSample);

            std::cout
            << "Writing Sample: " << sampleNumber 
            << "{'myDeviceId': {'resourceId': " << deviceStateSample.value<int32_t>("myDeviceId.resourceId") 
            << ", 'id': " << deviceStateSample.value<int32_t>("myDeviceId.id") << "}"
            << std::endl;

            // Send once every second
            rti::util::sleep(dds::core::Duration(1));
            sampleNumber++;
        }

        std::cout << this->Writer::topicName << " Writer Handler shutting down" << std::endl; 

    }    


    ConfigDevRdr::ConfigDevRdr(dds::domain::DomainParticipant participant)
                 : Reader(participant, _TOPIC_CONFIGURE_DEVICE, _CONFIGURE_DEVICE_READER) {
    };

    void ConfigDevRdr::Handler() {
        std::cout << "Configure Device Reader Handler Executing" << std::endl; 
    }  


    ConfigDevWtr::ConfigDevWtr(dds::domain::DomainParticipant participant)
                 : Writer(participant, _TOPIC_CONFIGURE_DEVICE, _CONFIGURE_DEVICE_WRITER) {
    };

    void ConfigDevWtr::Handler(
        dds::pub::DataWriter<dds::core::xtypes::DynamicData> configDevWriter,
        dds::core::xtypes::DynamicData configDevSample) {

        // Writer Handlers run in thread and don't return until exit
        // The handler loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 

        configDevSample.value<int32_t>("targetDeviceId.resourceId", 2);
        configDevSample.value<int32_t>("targetDeviceId.id", 20);

        auto sampleNumber = 1;
    
        while (!application::shutdown_requested)
        {
            std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
            auto duration = now.time_since_epoch();
            auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

            // Modify the data to be written here
            //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
            //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
            configDevWriter.write(configDevSample);

            std::cout
            << "Writing Sample: " << sampleNumber 
            //<< "{'targetDeviceId': {'resourceId': " << configDeviceSample.value<int32_t>("targetDeviceId.resourceId") 
            //<< ", 'id': " << configDeviceSample.value<int32_t>("targetDeviceId.id") << "}"
            << std::endl;

            // Send once every second
            rti::util::sleep(dds::core::Duration(1));
            sampleNumber++;
        }
    }    

} // namespace
