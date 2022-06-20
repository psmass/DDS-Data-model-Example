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
 * 
 GENERALLY, CODE IN THIS FILE SHOULD NOT BE MODIFIED AS IT, ALONG WITH THE
 TOPICS_T.h HANDLES ALL OF THE GENERIC DDS INFRASTRUCTURE AND CREATES THREADS
 (and dds Waitsets)

 User Code (Topics.h/Topic.cxx) Should Inherit a TopicRdr or TopicWtr and extend
 the class memberfunction handler to set/read topic specific data type fields.
 The user topic specific classes can also add data members and member functions
 as needed.

 */

#ifndef DDS_ENTITIES_H
#define DDS_ENTITIES_H

#include <iostream>
#include <pthread.h>
#include <ndds/ndds_cpp.h>

#define MODULE ExCmdRsp  // Same as MODULE_NAMESPACE defined in the idl file. Need w/o Quotes

namespace application {
    extern bool shutdown_requested;
}
namespace MODULE
{
    class Writer {
        public:
            Writer(
                DDSDomainParticipant * participant,
                DDSPublisher * publisher,
                bool periodic,
                int period,
                const char* topic_name,
                const char* writer_name);
            ~Writer(void) {}; 

            // override to write your specific data topic
            virtual void writeData(void) { std::cout << "DWH"; };

            void * WriterThread(void);
            // pthred requires a static _f* so we need helper to convert
            static void * WriterThreadHelper(void * context) {
                return ((Writer *)context)->WriterThread();
            }
            void RunThread(void);

            virtual void writerHandler(DDSConditionSeq active_conditions_seq) = 0;// implemented by the concrete topic class

            const char* getTopicName(void) { return this->topicName; };
            void setTopicTypeName(char * type_name) { this->topicTypeName=type_name; };
            const char* getTopicTypeName(void) { return this->topicTypeName; };

            void setStatusCondition(DDSStatusCondition * status_condition) { this->statusCondition=status_condition; };
            DDSStatusCondition * getStatusCondition(void) { return this->statusCondition; };
            DDSWaitSet * getWaitset(void) { return this->waitset; };

            pthread_t getThreadId(void) {return this->tid;};
            void enable(void) { MODULE::Writer::enabled=true; };
            void disable(void) { MODULE::Writer::enabled=false; };
        
        protected:
            DDSDomainParticipant * topicParticipant;
            DDSPublisher * topicPublisher;
            bool periodic;
            DDS_Duration_t period;
            DDSWaitSet *waitset;
            DDSStatusCondition *statusCondition;
            char * topicName;
            char * topicTypeName;
            std::string writerName;
            pthread_t tid;
            bool enabled;
    };

    class Reader {
        public:
            Reader(
                DDSDomainParticipant * participant,
                DDSSubscriber * subscriber,
                const char* topic_name, 
                const char* reader_name);
            ~Reader(void){};

            void * ReaderThread(void);
            static void * ReaderThreadHelper(void * context) {
                return ((Reader *)context)->ReaderThread();
            };
            void RunThread(void);

            const char* getTopicName(void) { return this->topicName; };
            void setTopicTypeName(char * type_name) { this->topicTypeName=type_name; };
            const char* getTopicTypeName(void) { return this->topicTypeName; };
            void setReadCondition(DDSReadCondition * read_condition) { this->readCondition=read_condition; };
            DDSReadCondition * getReadCondition(void) { return this->readCondition; }; 
            void setStatusCondition(DDSStatusCondition * status_condition) { this->statusCondition=status_condition; };
            DDSStatusCondition * getStatusCondition(void) { return this->statusCondition; };
            DDSWaitSet * getWaitset(void) { return this->waitset; };

            pthread_t getThreadId(void) { return this->tid; };

            virtual void Handler(DDSConditionSeq active_conditions_seq) = 0; // default impl in Template class

        protected:
            DDSDomainParticipant * topicParticipant;
            DDSSubscriber * topicSubscriber;
            std::string readerName;
            DDSWaitSet *waitset;
            DDSStatusCondition * statusCondition;
	        DDSReadCondition * readCondition;
            char * topicName;
            char * topicTypeName;
            pthread_t tid;


    };

} // namespace MODULE


#endif // DDS_ENTITIES_H
