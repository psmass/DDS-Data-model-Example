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
#include <ndds/ndds_cpp.h>

const std::string _DEVICE_STATE_READER = MODULE::DEVICE_STATE_READER;
const std::string _DEVICE_STATE_WRITER = MODULE::DEVICE_STATE_WRITER;
const std::string _CONFIGURE_DEVICE_READER = MODULE::CONFIGURE_DEVICE_READER;
const std::string _CONFIGURE_DEVICE_WRITER = MODULE::CONFIGURE_DEVICE_WRITER;

const std::string _TOPIC_DEVICE_STATE = MODULE::TOPIC_DEVICE_STATE;
const std::string _TOPIC_CONFIGURE_DEVICE = MODULE::TOPIC_CONFIGURE_DEVICE;


namespace MODULE
{

    DeviceStateRdr::DeviceStateRdr(DDSDomainParticipant * participant )
                 : Reader(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_READER) {

        this->previousState = ERROR; // aka MODULE::DeviceStateEnum::ERROR:
        this-> currentState = ERROR; 
    };

    void DeviceStateRdr::Handler(DDS_DynamicData & data) {
        std::cout << "Device State Reader Handler Executing" << std::endl; 
       
        //setCurrentState((MODULE::DeviceStateEnum)data.value<int32_t>("state"));
        DDS_Long state;
        // ERROR_CHECK
        data.get_long(state, "state", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
        setCurrentState((enum MODULE::DeviceStateEnum)state);

        std::cout << "Controller Tracking Device Current state to: ";
        switch(getCurrentState()) {
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
    }    

    DeviceStateWtr::DeviceStateWtr(DDSDomainParticipant * participant)
                 : Writer(participant, _TOPIC_DEVICE_STATE, _DEVICE_STATE_WRITER) {
        // Update Static Topic Data parameters in the beginning of the handler
        // prior to the loop, but after the entity base class creates the sample.
        //std::cout << "Device State C'Tor" << std::endl; 
        this->previousState =  ERROR; //aka MODULE::DeviceStateEnum::ERROR
        this->currentState = UNINITIALIZED; 
    };

    void DeviceStateWtr::writeData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        // Modify sample with current state as soon as I figure out how to load an enum
        //this->getMyDataSample()->value<int32_t>("myDeviceId.id", 30); // this works
        //this->getMyDataSample()->value<int32_t>("state", current_state);
        
        // load the current_state in to the sample to be written
        // ERROR_CHECK
        this->getMyDataSample()->set_long("state", 
                        DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (int32_t)current_state);
        this->getMyWriter()->write(*this->getMyDataSample(), DDS_HANDLE_NIL);
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
        
        // ERROR_CHECK
        this->topicSample->set_long("myDeviceId.resourceId", 
                                            DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 2 );
        this->topicSample->set_long("myDeviceId.id", 
                                            DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 20); 
 
        int sampleNumber = 1;
    
        while (!application::shutdown_requested)  {

            // Wait for event or timeout, if event call event handler
            retcode = this->waitset->wait(active_conditions_seq, send_period);
            if (retcode == DDS_RETCODE_TIMEOUT) {
            //std::cerr << "Writer thread: Wait timed out!! No conditions were triggered" << std::endl;
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                std::cerr << "Writer thread: wait returned error " << retcode << std::endl;
                goto end_writer_handler;
            }
            this->WriterEventHandler(retcode, active_conditions_seq);
 
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
        end_writer_handler:
        ;
        // std::cout << this->Writer::topicName << " Writer Handler shutting down" << std::endl; 

    }    


    ConfigDevRdr::ConfigDevRdr(DDSDomainParticipant * participant, const std::string filter_name)
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

    void ConfigDevRdr::Handler(DDS_DynamicData & data) {
        std::cout << "Configure Device Reader Handler Executing" << std::endl; 
         // if we get a CONFIGURE_DEVICE_TOPIC then set the device current state = to the sent state

        //devicesDevStateWtrPtr->setCurrentState(
        //    (MODULE::DeviceStateEnum)data.value<int32_t>("deviceConfig.stateReq")); 

        DDS_Long requested_state;
        // ERROR_CHECK
        data.get_long(requested_state, "deviceConfig.stateReq", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
        this->devicesDevStateWtrPtr->setCurrentState((enum MODULE::DeviceStateEnum)requested_state);

    }  


    ConfigDevWtr::ConfigDevWtr(DDSDomainParticipant * participant)
                 : Writer(participant, _TOPIC_CONFIGURE_DEVICE, _CONFIGURE_DEVICE_WRITER) {
          // std::cout << "Config Device Writer C'tor" << std::endl;             
    };

    void ConfigDevWtr::Handler() {
        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t send_period = {1,0}; 

        // Writer Handlers run in thread and don't return until exit
        // The handler loads up the specific data fields and writes the sample
        // Here we can write periodically, or on change or any other condition
        std::cout << "Configure Device Writer Handler Executing" << std::endl; 

        this->getMyDataSample()->set_long("targetDeviceId.resourceId", 
                                            DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 2 );
        this->getMyDataSample()->set_long("targetDeviceId.id", 
                                           DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 20);

        int sampleNumber = 1;
    
        while (!application::shutdown_requested)
        {
            // Wait for event or timeout, if event call event handler
            retcode = this->waitset->wait(active_conditions_seq, send_period);
            if (retcode == DDS_RETCODE_TIMEOUT) {
            //std::cerr << "Writer thread: Wait timed out!! No conditions were triggered" << std::endl;
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                std::cerr << "Writer thread: wait returned error " << retcode << std::endl;
                goto end_writer_handler;
            }
            this->WriterEventHandler(retcode, active_conditions_seq);
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
        end_writer_handler:
        ;
    }


    void ConfigDevWtr::writeData(enum MODULE::DeviceStateEnum configReq) {
        std::cout << "Writing Config Request to device " << std::endl; 

        this->getMyDataSample()->set_long("deviceConfig.stateReq", 
            DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (int32_t)configReq);
        this->getMyWriter()->write(*this->getMyDataSample(), DDS_HANDLE_NIL);

    }   

} // namespace
