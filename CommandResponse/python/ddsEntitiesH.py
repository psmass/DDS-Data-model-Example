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

#ifndef DDS_ENTITIES_HPP
#define DDS_ENTITIES_HPP

#include <iostream>
#include <thread>
#include <dds/dds.hpp>
#include <rti/domain/find.hpp>

#define MODULE ExCmdRsp  // Same as MODULE_NAMESPACE defined in the idl file. Need w/o Quotes

namespace application {
    extern bool shutdown_requested;
}

namespace MODULE
{
    const std::string QOS_FILE = "../../model/CommandProject.xml";

    class Writer {
        public:
            Writer(
                dds::domain::DomainParticipant participant,
                const std::string topic_name,
                const std::string writer_name);
            ~Writer(void) {}; 

            void WriterThread(dds::domain::DomainParticipant participant);
            void RunThread(dds::domain::DomainParticipant participant);

            virtual void Handler(void) 
                { std::cout << "*** GENERIC WRITER HANDLER " << std::endl;}; // implemented by the intantiated derived topic

            dds::pub::DataWriter<dds::core::xtypes::DynamicData>* getMyWriter(void)
                 {return topicWriter;};  // needed for Requests to get the response writer
            dds::core::xtypes::DynamicData * getMyDataSample(void)
                {return topicSample;};
            std::thread* getThreadHndl(void) { return &writerThread; };
            void enable(void) { MODULE::Writer::enabled=true; };
            void disable(void) { MODULE::Writer::enabled=false; };
        
        protected:
            std::string topicName;
            std::string writerName;
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> * topicWriter;
            dds::core::xtypes::DynamicData * topicSample; 
            bool enabled;
            int period;
            std::thread writerThread;
    };

    class Reader {
        public:
            Reader(
                dds::domain::DomainParticipant participant,
                const std::string topic_name, 
                const std::string reader_name);
            ~Reader(void){};

            void ReaderThread(dds::domain::DomainParticipant participant);
            void RunThread(dds::domain::DomainParticipant participant);

            virtual void Handler(dds::core::xtypes::DynamicData& data)
                { std::cout << "*** GENERIC READER HANDLER " << std::endl;}; // implemented by the intantiated derived topic

            std::thread * getThreadHndl(void) { return &readerThread; };

        protected:
            std::string topicName;
            std::string readerName;
            std::thread readerThread;

    };

} // namespace MODULE


#endif // TOPICS_HPP
