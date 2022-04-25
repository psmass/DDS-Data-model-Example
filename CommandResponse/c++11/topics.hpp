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

#ifndef TOPICS_HPP
#define TOPICS_HPP

#include <dds/dds.hpp>

namespace topics
{
    class Topic {
        public:
            Topic(DDSDomainParticipant * participant, enum TOPICS_E topicEnum);
            virtual ~Topic(void) = 0; // Abstract base class

        private:
            pthread_t tid; // thread id
            enum TOPICS_E myTopicEnum;
            DDSDomainParticipant * myParticipant;
    };

    class WriterTopic : public Topic {
        public:
            WriterTopic(DDSDomainParticipant * participant, enum TOPICS_E topicEnum, bool prefillDevId=true);
            virtual ~WriterTopic(void) = 0;  // Abstract base class
        
        private:
            DDSDynamicDataWriter * myWriter;
            DDS_DynamicData * myData; 
    };

    class NormalWriterTopic : public WriterTopic {
        public:
            NormalWriterTopic(DDSDomainParticipant * participant, enum TOPICS_E topicEnum, bool prefillDevId=true);
            ~NormalWriterTopic();
            DDSDynamicDataWriter * getMyWriter();  // needed for Requests to get the response writer
            DDS_DynamicData * getMyDataInstance();
        
        private:
            WriterEventsThreadInfo * myWriterEventsThreadInfo;

    };

    class PeriodicTopic : public WriterTopic {
        public:
            PeriodicTopic(dds::domain::DomainParticipant * participant, enum TOPICS_E topicEnum, dds::core::DDS_Duration_t ratePeriod);
            ~PeriodicTopic(void);

            void enable()  { topics::PeriodicTopic::enabled=true; };
            void disable() { topics::PeriodicTopic::enabled=false; };
        
        private:
            PeriodicWriterThreadInfo * myPeriodicWriterThreadInfo;
            bool enabled;

    };

    class ReaderTopic : public Topic {
        public:
            ReaderTopic( DDSDomainParticipant * participant, 
                        enum TOPICS_E topicEnum, 
                        NormalWriterTopic * echoResponse = NULL, 
                        bool installFilter = true );
            ~ReaderTopic(void);
        
        private:
            ReaderThreadInfo * myReaderThreadInfo;
            DDS_StringSeq parameters; // need unique sets of parameters for each reader Topic
    };

};


#endif // TOPICS_HPP
