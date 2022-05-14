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

#include "topics.h"
#include "CommandResp.h"
#include <dds/dds.h>

const std::string _DEVICE_STATE_READER = MODULE::DEVICE_STATE_READER;
const std::string _DEVICE_STATE_WRITER = MODULE::DEVICE_STATE_WRITER;
const std::string _CONFIGURE_DEVICE_READER = MODULE::CONFIGURE_DEVICE_READER;
const std::string _CONFIGURE_DEVICE_WRITER = MODULE::CONFIGURE_DEVICE_WRITER;

const std::string _TOPIC_DEVICE_STATE = MODULE::MODULE_EX_CMD_RSP + "::" + MODULE::TOPIC_DEVICE_STATE;
const std::string _TOPIC_CONFIGURE_DEVICE = MODULE::MODULE_EX_CMD_RSP + "::" + MODULE::TOPIC_CONFIGURE_DEVICE;
namespace MODULE
{

    DeviceStateRdr::DeviceStateRdr(const dds::domain::DomainParticipant participant )
                 : Reader(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_READER) {
    };

    void DeviceStateRdr::Handler(dds::core::xtypes::DynamicData& data) {
        std::cout << "Device State Reader Handler Executing" << std::endl; 
       
        setCurrentState((MODULE::DeviceStateEnum)data.value<int32_t>("state"));

        std::cout << "Controller Tracking Device Current state to: ";
        switch(getCurrentState()) {
            case MODULE::DeviceStateEnum::UNINITIALIZED:
                std::cout << "UNITIALIZED";
                break;
            case MODULE::DeviceStateEnum::OFF:
                std::cout << "OFF";
                break;
            case MODULE::DeviceStateEnum::ON:
                std::cout << "ON";
                break;
            case MODULE::DeviceStateEnum::ERROR:
                std::cout << "ERROR";
                break;
            default: std::cout << "OOPS - not a valid value";
        }
    }    

    DeviceStateWtr::DeviceStateWtr(const dds::domain::DomainParticipant participant)
                 : Writer(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_WRITER) {
        // Update Static Topic Data parameters in the beginning of the handler
        // prior to the loop, but after the entity base class creates the sample.
        //std::cout << "Device State C'Tor" << std::endl; 


    };

    void DeviceStateWtr::writeData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        // Modify sample with current state as soon as I figure out how to load an enum
        //this->getMyDataSample()->value<int32_t>("myDeviceId.id", 30); // this works
        //this->getMyDataSample()->value<int32_t>("state", current_state);
        this->getMyDataSample()->value<int32_t>("state", (int32_t)current_state);
        this->getMyWriter()->write(*this->getMyDataSample());
    }

    void DeviceStateWtr::Handler() {

        // Writer Handlers run in thread and don't return until exit
        // The handler loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Device State Writer Handler Executing" << std::endl; 


        Writer::getMyDataSample()->value<int32_t>("myDeviceId.resourceId", 2);
        Writer::getMyDataSample()->value<int32_t>("myDeviceId.id", 20);

        auto sampleNumber = 1;
    
        while (!application::shutdown_requested)
        {
            // this topic is not periodic, so we'll only use this thread to monitor writer events
            // once we figure out the API more Modern C++
            std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
            auto duration = now.time_since_epoch();
            auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

            // Modify the data to be written periodically here and uncomment the write
            //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
            //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
            //Writer::getMyWriter()->write(*Writer::getMyDataSample());
            
            //std::cout
            //<< "Writing Sample: " << sampleNumber 
            //<< "{'myDeviceId': {'resourceId': " << deviceStateSample.value<int32_t>("myDeviceId.resourceId") 
            //<< ", 'id': " << deviceStateSample.value<int32_t>("myDeviceId.id") << "}"
            //<< std::endl;

            // Send once every second
            rti::util::sleep(dds::core::Duration(1));
            //sampleNumber++;
        }

        // std::cout << this->Writer::topicName << " Writer Handler shutting down" << std::endl; 

    }    


    ConfigDevRdr::ConfigDevRdr(const dds::domain::DomainParticipant participant, const std::string filter_name)
                 : Reader(participant, _TOPIC_CONFIGURE_DEVICE, _CONFIGURE_DEVICE_READER) {
        // std::cout << "Config Dev Reader C'tor " << std::endl; 
        // Find and install a filter for myDeviceID on the targetID (Device Reads Config Device 
        // commands, andonly wants the commands directed to it.) - THIS SHOULD BE A BUILT IN TOPIC
 
        //rti::topic::CustomFilter<MODULE::ConfigureDevice> configDevReaderCft=rti::topic::find_content_filter (participant, filter_name);
        /*
        // Find the Topic
        dds::topic::Topic<dds::topic::AnyTopic> topic = dds::topic::find(participant, _TOPIC_CONFIGURE_DEVICE);
        // Create the parameter list
        std::vector<std::string> cft_parameters(1);
        cft_parameters[0] = "20"; // myDeviceID number - redefine as a const at the start of the program vs. hardcode

        // Create the ContentFilteredTopic
        dds::topic::ContentFilteredTopic<ExCmdRsp::ConfigureDevice> cft(
            topic, // related topic
            "MyFilter", // local name for the CFT
            dds::topic::Filter(         // filter (constructed in-line in this example)
                "targetDeviceId.id=%0", // expression
                cft_parameters));       // parameter vector
        */

    };

    void ConfigDevRdr::Handler(dds::core::xtypes::DynamicData& data) {
        std::cout << "Configure Device Reader Handler Executing" << std::endl; 
         // if we get a CONFIGURE_DEVICE_TOPIC then set the device current state = to the sent state
        devicesDevStateWtrPtr->setCurrentState(
            (MODULE::DeviceStateEnum)data.value<int32_t>("deviceConfig.stateReq")); 

    }  


    ConfigDevWtr::ConfigDevWtr(const dds::domain::DomainParticipant participant)
                 : Writer(participant, _TOPIC_CONFIGURE_DEVICE, _CONFIGURE_DEVICE_WRITER) {
          // std::cout << "Config Device Writer C'tor" << std::endl;             
    };

    void ConfigDevWtr::Handler() {

        // Writer Handlers run in thread and don't return until exit
        // The handler loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 

        Writer::getMyDataSample()->value<int32_t>("targetDeviceId.resourceId", 2);
        Writer::getMyDataSample()->value<int32_t>("targetDeviceId.id", 20);

        auto sampleNumber = 1;
    
        while (!application::shutdown_requested)
        {

            // this topic is not periodic, so we'll only use this thread to monitor writer events
            // once we figure out the API more Modern C++
            std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
            auto duration = now.time_since_epoch();
            auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

            // Modify the data to be written here
            // deviceStateSample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
            // deviceStateSample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
            // Writer::getMyWriter()->write(*Writer::getMyDataSample());

            //std::cout << "Writing Sample: " << sampleNumber 
            //<< "{'targetDeviceId': {'resourceId': " << configDeviceSample.value<int32_t>("targetDeviceId.resourceId") 
            //<< ", 'id': " << configDeviceSample.value<int32_t>("targetDeviceId.id") << "}"
            //<< std::endl;

            // Send once every second
            rti::util::sleep(dds::core::Duration(1));
            //sampleNumber++;
        }
    }


    void ConfigDevWtr::writeData(enum MODULE::DeviceStateEnum configReq) {
        std::cout << "Writing Config Request to device " << std::endl; 

        Writer::getMyDataSample()->value<int32_t>("deviceConfig.stateReq", (int32_t)configReq);
        Writer::getMyWriter()->write(*Writer::getMyDataSample());

    }   

} // namespace
