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
#include <dds/dds.hpp>

namespace MODULE
{

    DeviceStateRdr::DeviceStateRdr(const dds::domain::DomainParticipant participant )
      : Reader(participant, MODULE::TOPIC_DEVICE_STATE, MODULE::DEVICE_STATE_READER) {
    };

    void DeviceStateRdr::handler(dds::core::xtypes::DynamicData& data) {
        std::cout << "Device State Reader Handler Executing" << std::endl; 
       
        this->currentState=(MODULE::DeviceStateEnum)data.value<int32_t>("state");
        this->id = data.value<int32_t>("myDeviceId.id");
        this->resourceId = data.value<int32_t>("myDeviceId.resourceId");

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

    DeviceStateWtr::DeviceStateWtr(
        const dds::domain::DomainParticipant participant,
        dds::core::Duration period)
      : Writer(participant, MODULE::TOPIC_DEVICE_STATE, MODULE::DEVICE_STATE_WRITER, period) {
        // Update Static Topic Data parameters in the beginning of the handler
        // prior to the loop, but after the entity base class creates the sample.
        // std::cout << "Device State C'Tor" << std::endl; 
    };

    void DeviceStateWtr::writeData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        //test filter since we are deviceId.id =20 and will filter requests for 20 not 30
        //this->getMyDataSample()->value<int32_t>("myDeviceId.id", 30); // this works
        //this->getMyDataSample()->value<int32_t>("state", current_state);
        
        // Assign Topic Static Data here (so we do it only once)
        // Preload the Device Writer with the device ID ("read out of EEPROM:-)"
        // Ideally this would be done in the DeviceStateWtr C'tor but the
        // Object is not quite ready until the C'tor completes
        this->getMyDataSample()->value<int32_t>("myDeviceId.resourceId", 2);
        this->getMyDataSample()->value<int32_t>("myDeviceId.id", 20);
        this->getMyDataSample()->value<int32_t>("state", (int32_t)current_state);
        this->getMyWriter()->write(*this->getMyDataSample());
    }

    /*  
    // Uncomment to put handle writer events or periodic data uniquely
    void DeviceStateWtr::handler(dds::core::status::StatusMask triggered_mask) {
        // The handler gets called periodically  loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Device State Writer Handler Executing" << std::endl; 
    }    
    */

    ConfigDevRdr::ConfigDevRdr(const dds::domain::DomainParticipant participant, const std::string filter_name)
      : Reader(participant, MODULE::TOPIC_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_READER) {
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

    void ConfigDevRdr::handler(dds::core::xtypes::DynamicData& data) {
        std::cout << "Configure Device Reader Handler Executing" << std::endl; 
         // if we get a CONFIGURE_DEVICE_TOPIC then set the device current state
         // to the requested state
        this->devicesDevStateWtr->setCurrentState(
            (MODULE::DeviceStateEnum)data.value<int32_t>("deviceConfig.stateReq")); 

    }  


    ConfigDevWtr::ConfigDevWtr(
        const dds::domain::DomainParticipant participant,
        dds::core::Duration period)
      : Writer(participant, MODULE::TOPIC_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_WRITER, period) {
          // std::cout << "Config Device Writer C'tor" << std::endl;             
    };

    /*  
    // Uncomment to put handle writer events or periodic data uniquely
    void ConfigDevWtr::handler(dds::core::status::StatusMask triggered_mask) {
        // Used to modify sent data or to handle specific events per Topic
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 
    }
    */

    void ConfigDevWtr::writeData(enum MODULE::DeviceStateEnum configReq) {
        std::cout << "Writing Config Request to device " << std::endl; 

        Writer::getMyDataSample()->value<int32_t>("targetDeviceId.resourceId", this->deviceDevStateRdr->getDeviceResourceId());
        Writer::getMyDataSample()->value<int32_t>("targetDeviceId.id", this->deviceDevStateRdr->getDeviceId());

        Writer::getMyDataSample()->value<int32_t>("deviceConfig.stateReq", (int32_t)configReq);
        Writer::getMyWriter()->write(*Writer::getMyDataSample());

    }   

} // namespace
