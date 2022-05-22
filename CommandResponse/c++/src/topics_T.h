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

#ifndef TOPICS_T_H
#define TOPICS_T_H

#include <ndds/ndds_cpp.h>

namespace MODULE
{
template <typename T> void defaultWtrEventHdlr(T *thisWriter, DDSConditionSeq active_conditions_seq) {
        // uses this->topicWriter which is topic specific
        // Get the number of active conditions 
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            // Compare with Status Conditions 
            if (active_conditions_seq[i] == thisWriter->getStatusCondition()) {
                DDS_StatusMask triggeredmask =
                        thisWriter->getTopicWriter()->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
                    DDS_PublicationMatchedStatus st;
                    thisWriter->getTopicWriter()->get_publication_matched_status(st);
                    std::cout << thisWriter->getTopicName() << " Writer Subs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else {
                // writers can only have status condition
                std::cout << thisWriter->getTopicName() << " Writer: False Writer Event Trigger" << std::endl;
            }
        }
}

template <typename S, typename T, typename U> void createReader
    (S * thisReader, const char* qos_profile, DDSDomainParticipant * participant, DDSSubscriber * subscriber) {

        DDS_ReturnCode_t retcode, retcode1, retcode2;

        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        thisReader->setTopicTypeName((char *)T::get_type_name());
        retcode =
            T::register_type(participant, thisReader->getTopicTypeName());
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Reader thread: type name error");
        }

        // Create a Topic with a name and a datatype
        DDSTopic *topic = participant->create_topic(
            thisReader->getTopicName(),
            thisReader->getTopicTypeName(),
            DDS_TOPIC_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (topic == NULL) {
            throw std::invalid_argument("Reader thread: create topic error");
        }

        // This DataReader reads data on "Example MODULE_DeviceState" Topic
        DDSDataReader *untyped_reader = subscriber->create_datareader_with_profile(
            topic,
            MODULE::CMD_RSP_QOS_LIBRARY,
            qos_profile,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (untyped_reader == NULL) {
            throw std::invalid_argument("Reader thread: create data reader error");
        }

        // Narrow casts from an untyped DataReaderto a Reader of your type 
        thisReader->setTopicReader(U::narrow(untyped_reader));
            if (thisReader->getTopicReader() == NULL) {
                throw std::invalid_argument("Reader thread: get narrow Reader error");
            }  

        // Create read condition
        thisReader->setReadCondition((thisReader->getTopicReader())->create_readcondition (
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE));

        //  Get & Set status conditions
        thisReader->setStatusCondition((thisReader->getTopicReader())->get_statuscondition());
        retcode = thisReader->getStatusCondition()->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);  

        /* Attach Read Conditions */
        retcode1 = thisReader->getWaitset()->attach_condition(thisReader->getReadCondition());


        /* Attach Status Conditions */
        retcode2 = thisReader->getWaitset()->attach_condition(thisReader->getStatusCondition());
        if ((retcode != DDS_RETCODE_OK) | (retcode1 != DDS_RETCODE_OK) | (retcode2 != DDS_RETCODE_OK)) {
            throw std::invalid_argument("Reader thread: get/attach condition error");
        }
}


template <typename S, typename T, typename U> void createWriter
    (S * thisWriter, const char* qos_profile, DDSDomainParticipant * participant, DDSPublisher * publisher) {

        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        thisWriter->setTopicTypeName((char *)T::get_type_name());
        DDS_ReturnCode_t retcode =
            T::register_type(participant, thisWriter->getTopicTypeName());
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: type name error");
        }

        // Create a Topic with a name and a datatype
        DDSTopic *topic = participant->create_topic(
            thisWriter->getTopicName(),
            thisWriter->getTopicTypeName(),
            DDS_TOPIC_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (topic == NULL) {
            throw std::invalid_argument("Writer thread: create topic error");
        }

        // This DataWriter writes data on "Example MODULE_DeviceState" Topic
        DDSDataWriter *untyped_writer = publisher->create_datawriter_with_profile(
            topic,
            MODULE::CMD_RSP_QOS_LIBRARY,
            qos_profile,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
        if (untyped_writer == NULL) {
            throw std::invalid_argument("Writer thread: create data writer error");
        }

        // Narrow casts from an untyped DataWriter to a writer of your type 
        thisWriter->setTopicWriter(U::narrow(untyped_writer));
            if (thisWriter->getTopicWriter() == NULL) {
                throw std::invalid_argument("Writer thread: get narrow writer error");
            }  

    
        // Create data for writing, allocating all members
        thisWriter->setTopicSample(T::create_data());
        if (thisWriter->getTopicSample() == NULL) {
            throw std::invalid_argument("Writer thread: create data error");
        }

        // Configure Waitset for Writer Status ****
        thisWriter->setStatusCondition(thisWriter->getTopicWriter()->get_statuscondition());
        if (thisWriter->getStatusCondition() == NULL) {
            throw std::invalid_argument("Writer thread: get_statuscondition error");
        }

        // Set enabled statuses
        retcode = thisWriter->getStatusCondition()->set_enabled_statuses(
                DDS_PUBLICATION_MATCHED_STATUS);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: set_enabled_statuses error");
        }

        // Attach Status Conditions to the above waitset
        retcode =thisWriter->getWaitset()->attach_condition(thisWriter->getStatusCondition());
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: attach_condition error");
        }
    }

// S is the Object e.g. this, T is the data type e.g. MODULE::DeviceStateSeq
template <typename S, typename T> void readerHandler (S * thisReader) {
        T data_seq;
        DDS_SampleInfoSeq info_seq;
        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t wait_duration = {1,0}; // timeout wait to ensure running

        std::cout << "Device State Reader Handler Executing" << std::endl; 

        while (!application::shutdown_requested) {
            // Wait 4 seconds for data 
            retcode = thisReader->getWaitset()->wait(active_conditions_seq, wait_duration);
            // waitset.wait(dds::core::Duration(4));
            if (retcode == DDS_RETCODE_TIMEOUT) {  
                // std::cout << "Reader thread: Wait timed out!! No conditions were triggered" << std::endl;
                // put thead health check here since we verified we are running
                continue;
            } else if (retcode != DDS_RETCODE_OK) {
                throw std::invalid_argument("Reader handler: wait returned error ");
            }

            int active_conditions = active_conditions_seq.length();

            for (int i = 0; i < active_conditions; ++i) {
                if (active_conditions_seq[i] == thisReader->getStatusCondition()) {
                    // Get the status changes so we can check which status
                    // ondition triggered.
                    DDS_StatusMask triggeredmask =
                            thisReader->getTopicReader()->get_status_changes();

                    // Subscription matched 
                    if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                        DDS_SubscriptionMatchedStatus st;
                        thisReader->getTopicReader()->get_subscription_matched_status(st);
                        std::cout << thisReader->getTopicName() << "Reader Pubs: " 
                        << st.current_count << "  " << st.current_count_change << std::endl;
                    }
                } else if (active_conditions_seq[i] == thisReader->getReadCondition()) { 
                    // Get the latest samples
                    retcode = thisReader->getTopicReader()->take(
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
                                thisReader->process_data(&data_seq[i]);
                            }
                        }
                    } else if (retcode == DDS_RETCODE_NO_DATA) {
                        continue;
                    } else {
                        throw std::invalid_argument("Reader handler: read data error ");
                    }
                    retcode = thisReader->getTopicReader()->return_loan(data_seq, info_seq);
                    if (retcode != DDS_RETCODE_OK) {
                        throw std::invalid_argument("Reader handler: return_loan error  ");
                    }  
                }
            }
        } //while
        std::cout << thisReader->getTopicName()<< " Reader Handler shutting down" << std::endl; 
    }

} // namespace MODULE


#endif // TOPICS_T_H