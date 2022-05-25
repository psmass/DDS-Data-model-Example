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

    void DeviceStateRdr::process_data(MODULE::DeviceState * data) {
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
 

    void DeviceStateWtr::WriteData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        // Modify sample with current state as soon as I figure out how to load an enum

        // load the current_state in to the sample to be written
        // need to use get'rs for things in the template or derived class
        this->getTopicSample()->state=current_state; 
        //MODULE::DeviceStateTypeSupport::print_data(this->getTopicSample()); 
        this->getTopicWriter()->write(*this->getTopicSample(), DDS_HANDLE_NIL);
    
    }

    void DeviceStateWtr::Handler() {

        // Writer Handlers run in the topic writerthread and don't return until exit
        // The handler does three things:
        //   1) Sets to static topic data fields such as deviceId 
        //   2) Sets wait conditions to monitor writer events
        //   3) can be used to write sample periodically

        DDS_ReturnCode_t retcode;
        DDSConditionSeq active_conditions_seq;
        DDS_Duration_t send_period = {1,0}; // this topic send period, if periodic


        std::cout << "Device State Writer Handler Executing" << std::endl; 
 
        int sampleNumber = 1;
    
        while (!application::shutdown_requested)  {

            // Wait for event or timeout, if event call event handler
            retcode = this->waitset->wait(active_conditions_seq, send_period);
            if (retcode == DDS_RETCODE_TIMEOUT) {
            //std::cerr << "Writer thread: Wait timed out!! No conditions were triggered" << std::endl;
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Writer thread: wait returned error ");
            }
            this->WriterEventHandler(active_conditions_seq);
 
            // this topic is not periodic, so we'll only use this thread to monitor writer events
            // once we figure out the API more Modern C++
            std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
            std::chrono::high_resolution_clock::duration duration = now.time_since_epoch();
            // std::chrono::high_resolution_clock::nanoseconds nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

            // Modify the data to be written periodically here and uncomment the write
            //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
            //deviceStateSample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
            //Writer::getMyWriter()->write(*Writer::getMyDataSample());
            
            //std::cout
            //<< "Writing Sample: " << sampleNumber 
            //<< "{'myDeviceId': {'resourceId': " << deviceStateSample.value<int32_t>("myDeviceId.resourceId") 
            //<< ", 'id': " << deviceStateSample.value<int32_t>("myDeviceId.id") << "}"
            //<< std::endl;

            //sampleNumber++;
        }
        std::cout << this->Writer::topicName << " Writer Handler shutting down" << std::endl; 

    } 


    void ConfigDevRdr::process_data(MODULE::ConfigureDevice * data) {
            if (this->getDevStateWtr()!=NULL) {
                this->getDevStateWtr()->setCurrentState((enum MODULE::DeviceStateEnum)data->deviceConfig.stateReq);
                MODULE::ConfigureDeviceTypeSupport::print_data(data); 
            } else {
                std::cout << "ConfigDevReader had not loaded DevState Writer Pointer" << std::endl;
            }
    }


    void ConfigDevWtr::WriteData(const enum MODULE::DeviceStateEnum state_req) {
        std::cout << "Writing Config Request to device " << std::endl; 

        // this is a straight copy so perhaps a more efficient way to do this
        this->topicSample->targetDeviceId.id = this->getDevStateRdr()->getReadDevState()->myDeviceId.id;
        this->topicSample->targetDeviceId.resourceId = this->getDevStateRdr()->getReadDevState()->myDeviceId.resourceId;
        this->topicSample->deviceConfig.stateReq=state_req; // per state requested
        this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);
    }   

    void ConfigDevWtr::Handler() {
        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t send_period = {1,0}; 

        // Writer Handlers run in thread and don't return until exit
        // The handler loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 

        this->topicSample->targetDeviceId.resourceId=2;
        this->topicSample->targetDeviceId.id=20;

        int sampleNumber = 1;
    
        while (!application::shutdown_requested)
        {
            // Wait for event or timeout, if event call event handler
            retcode = this->waitset->wait(active_conditions_seq, send_period);
            if (retcode == DDS_RETCODE_TIMEOUT) {
            //std::cerr << "Writer thread: Wait timed out!! No conditions were triggered" << std::endl;
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Writer thread: wait returned error");
            }
            this->WriterEventHandler(active_conditions_seq);
            // this topic is not periodic, so we'll only use this thread to monitor writer events
            // once we figure out the API more Modern C++

            std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
            std::chrono::high_resolution_clock::duration duration = now.time_since_epoch();
            //std::chrono::time_point<std::chrono::system_clock>  nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();

            // Modify the data to be written here
            // deviceStateSample.value<int64_t>("metaData.timeOfGeneration.secs", nanoseconds / 1000000000);
            // deviceStateSample.value<int64_t>("metaData.timeOfGeneration.nsecs", nanoseconds % 1000000000);
            // Writer::getMyWriter()->write(*Writer::getMyDataSample());

            //std::cout << "Writing Sample: " << sampleNumber 
            //<< "{'targetDeviceId': {'resourceId': " << configDeviceSample.value<int32_t>("targetDeviceId.resourceId") 
            //<< ", 'id': " << configDeviceSample.value<int32_t>("targetDeviceId.id") << "}"
            //<< std::endl;

            //sampleNumber++;
        }
        std::cout << this->Writer::topicName << " Writer Handler shutting down" << std::endl; 
    }

} // namespace
