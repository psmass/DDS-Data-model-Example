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
 * 
 *  YOUR TOPICS GO HERE -  See notes in header file
 */

#include <string.h>
#include <string>
#include "topics.h"
#include "CommandResp.h"
#include "CommandRespSupport.h"
#include <ndds/ndds_cpp.h>
#include "topics_T.h"

extern bool application::shutdown_requested;

namespace MODULE
{

    void DeviceStateRdr::handler(const MODULE::DeviceState * data) {
        //myReaderThreadInfo->dataSeqIndx = i;
        // std::cout << "Recieved: " << MY_READER_TOPIC_NAME << std::endl; //

        // collect the device information
        this->read_topic.myDeviceId.id = data->myDeviceId.id;
        this->read_topic.myDeviceId.resourceId = data->myDeviceId.resourceId;
        this->read_topic.state=(enum MODULE::DeviceStateEnum)data->state; 

        std::cout << "Controller Tracking Device Current state to: ";
        switch(this->read_topic.state) {
            case UNINITIALIZED:     // aka MODULE::DeviceStateEnum::UNINITIALIZED:
                std::cout << "UNITIALIZED";
                break;
            case OFF:
                std::cout << "OFF";
                break;
            case ON:
                std::cout << "ON";
                break;
            case ERROR:
                std::cout << "ERROR";
                break;
            default: std::cout << "OOPS - not a valid value";
        }
        std::cout << std::endl;
        MODULE::DeviceStateTypeSupport::print_data(data); 
    }
 

    void DeviceStateWtr::writeData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        // Modify sample with current state as soon as I figure out how to load an enum

        // load the current_state in to the sample to be written
        // need to use get'rs for things in the template or derived class
        this->getTopicSample()->state=current_state; 
        //MODULE::DeviceStateTypeSupport::print_data(this->getTopicSample()); 
        this->write();
    
    }


    void ConfigDevRdr::handler(const MODULE::ConfigureDevice * data) {
            if (this->getDevStateWtr()!=NULL) {
                this->getDevStateWtr()->setCurrentState((enum MODULE::DeviceStateEnum)data->deviceConfig.stateReq);
                std::cout << "ConfigureDevice Command Received:" << std::endl;
                MODULE::ConfigureDeviceTypeSupport::print_data(data); 
            } else {
                std::cout << "ConfigDevReader had not loaded DevState Writer Pointer" << std::endl;
            }
    }


    void ConfigDevWtr::writeData(const enum MODULE::DeviceStateEnum state_req) {
        std::cout << "Writing Config Request to device " << std::endl; 

        // this is a straight copy so perhaps a more efficient way to do this
        this->topicSample->targetDeviceId.id = this->getDevStateRdr()->getReadDevState()->myDeviceId.id;
        this->topicSample->targetDeviceId.resourceId = this->getDevStateRdr()->getReadDevState()->myDeviceId.resourceId;
        this->topicSample->deviceConfig.stateReq=state_req; // per state requested
        this->write();
    }   

} // namespace
