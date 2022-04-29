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

namespace MODULE
{

    DeviceStateRdr::DeviceStateRdr(dds::domain::DomainParticipant participant,
                const std::string topic_name,
                const std::string reader_name,
                bool filterOnId )
                 : Reader(participant, topic_name, reader_name, filterOnId) {
    };

    void DeviceStateRdr::Handler() {
        std::cout << "Device State Reader Handler Executing" << std::endl; 
    }    

    DeviceStateWtr::DeviceStateWtr(dds::domain::DomainParticipant participant,
                const std::string topic_name,
                const std::string writer_name,
                int period, 
                bool prefillDevId)
                 : Writer(participant, topic_name, writer_name, period, prefillDevId) {
    };

    void DeviceStateWtr::Handler() {
        std::cout << "Device State Writer Handler Executing" << std::endl; 
    }    


    ConfigDevRdr::ConfigDevRdr(dds::domain::DomainParticipant participant,
                const std::string topic_name,
                const std::string reader_name,
                bool filterOnId)
                 : Reader(participant, topic_name, reader_name, filterOnId) {
    };

    void ConfigDevRdr::Handler() {
        std::cout << "Configure Device Reader Handler Executing" << std::endl; 
    }  


    ConfigDevWtr::ConfigDevWtr(dds::domain::DomainParticipant participant,
                const std::string topic_name,
                const std::string writer_name,
                int period, 
                bool prefillDevId)
                 : Writer(participant, topic_name, writer_name, period, prefillDevId) {
    };

    void ConfigDevWtr::Handler() {
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 
    }    

} // namespace
