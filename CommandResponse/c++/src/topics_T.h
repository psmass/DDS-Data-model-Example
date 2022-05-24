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

// These Class Templates are intended to replace the function remplates below
// This allows the user to have type specific classes by inheriting from these
// TopicRdr and TopicWtr and exent them as wll as add specficic handlers or
// data_processing routines for the concrete class. (Likely we can remove the
// higher level Reader/Writer classes as they don't add much - as they did for
// XML Application creation).
// T is the Topic e.g. DeviceState
// S is the TopicTypeSupport e.g. DeviceStatusTypeSupport
// R is the Reader for the specific topic - e.g. DeviceStateReader
// D is the Topic - Topic Data Sequence e.g. DeviceStateSeq
template<typename T, class S, typename R, typename D>
class TopicRdr : public Reader {
    public:
        TopicRdr(
            DDSDomainParticipant * participant,
            DDSSubscriber * subscriber,
            const char* filter_name,
            const char* qos_profile,
            const char* topic_name,
            const char* topic_rdr_name);
        ~TopicRdr (void){};

        R* getThisReader(void) { return topicReader; };

        void Handler(void);
        // override for specific topic process_data 
        virtual void process_data(T * data) { // default prints the data
            S::print_data(data); 
        };
        
    protected:
        R * topicReader;
};


template<class T, class S, class R, class D>
TopicRdr<T,S,R, D>::TopicRdr(
            DDSDomainParticipant * participant,
            DDSSubscriber * subscriber,
            const char* filter_name,
            const char* qos_profile,
            const char* topic_name,
            const char* topic_rdr_name) 
            : Reader(participant, subscriber, topic_name, topic_rdr_name ) {

        DDS_ReturnCode_t retcode, retcode1, retcode2;

        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        this->topicTypeName=((char *)S::get_type_name());
        retcode =
            S::register_type(participant, this->topicTypeName);
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
        this->topicReader=(R::narrow(untyped_reader));
            if (this->topicReader == NULL) {
                throw std::invalid_argument("Reader thread: get narrow Reader error");
            }  

        // Create read condition
        this->readCondition=this->topicReader->create_readcondition(
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);

        //  Get & Set status conditions
        this->statusCondition=this->topicReader->get_statuscondition();
        retcode = this->statusCondition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);  

        /* Attach Read Conditions */
        retcode1 = this->waitset->attach_condition(this->readCondition);

        /* Attach Status Conditions */
        retcode2 = this->waitset->attach_condition(this->statusCondition);
        if ((retcode != DDS_RETCODE_OK) | (retcode1 != DDS_RETCODE_OK) | (retcode2 != DDS_RETCODE_OK)) {
            throw std::invalid_argument("Reader thread: get/attach condition error");
        }
}

template<class T, class S, class R, class D>
void TopicRdr<T,S,R,D>::Handler()
{
        D data_seq;
        DDS_SampleInfoSeq info_seq;
        DDSConditionSeq active_conditions_seq;
        DDS_ReturnCode_t retcode;
        DDS_Duration_t wait_duration = {1,0}; // timeout wait to ensure running

        std::cout << this->topicName << " Reader Handler Executing" << std::endl; 

        while (!application::shutdown_requested) {
            // Wait 4 seconds for data 
            retcode = this->waitset->wait(active_conditions_seq, wait_duration);
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
                if (active_conditions_seq[i] == this->statusCondition) {
                    // Get the status changes so we can check which status
                    // ondition triggered.
                    DDS_StatusMask triggeredmask =
                            this->topicReader->get_status_changes();

                    // Subscription matched 
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
                                this->process_data(&data_seq[i]);
                            }
                        }
                    } else if (retcode == DDS_RETCODE_NO_DATA) {
                        continue;
                    } else {
                        throw std::invalid_argument("Reader handler: read data error ");
                    }
                    retcode = this->topicReader->return_loan(data_seq, info_seq);
                    if (retcode != DDS_RETCODE_OK) {
                        throw std::invalid_argument("Reader handler: return_loan error  ");
                    }  
                }
            }
        } //while
        std::cout << this->topicName<< " Reader Handler shutting down" << std::endl; 
}

// T is the Topic - e.g. DeviceState
// S is the TopicSupport type e.g. DeviceStatusTypeSupport
// W is the Writer for the specific topic - e.g. DeviceStateReader
template<class T, class S, class W>
class TopicWtr : public Writer {
    public:
        TopicWtr(
            DDSDomainParticipant * participant,
            DDSPublisher * publisher, 
            const char* qos_profile,
            const char* topic_name,
            const char* topic_wtr_name);
        ~TopicWtr(void){};

        virtual void Handler(void) 
            { std::cout << "*** GENERIC WRITER HANDLER " << std::endl; };
        virtual void WriterEventHandler(DDSConditionSeq active_conditions_seq);

        T * getTopicSample(void){ return this->topicSample; };
        W * getTopicWriter(void){ return this->topicWriter; };

        // Configure Device is writen when by the controller as it demand (i.e. intitial and
        // changing conditions require it). The writeData member function
        // is provided to allow the main loop of the controller reliably publish a configuration
        // change request to the evice.
        void WriteData(T topic); 
        
    protected:
        W * topicWriter;
        T * topicSample; 
};

template<class T, class S, class W>
TopicWtr<T,S,W>::TopicWtr(
    DDSDomainParticipant * participant, 
    DDSPublisher * publisher, 
    const char* qos_profile,
    const char* topic_name,
    const char * topic_wtr_name) 
        : Writer(participant, publisher, topic_name, topic_wtr_name) {
        // Register the specific datatype to use when creating the Topic
        // this calls a type specific type, so is required to be done in the specific
        // type Reader/Writer. The remaining work is done in the base class
        this->topicTypeName=(char *)S::get_type_name();
        DDS_ReturnCode_t retcode =
            S::register_type(participant, this->topicTypeName);
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
        this->topicWriter=W::narrow(untyped_writer);
            if (this->topicWriter == NULL) {
                throw std::invalid_argument("Writer thread: get narrow writer error");
            }  
    
        // Create data for writing, allocating all members
        this->topicSample=S::create_data();
        if (this->topicSample == NULL) {
            throw std::invalid_argument("Writer thread: create data error");
        } 

        // Configure Waitset for Writer Status ****
        this->statusCondition=this->topicWriter->get_statuscondition();
        if (this->statusCondition == NULL) {
            throw std::invalid_argument("Writer thread: get_statuscondition error");
        }

        // Set enabled statuses
        retcode = this->statusCondition->set_enabled_statuses(
                DDS_PUBLICATION_MATCHED_STATUS);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: set_enabled_statuses error");
        }

        // Attach Status Conditions to the above waitset
        retcode =this->waitset->attach_condition(this->statusCondition);
        if (retcode != DDS_RETCODE_OK) {
            throw std::invalid_argument("Writer thread: attach_condition error");
        }
    }

// Default Writer Event handler shows subscriber count
template<class T, class S, class W> 
void TopicWtr<T, S, W>::WriterEventHandler(DDSConditionSeq active_conditions_seq) {
        // uses this->topicWriter which is topic specific
        // Get the number of active conditions 
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            // Compare with Status Conditions 
            if (active_conditions_seq[i] == this->statusCondition) {
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