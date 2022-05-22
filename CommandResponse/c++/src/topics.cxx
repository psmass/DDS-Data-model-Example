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

namespace MODULE
{
    
    DeviceStateRdr::DeviceStateRdr(
        DDSDomainParticipant * participant,
        DDSSubscriber * subscriber) : 
            Reader(participant, subscriber, MODULE::TOPIC_DEVICE_STATE, MODULE::DEVICE_STATE_READER) {

        this->previousState = ERROR; // aka MODULE::DeviceStateEnum::ERROR:
        this-> currentState = ERROR; 
        createReader<DeviceStateRdr, MODULE::DeviceStateTypeSupport, MODULE::DeviceStateDataReader> (this, MODULE::DEVICE_STATE_TOPIC_QOS_PROFILE, participant, subscriber);

    }


    void DeviceStateRdr::Handler() {

        MODULE::DeviceStateSeq data_seq;
        DDS_SampleInfoSeq info_seq;
        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t wait_duration = {1,0}; // timeout wait to ensure running

        std::cout << "Device State Reader Handler Executing" << std::endl; 

        while (!application::shutdown_requested) {
            // Wait 4 seconds for data 
            retcode = waitset->wait(active_conditions_seq, wait_duration);
            // waitset.wait(dds::core::Duration(4));
            if (retcode == DDS_RETCODE_TIMEOUT) {  
                // std::cout << "Reader thread: Wait timed out!! No conditions were triggered" << std::endl;
                // put thead health check here since we verified we are running
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Reader thread: wait returned error ");
            }

            int active_conditions = active_conditions_seq.length();

            for (int i = 0; i < active_conditions; ++i) {
                if (active_conditions_seq[i] == this->statusCondition) {
                    /* Get the status changes so we can check which status
                    * condition triggered. */
                    DDS_StatusMask triggeredmask =
                            this->topicReader->get_status_changes();

                    /* Subscription matched */
                    if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                        DDS_SubscriptionMatchedStatus st;
                        this->topicReader->get_subscription_matched_status(st);
                        std::cout << this->topicName << "Reader Pubs: " 
                        << st.current_count << "  " << st.current_count_change << std::endl;
                    }
                } else if (active_conditions_seq[i] == this->readCondition) { 
                    // Get the latest samples
                    retcode = this->topicReader->take(
                                data_seq, info_seq, DDS_LENGTH_UNLIMITED,
                                DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

                    if (retcode == DDS_RETCODE_OK) {
                        // we've got some data for what ever topic we recieved, figure that out, make an
                        // internal variable change as a result (if that's the case) and respond accordingly 
                        // (with a RequestResponse not an On Change Topic. On Change topics trigger from the 
                        // main loop as you peruse through internal variables that you see have changed as a
                        // result of a request or other internal event.
                        for (int i = 0; i < data_seq.length(); ++i) {
                            if (info_seq[i].valid_data) {  
 
                                //myReaderThreadInfo->dataSeqIndx = i;
                                // std::cout << "Recieved: " << MY_READER_TOPIC_NAME << std::endl; //
                                DDS_Long state=data_seq[i].state;
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
                                MODULE::DeviceStateTypeSupport::print_data(&data_seq[i]); 
                            }
                        }
                    } else if (retcode == DDS_RETCODE_NO_DATA) {
                        continue;
                    } else {
                        throw std::invalid_argument("Reader thread: read data error ");
                    }
                    retcode = this->topicReader->return_loan(data_seq, info_seq);
                    if (retcode != DDS_RETCODE_OK) {
                        throw std::invalid_argument("Reader thread: return_loan error  ");
                    }  
                }
            }
        } //while
    }


    DeviceStateWtr::DeviceStateWtr(
        DDSDomainParticipant * participant, 
        DDSPublisher * publisher) :
            Writer(participant, publisher, MODULE::TOPIC_DEVICE_STATE, MODULE::DEVICE_STATE_WRITER) {
        // Update Static Topic Data parameters in the beginning of the handler
        // prior to the loop, but after the entity base class creates the sample.
        //std::cout << "Device State C'Tor" << std::endl; 
        this->previousState =  ERROR; //aka MODULE::DeviceStateEnum::ERROR
        this->currentState = UNINITIALIZED; 

        createWriter<DeviceStateWtr, MODULE::DeviceStateTypeSupport, MODULE::DeviceStateDataWriter> (this, MODULE::DEVICE_STATE_TOPIC_QOS_PROFILE, participant, publisher);
    }


    void DeviceStateWtr::writeData(const enum MODULE::DeviceStateEnum current_state) {
        std::cout << "Writing DeviceState Sample " << std::endl;
        // Modify sample with current state as soon as I figure out how to load an enum
        //this->getMyDataSample()->value<int32_t>("myDeviceId.id", 30); // this works
        //this->getMyDataSample()->value<int32_t>("state", current_state);
        
        // load the current_state in to the sample to be written
        // ERROR_CHECK
        this->topicSample->state=current_state;
        this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);
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
        this->topicSample->myDeviceId.resourceId=2;
        this->topicSample->myDeviceId.id=20;
 
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
        // std::cout << this->Writer::topicName << " Writer Handler shutting down" << std::endl; 

    } 

    
    void DeviceStateWtr::WriterEventHandler(DDSConditionSeq active_conditions_seq) {
        // uses this->topicWriter which is topic specific
        // Get the number of active conditions 

        defaultWtrEventHdlr<DeviceStateWtr>(this, active_conditions_seq);
    }


    ConfigDevRdr::ConfigDevRdr(
        DDSDomainParticipant * participant, 
        DDSSubscriber * subscriber,
        const std::string filter_name)
                 : Reader(participant, subscriber, MODULE::TOPIC_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_READER) {

        createReader<ConfigDevRdr, MODULE::ConfigureDeviceTypeSupport, MODULE::ConfigureDeviceDataReader> (this, MODULE::CONFIG_DEV_TOPIC_QOS_PROFILE, participant, subscriber);

    };


    void ConfigDevRdr::Handler() {

        MODULE::ConfigureDeviceSeq data_seq;
        DDS_SampleInfoSeq info_seq;
        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t wait_duration = {1,0}; // timeout wait to ensure running

        std::cout << "Configure Device Reader Handler Executing" << std::endl; 
         // if we get a CONFIGURE_DEVICE_TOPIC then set the device current state = to the sent state

        //devicesDevStateWtrPtr->setCurrentState(
        //    (MODULE::DeviceStateEnum)data.value<int32_t>("deviceConfig.stateReq")); 

        while (!application::shutdown_requested) {
            // Wait 4 seconds for data 
            retcode = waitset->wait(active_conditions_seq, wait_duration);
            // waitset.wait(dds::core::Duration(4));
            if (retcode == DDS_RETCODE_TIMEOUT) {  
                // std::cout << "Reader thread: Wait timed out!! No conditions were triggered" << std::endl;
                // put thead health check here since we verified we are running
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Reader thread: wait returned error ");
            }

            int active_conditions = active_conditions_seq.length();

            for (int i = 0; i < active_conditions; ++i) {
                if (active_conditions_seq[i] == this->statusCondition) {
                    /* Get the status changes so we can check which status
                    * condition triggered. */
                    DDS_StatusMask triggeredmask =
                            this->topicReader->get_status_changes();

                    /* Subscription matched */
                    if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                        DDS_SubscriptionMatchedStatus st;
                        this->topicReader->get_subscription_matched_status(st);
                        std::cout << this->topicName << "Reader Pubs: " 
                        << st.current_count << "  " << st.current_count_change << std::endl;
                    }
                } else if (active_conditions_seq[i] == this->readCondition) { 
                    // Get the latest samples
                    retcode = this->topicReader->take(
                                data_seq, info_seq, DDS_LENGTH_UNLIMITED,
                                DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

                    if (retcode == DDS_RETCODE_OK) {
                        // we've got some data for what ever topic we recieved, figure that out, make an
                        // internal variable change as a result (if that's the case) and respond accordingly 
                        // (with a RequestResponse not an On Change Topic. On Change topics trigger from the 
                        // main loop as you peruse through internal variables that you see have changed as a
                        // result of a request or other internal event.
                        for (int i = 0; i < data_seq.length(); ++i) {
                            if (info_seq[i].valid_data) {  

                                //myReaderThreadInfo->dataSeqIndx = i;
                                // std::cout << "Recieved: " << MY_READER_TOPIC_NAME << std::endl; 
                                DDS_Long requested_state = data_seq[i].deviceConfig.stateReq;
                                this->devicesDevStateWtrPtr->setCurrentState((enum MODULE::DeviceStateEnum)requested_state);
                                MODULE::ConfigureDeviceTypeSupport::print_data(&data_seq[i]); 
                            }
                        }
                    } else if (retcode == DDS_RETCODE_NO_DATA) {
                        continue;
                    } else {
                        throw std::invalid_argument("Reader thread: read data error ");
                    }
                    retcode = this->topicReader->return_loan(data_seq, info_seq);
                    if (retcode != DDS_RETCODE_OK) {
                        throw std::invalid_argument("Reader thread: return_loan error  ");
                    }  
                }
            }
        } //while

    }  


    ConfigDevWtr::ConfigDevWtr(DDSDomainParticipant * participant, DDSPublisher * publisher)
                 : Writer(participant, publisher, MODULE::TOPIC_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_WRITER) {
        // std::cout << "Config Device Writer C'tor" << std::endl;

        createWriter<ConfigDevWtr, MODULE::ConfigureDeviceTypeSupport, MODULE::ConfigureDeviceDataWriter> (this, MODULE::CONFIG_DEV_TOPIC_QOS_PROFILE, participant, publisher);

    };


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
    }


    void ConfigDevWtr::WriterEventHandler(DDSConditionSeq active_conditions_seq) {
            // uses this->topicWriter which is topic specific
            // Get the number of active conditions 

            defaultWtrEventHdlr<ConfigDevWtr>(this, active_conditions_seq);
        }

 
    void ConfigDevWtr::writeData(enum MODULE::DeviceStateEnum configReq) {
        std::cout << "Writing Config Request to device " << std::endl; 

        this->topicSample->deviceConfig.stateReq=configReq;
        this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);

    }   

} // namespace
