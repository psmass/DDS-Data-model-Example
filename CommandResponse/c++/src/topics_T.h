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

 GENERALLY, CODE IN THIS FILE SHOULD NOT BE MODIFIED AS IT HANDLES THE TYPE
 SPECIFIC DDS INFRASTRUCTURE AND CREATES THREADS (and dds Waitsets)

 User Code (Topics in topics.h/cxx) Should Inherit from a TopicReader or 
 TopicWriter and extend the class memberfunction handler to set/read topic 
 specific data type fields.  The user topic specific classes can also add data
 members and member functions as needed.
 */

#ifndef TOPICS_T_H
#define TOPICS_T_H

#include <ndds/ndds_cpp.h>
#include "ddsEntities.h"

#define MAX_FILTER_EXPRESSION_LEN 120
namespace topics
{

// Content Filter Class
class Cft {
    public:
        Cft(const char ** param_list=NULL, const char * filter_expression_p=NULL) {
            if (param_list==NULL)
                this->filter=false;
            else {
                // There should be a simpler way to get the length of param_list / # params
                // std::cout << "******S " << param_list << " " << sizeof(param_list) << " " << sizeof(param_list[0]) << std::endl;
                // std::cout << "******S " << param_list[0] << " " << param_list[1] << std::endl;
                int a=0;
                for ( ; param_list[a]!=NULL; a++){
                        //std::cout << param_list[a] << " --- " << a
                        ;
                } 
                std::cout << std::flush << std::endl;
                this->filter=true;
                this->parameters.maximum(a);
                this->parameters.from_array(param_list, a);
                strcpy (this->filter_expression, filter_expression_p);      
            }
        }

   public:
        bool filter;                // enable filter
        DDS_StringSeq parameters;
        char filter_expression[MAX_FILTER_EXPRESSION_LEN]; 

};

// These Class Templates are intended to replace the function templates below
// This allows the user to have type specific classes by inheriting from these
// TopicRdr and TopicWtr and exend them as wll as add specficic handlers or
// data_processing routines for the concrete class. (Likely we can remove the
// higher level Reader/Writer classes as they don't add much - as they did for
// XML Application creation).
// T is the Topic e.g. DeviceState
// S is the TopicTypeSupport e.g. DeviceStatusTypeSupport
// R is the Reader for the specific topic - e.g. DeviceStateReader
// D is the Topic - Topic Data Sequence e.g. DeviceStateSeq
template<typename T, class S, typename R, typename D>
class TopicRdr : public entities::Reader {
    public:
        TopicRdr(
            const DDSDomainParticipant * participant,
            const DDSSubscriber * subscriber,
            const Cft filter,
	    const char* qos_library,
            const char* qos_profile,
            const char* topic_name,
            const char* topic_rdr_name);
        ~TopicRdr (void){};

        R* getThisReader(void) { return topicReader; };

        void process_data(const DDSConditionSeq active_conditions_seq);
        // override for specific topic process_data 
        virtual void handler(const T * data) { // default prints the data
            S::print_data(data); 
        };
        
    protected:
        R * topicReader;
};


template<class T, class S, class R, class D>
TopicRdr<T,S,R, D>::TopicRdr(
            const DDSDomainParticipant * participant,
            const DDSSubscriber * subscriber,
            const Cft filter,
	    const char* qos_library,
            const char* qos_profile,
            const char* topic_name,
            const char* topic_rdr_name) 
            : Reader(participant, subscriber, topic_name, topic_rdr_name ) {

        DDS_ReturnCode_t retcode, retcode1, retcode2;
        DDSDataReader *untyped_reader; 

        // We can only create a topic once, so for applications that may be writing
        // and reading the same topic, we first need to see if the topic has been
        // created and, if so, avoid attempting to create it again
        DDS_Duration_t t = DDS_TIME_ZERO;
        DDSTopic * topic = ((DDSDomainParticipant *)participant)->find_topic(
	     this->topicName,  
	     t);
	
        this->topicTypeName=(char *)S::get_type_name();
	if (topic == NULL) { // topic does not exist
	
             // Register the specific datatype to use when creating the Topic
             // this calls a type specific type, so is required to be done in the specific
             // type Reader/Writer. The remaining work is done in the base class
             retcode =
                  S::register_type((DDSDomainParticipant *)participant, this->topicTypeName);
             if (retcode != DDS_RETCODE_OK) {
                  throw std::invalid_argument("Writer thread: type name error");
              }
	
             // Create a Topic with a name and a datatype
             topic = ((DDSDomainParticipant *)participant)->create_topic(
                 this->topicName,
                 this->topicTypeName,
                 DDS_TOPIC_QOS_DEFAULT,
                 NULL /* listener */,
                 DDS_STATUS_MASK_NONE);
             if (topic == NULL) {
                 throw std::invalid_argument("Reader thread: create topic error");
             }
	}

        if (filter.filter ==true) { // create a filter topic
 
            DDSContentFilteredTopic *cft = NULL;
	    // filter names must be unique - use topicNameCFT
	    std::string filter_name = this->topicName;
	    filter_name.append("CFT");
            cft = ((DDSDomainParticipant *)participant)->create_contentfilteredtopic(
		    filter_name.c_str(),
                    topic,
                    filter.filter_expression,
                    filter.parameters);
                    // This DataReader reads data on "Example MODULE_DeviceState" Topic
            untyped_reader = ((DDSSubscriber *)subscriber)->create_datareader_with_profile(
                cft,
                qos_library,
                qos_profile,
                NULL,  // listener 
                DDS_STATUS_MASK_NONE);
                        
        } else {
            untyped_reader = ((DDSSubscriber *)subscriber)->create_datareader_with_profile(
                topic,
                qos_library,
                qos_profile,
                NULL, // listener 
                DDS_STATUS_MASK_NONE);
            if (untyped_reader == NULL) {
                throw std::invalid_argument("Reader thread: create data reader error");
            }
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
void TopicRdr<T,S,R,D>::process_data(const DDSConditionSeq active_conditions_seq)
{
        D data_seq;
        DDS_SampleInfoSeq info_seq;
        DDS_ReturnCode_t retcode;

        std::cout << this->topicName << " Reader Handler Executing" << std::endl; 

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
                            this->handler(&data_seq[i]);
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

}

// T is the Topic - e.g. DeviceState
// S is the TopicSupport type e.g. DeviceStatusTypeSupport
// W is the Writer for the specific topic - e.g. DeviceStateReader
template<class T, class S, class W>
class TopicWtr : public entities::Writer {
    public:
        TopicWtr(
            const DDSDomainParticipant * participant,
            const DDSPublisher * publisher, 
            const bool periodic,
            const int period,
	    const char* qos_library,
            const char* qos_profile,
            const char* topic_name,
            const char* topic_wtr_name);
        ~TopicWtr(void){};


        // Default write() will write the topic as is
        // Override in Topics.h/cxx to modify data prior to write.
        virtual void write(void) {this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);}

        // handler for event monitoring
        void handler(const DDSConditionSeq active_conditions_seq);
        DDSDataWriter * getMyDataWriter(void) { return this->untyped_writer; };

        T * getTopicSample(void){ return this->topicSample; };
        W * getTopicWriter(void){ return this->topicWriter; };
        
    protected:
        W * topicWriter;
        T * topicSample;
        DDSDataWriter * untyped_writer;
};

template<class T, class S, class W>
TopicWtr<T,S,W>::TopicWtr(
    const DDSDomainParticipant * participant, 
    const DDSPublisher * publisher,
    const bool periodic,
    const int period,
    const char* qos_library,
    const char* qos_profile,
    const char* topic_name,
    const char * topic_wtr_name) 
        : Writer(participant, publisher, periodic, period, topic_name, topic_wtr_name) {

        // We can only create a topic once, so for applications that may be writing
        // and reading the same topic, we first need to see if the topic has been
        // created and, if so, avoid attempting to create it again
        DDS_Duration_t t = DDS_TIME_ZERO;
        DDSTopic * topic = ((DDSDomainParticipant *)participant)->find_topic(
	     this->topicName,  
	     t);

        DDS_ReturnCode_t retcode;
	
        this->topicTypeName=(char *)S::get_type_name();
	if (topic == NULL) { // topic does not exist
	
             // Register the specific datatype to use when creating the Topic
             // this calls a type specific type, so is required to be done in the specific
             // type Reader/Writer. The remaining work is done in the base class
             retcode =
                  S::register_type((DDSDomainParticipant *)participant, this->topicTypeName);
             if (retcode != DDS_RETCODE_OK) {
                  throw std::invalid_argument("Writer thread: type name error");
              }
	
             // Create a Topic with a name and a datatype
             topic = ((DDSDomainParticipant *)participant)->create_topic(
                 this->topicName,
                 this->topicTypeName,
                 DDS_TOPIC_QOS_DEFAULT,
                 NULL /* listener */,
                 DDS_STATUS_MASK_NONE);
             if (topic == NULL) {
                 throw std::invalid_argument("Writer thread: create topic error");
             }
	}

        // This DataWriter writes data on "Example MODULE_DeviceState" Topic
        this->untyped_writer = ((DDSPublisher *)publisher)->create_datawriter_with_profile(
            topic,
            qos_library,
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
void TopicWtr<T, S, W>::handler(const DDSConditionSeq active_conditions_seq) {
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

} // namespace topics


#endif // TOPICS_T_H
