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

    void DeviceStateWtr::Handler() {
        std::cout << "Device State Writer Handler Executing" << std::endl; 
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

    void ConfigDevWtr::Handler() {
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 
    }    

} // namespace
