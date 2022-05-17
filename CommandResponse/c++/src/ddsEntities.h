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
                std::string topic_name,
                std::string writer_name);
            ~Writer(void) {}; 

            void * WriterThread(void);
            // pthred requires a static _f* so we need helper to convert
            static void * WriterThreadHelper(void * context) {
                return ((Writer *)context)->WriterThread();
            }
            void RunThread(void);

            virtual void Handler(void) // implemented by the concrete topic class
                { std::cout << "*** GENERIC WRITER HANDLER " << std::endl;}; 

            /// used to factor wrt event waitset code
            void WriterEventHandler(DDS_ReturnCode_t retcode, DDSConditionSeq active_conditions_seq);

            DDSDynamicDataWriter* getMyWriter(void)
                 {return topicWriter;};  // needed for Requests to get the response writer
            DDS_DynamicData * getMyDataSample(void)
                {return topicSample;};
            pthread_t getThreadId(void) {return this->tid;};
            void enable(void) { MODULE::Writer::enabled=true; };
            void disable(void) { MODULE::Writer::enabled=false; };
        
        protected:
            std::string topicName;
            std::string writerName;
            DDSDomainParticipant * topicParticipant;
            DDSDynamicDataWriter * topicWriter;
            DDSWaitSet *waitset;
            DDSStatusCondition *statusCondition;
            DDS_DynamicData * topicSample; 
            pthread_t tid;
            bool enabled;
    };

    class Reader {
        public:
            Reader(
                DDSDomainParticipant * participant,
                std::string topic_name, 
                std::string reader_name);
            ~Reader(void){};

            void * ReaderThread(void);
            static void * ReaderThreadHelper(void * context) {
                return ((Reader *)context)->ReaderThread();
            };
            void RunThread(void);

            pthread_t getThreadId(void) {return this->tid;};

            virtual void Handler(DDS_DynamicData& data) // implemented by the concrete topic class
                { std::cout << "*** GENERIC READER HANDLER " << std::endl;}; 

        protected:
            DDSDomainParticipant * topicParticipant;
            std::string topicName;
            std::string readerName;
            DDSDynamicDataReader * topicReader;
            pthread_t tid;


    };

} // namespace MODULE


#endif // DDS_ENTITIES_H
