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
                const DDSDomainParticipant * participant,
                const DDSPublisher * publisher,
                const bool periodic,
                const int period,
                const char* topic_name,
                const char* writer_name);
            ~Writer(void) {}; 

            // override to write your specific data periodic topic
            // or your application is able to change the sample
            // asynchronously
            virtual void write(void) { std::cout << "DWH"; };

            void * writerThread(void);
            // pthred requires a static _f* so we need helper to convert
            static void * writerThreadHelper(void * context) {
                return ((Writer *)context)->writerThread();
            }
            void runThread(void);

            virtual void handler(const DDSConditionSeq active_conditions_seq) = 0;// implemented by the concrete topic class

            const char* getTopicName(void) { return this->topicName; };
            void setTopicTypeName(const char * type_name) { this->topicTypeName=(char *)type_name; };
            const char* getTopicTypeName(void) { return this->topicTypeName; };

            void setStatusCondition(const DDSStatusCondition * status_condition) { 
                this->statusCondition=(DDSStatusCondition *)status_condition; };
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
                const DDSDomainParticipant * participant,
                const DDSSubscriber * subscriber,
                const char* topic_name, 
                const char* reader_name);
            ~Reader(void){};

            void * readerThread(void);
            static void * readerThreadHelper(void * context) {
                return ((Reader *)context)->readerThread();
            };
            void runThread(void);

            const char* getTopicName(void) { return this->topicName; };
            void setTopicTypeName(const char * type_name) { this->topicTypeName=(char*)type_name; };
            const char* getTopicTypeName(void) { return this->topicTypeName; };

            void setReadCondition(const DDSReadCondition * read_condition) {
                 this->readCondition=(DDSReadCondition *)read_condition; };
            DDSReadCondition * getReadCondition(void) { return this->readCondition; }; 
            void setStatusCondition(const DDSStatusCondition * status_condition) {
                 this->statusCondition=(DDSStatusCondition *)status_condition; };
            DDSStatusCondition * getStatusCondition(void) { return this->statusCondition; };
            DDSWaitSet * getWaitset(void) { return this->waitset; };

            pthread_t getThreadId(void) { return this->tid; };

            virtual void process_data(const DDSConditionSeq active_conditions_seq) = 0; // default impl in Template class

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

    // Used for optional Listener - Replace it as you need. Note Default Listener does not have access
    // to the narrow Writer and cannot show the topicName 
    class DefaultDataWriterListener : public DDSDataWriterListener {
    public:
        virtual void on_offered_deadline_missed(
                DDSDataWriter * /*writer*/,
                const DDS_OfferedDeadlineMissedStatus & /*status*/)
        {
            printf("DataWriterListener: on_offered_deadline_missed()\n");
        }

        virtual void on_liveliness_lost(
                DDSDataWriter * /*writer*/,
                const DDS_LivelinessLostStatus & /*status*/)
        {
            printf("DataWriterListener: on_liveliness_lost()\n");
        }

        virtual void on_offered_incompatible_qos(
                DDSDataWriter * /*writer*/,
                const DDS_OfferedIncompatibleQosStatus & /*status*/)
        {
            printf("DataWriterListener: on_offered_incompatible_qos()\n");
        }

        virtual void on_publication_matched(
                DDSDataWriter *writer,
                const DDS_PublicationMatchedStatus &status)
        {
            std::cout << " Writer Subs: " << status.current_count 
                << "  " << status.current_count_change << std::endl;
        }

        virtual void on_reliable_writer_cache_changed(
                DDSDataWriter *writer,
                const DDS_ReliableWriterCacheChangedStatus &status)
        {
            printf("DataWriterListener: on_reliable_writer_cache_changed()\n");
        }

        virtual void on_reliable_reader_activity_changed(
                DDSDataWriter *writer,
                const DDS_ReliableReaderActivityChangedStatus &status)
        {
            printf("DataWriterListener: on_reliable_reader_activity_changed()\n");
        }
    };

} // namespace MODULE


#endif // DDS_ENTITIES_H
