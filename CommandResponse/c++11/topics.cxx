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
      : Reader(participant, MODULE::TYPE_DEVICE_STATE, MODULE::DEVICE_STATE_READER) {
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
      : Writer(participant, MODULE::TYPE_DEVICE_STATE, MODULE::DEVICE_STATE_WRITER, period) {
        // Update Static Topic Data parameters in the beginning of the handler
        // prior to the loop, but after the entity base class creates the sample.
        // std::cout << "Device State C'Tor" << std::endl; 
    };

    void DeviceStateWtr::writeData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        // sample already has our devieID
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

    ConfigDevRdr::ConfigDevRdr(const dds::domain::DomainParticipant participant)
      : Reader(participant, MODULE::TYPE_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_READER) {

    };

    void ConfigDevRdr::installIdCft(const dds::domain::DomainParticipant participant) {
        // Device filters ConfigureDeviceRequests to it's deviceID, deviceID was "dug out of eeprom" and saved"
        // in the device_state_writer object sample data member. We need to retreive that and covert it to str.
        // XML app create file already installed a content filter w/ expression, but it's generic with
        // an id of 0, we need to upate the parameters of the filter to this devices id.
        // Configure our deviceID - "dug out of EERPOM", unfortunately we have to 
        // wait for the device writer thread to run as that's when the sample is allocated
        this->devicesDevStateWtr->getMyDataSample()->value<int32_t>("myDeviceId.resourceId", 2);
        this->devicesDevStateWtr->getMyDataSample()->value<int32_t>("myDeviceId.id", 20);
        std::vector<std::string> parameters(2);
        parameters[0] = std::to_string(this->devicesDevStateWtr->getMyDataSample()->value<int32_t>("myDeviceId.resourceId"));
        parameters[1] = std::to_string(this->devicesDevStateWtr->getMyDataSample()->value<int32_t>("myDeviceId.id"));

        dds::topic::ContentFilteredTopic<dds::core::xtypes::DynamicData> cft_topic = 
            dds::topic::find<dds::topic::ContentFilteredTopic<dds::core::xtypes::DynamicData>> (participant, MODULE::TOPIC_CONFIGURE_DEV_CFT);
        if (cft_topic == dds::core::null)
            throw std::invalid_argument("Reader Thread: cft_topic = NULL");
        else
           cft_topic.filter_parameters(parameters.begin(), parameters.end());

    }

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
      : Writer(participant, MODULE::TYPE_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_WRITER, period) {
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
