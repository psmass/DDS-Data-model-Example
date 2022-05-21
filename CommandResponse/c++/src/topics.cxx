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

namespace MODULE
{

    DeviceStateRdr::DeviceStateRdr(
        DDSDomainParticipant * participant,
        DDSSubscriber * subscriber) : 
            Reader(participant, subscriber, MODULE::TOPIC_DEVICE_STATE, MODULE::DEVICE_STATE_READER) {

        DDS_ReturnCode_t retcode, retcode1, retcode2;

        this->previousState = ERROR; // aka MODULE::DeviceStateEnum::ERROR:
        this-> currentState = ERROR; 

        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        this->topicTypeName = (char *)MODULE::DeviceStateTypeSupport::get_type_name();
       retcode =
            MODULE::DeviceStateTypeSupport::register_type(participant, this->topicTypeName);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Reader thread: type name error");
        }

        // Create a Topic with a name and a datatype
        DDSTopic *topic = participant->create_topic(
            this->topicName,
            this->topicTypeName,
            DDS_TOPIC_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (topic == NULL) {
            throw std::invalid_argument("Reader thread: create topic error");
        }

        // This DataReader reads data on "Example MODULE_DeviceState" Topic
        DDSDataReader *untyped_reader = subscriber->create_datareader(
            topic,
            DDS_DATAREADER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (untyped_reader == NULL) {
            throw std::invalid_argument("Reader thread: create data reader error");
        }

        // Narrow casts from an untyped DataReaderto a Reader of your type 
        this->topicReader = MODULE::DeviceStateDataReader::narrow(untyped_reader);
            if (this->topicReader == NULL) {
                throw std::invalid_argument("Reader thread: get narrow Reader error");
            }  

        // Create read condition
        this->readCondition = this->topicReader->create_readcondition(
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);

        //  Get & Set status conditions
        this->statusCondition = this->topicReader->get_statuscondition();
        retcode = this->statusCondition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);  

        /* Attach Read Conditions */
        retcode1 = this->waitset->attach_condition(this->readCondition);


        /* Attach Status Conditions */
        retcode2 = waitset->attach_condition(this->statusCondition);
        if ((retcode != DDS_RETCODE_OK) | (retcode1 != DDS_RETCODE_OK) | (retcode2 != DDS_RETCODE_OK)) {
            throw std::invalid_argument("Reader thread: get/attach condition error");
        }
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

        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        this->topicTypeName = (char *)MODULE::DeviceStateTypeSupport::get_type_name();
        DDS_ReturnCode_t retcode =
            MODULE::DeviceStateTypeSupport::register_type(participant, this->topicTypeName);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: type name error");
        }

        // Create a Topic with a name and a datatype
        DDSTopic *topic = participant->create_topic(
            this->topicName,
            this->topicTypeName,
            DDS_TOPIC_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (topic == NULL) {
            throw std::invalid_argument("Writer thread: create topic error");
        }

        // This DataWriter writes data on "Example MODULE_DeviceState" Topic
        DDSDataWriter *untyped_writer = publisher->create_datawriter(
            topic,
            DDS_DATAWRITER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (untyped_writer == NULL) {
            throw std::invalid_argument("Writer thread: create data writer error");
        }

        // Narrow casts from an untyped DataWriter to a writer of your type 
        this->topicWriter= MODULE::DeviceStateDataWriter::narrow(untyped_writer);
            if (this->topicWriter == NULL) {
                throw std::invalid_argument("Writer thread: get narrow writer error");
            }  

        // Create data for writing, allocating all members
        this->topicSample = MODULE::DeviceStateTypeSupport::create_data();
        if (this->topicSample == NULL) {
            throw std::invalid_argument("Writer thread: creat data error");
        }

        // Configure Waitset for Writer Status ****
        this->statusCondition = this->topicWriter->get_statuscondition();
        if (statusCondition == NULL) {
            throw std::invalid_argument("Writer thread: get_statuscondition error");
        }

        // Set enabled statuses
        retcode = statusCondition->set_enabled_statuses(
                DDS_PUBLICATION_MATCHED_STATUS);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: set_enabled_statuses error");
        }

        // Attach Status Conditions to the above waitset
        retcode =this->waitset->attach_condition(statusCondition);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: attach_condition error");
        }

    };

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
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            // Compare with Status Conditions 
            if (active_conditions_seq[i] == statusCondition) {
                DDS_StatusMask triggeredmask =
                        this->topicWriter->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
                    DDS_PublicationMatchedStatus st;
                    this->topicWriter->get_publication_matched_status(st);
                    std::cout << this->topicName << " Writer Subs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else {
                // writers can only have status condition
                std::cout << this->topicName << " Writer: False Writer Event Trigger" << std::endl;
            }
        }
    }


    ConfigDevRdr::ConfigDevRdr(
        DDSDomainParticipant * participant, 
        DDSSubscriber * subscriber,
        const std::string filter_name)
                 : Reader(participant, subscriber, MODULE::TOPIC_CONFIGURE_DEVICE, MODULE::CONFIGURE_DEVICE_READER) {

        DDS_ReturnCode_t retcode, retcode1, retcode2;

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
        dds::topic::ContentFilteredTopic<MODULE::ConfigureDevice> cft(
            topic, // related topic
            "MyFilter", // local name for the CFT
            dds::topic::Filter(         // filter (constructed in-line in this example)
                "targetDeviceId.id=%0", // expression
                cft_parameters));       // parameter vector
        */
        
        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        this->topicTypeName = (char *)MODULE::ConfigureDeviceTypeSupport::get_type_name();
        retcode =
            MODULE::ConfigureDeviceTypeSupport::register_type(participant, this->topicTypeName);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Reader thread: type name error");
        }

        // Create a Topic with a name and a datatype
        DDSTopic *topic = participant->create_topic(
            this->topicName,
            this->topicTypeName,
            DDS_TOPIC_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (topic == NULL) {
            throw std::invalid_argument("Reader thread: create topic error");
        }

        // This DataReader reads data on "Example MODULE_DeviceState" Topic
        DDSDataReader *untyped_reader = subscriber->create_datareader(
            topic,
            DDS_DATAREADER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (untyped_reader == NULL) {
            throw std::invalid_argument("Reader thread: create data reader error");
        }

        // Narrow casts from an untyped DataReaderto a Reader of your type 
        this->topicReader = MODULE::ConfigureDeviceDataReader::narrow(untyped_reader);
            if (this->topicReader == NULL) {
                throw std::invalid_argument("Reader thread: get narrow Reader error");
            }  

        // Create read condition
        this->readCondition = this->topicReader->create_readcondition(
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);

        //  Get & Set status conditions
        this->statusCondition = this->topicReader->get_statuscondition();
        retcode = this->statusCondition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);  

        /* Attach Read Conditions */
        retcode1 = this->waitset->attach_condition(this->readCondition);


        /* Attach Status Conditions */
        retcode2 = waitset->attach_condition(this->statusCondition);
        if ((retcode != DDS_RETCODE_OK) | (retcode1 != DDS_RETCODE_OK) | (retcode2 != DDS_RETCODE_OK)) {
            throw std::invalid_argument("Reader thread: get/attach condition error");
        }

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


        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        this->topicTypeName = (char *)MODULE::ConfigureDeviceTypeSupport::get_type_name();
        DDS_ReturnCode_t retcode =
            MODULE::ConfigureDeviceTypeSupport::register_type(participant, this->topicTypeName);
        if (retcode != DDS_RETCODE_OK) {
            ; // throw error
        }

        // Create a Topic with a name and a datatype
        DDSTopic *topic = participant->create_topic(
            this->topicName,
            this->topicTypeName,
            DDS_TOPIC_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (topic == NULL) {
             throw std::invalid_argument("Writer thread: create_topic error");;
        }

        // This DataWriter writes data on "Example MODULE_DeviceState" Topic
        DDSDataWriter *untyped_writer = publisher->create_datawriter(
            topic,
            DDS_DATAWRITER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (untyped_writer == NULL) {
             throw std::invalid_argument("Writer thread: creat_topic error");
        }

        // Narrow casts from an untyped DataWriter to a writer of your type 
        this->topicWriter= MODULE::ConfigureDeviceDataWriter::narrow(untyped_writer);
            if (this->topicWriter == NULL) {
                 throw std::invalid_argument("Writer thread: create narrow error");
            }  

        // Create data for writing, allocating all members
        this->topicSample = MODULE::ConfigureDeviceTypeSupport::create_data();
        if (this->topicSample == NULL) {
             throw std::invalid_argument("Writer thread: create_data error");
        }

        // Configure Waitset for Writer Status ****
        this->statusCondition = this->topicWriter->get_statuscondition();
        if (statusCondition == NULL) {
            throw std::invalid_argument("Writer thread: get_statuscondition error");
        }

        // Set enabled statuses
        retcode = statusCondition->set_enabled_statuses(
                DDS_PUBLICATION_MATCHED_STATUS);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: set_enabled_statuses error");
        }

        // Attach Status Conditions to the above waitset
        retcode =this->waitset->attach_condition(statusCondition);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: attach_condition error");
        }

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
            int active_conditions = active_conditions_seq.length();

            for (int i = 0; i < active_conditions; ++i) {
                // Compare with Status Conditions 
                if (active_conditions_seq[i] == statusCondition) {
                    DDS_StatusMask triggeredmask =
                            this->topicWriter->get_status_changes();

                    if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
                        DDS_PublicationMatchedStatus st;
                        this->topicWriter->get_publication_matched_status(st);
                        std::cout << this->topicName << " Writer Subs: " 
                        << st.current_count << "  " << st.current_count_change << std::endl;
                    }
                } else {
                    // writers can only have status condition
                    std::cout << this->topicName << " Writer: False Writer Event Trigger" << std::endl;
                }
            }
        }
 
    void ConfigDevWtr::writeData(enum MODULE::DeviceStateEnum configReq) {
        std::cout << "Writing Config Request to device " << std::endl; 

        this->topicSample->deviceConfig.stateReq=configReq;
        this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);

    }   

} // namespace
