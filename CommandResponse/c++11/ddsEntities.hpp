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
                const std::string writer_name,
                int period=0, 
                bool prefillDevId=true);
            ~Writer(void) {}; 

            void WriterThread(dds::domain::DomainParticipant participant);
            virtual void Handler(dds::pub::DataWriter<dds::core::xtypes::DynamicData> deviceStateWriter,
                dds::core::xtypes::DynamicData deviceStateSample) 
                { std::cout << "*** GENERIC WRITER HNDLR " << std::endl;}; // implemented by the intantiated derived topic

            dds::pub::DataWriter<dds::core::xtypes::DynamicData>* getMyWriter();  // needed for Requests to get the response writer
            dds::core::xtypes::DynamicData * getMyDataInstance();
            void enable(void);
            void disable(void);
        
        private:
            std::string topicName;
            std::string writerName;
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> * topicWriter;
            dds::core::xtypes::DynamicData *mySample; 
            bool enabled;
            int period;
            std::thread writerThread;
    };

    class Reader {
        public:
            Reader(
                dds::domain::DomainParticipant participant,
                const std::string topic_name, 
                const std::string reader_name,
                bool filterOnId = true);
            ~Reader(void){};

            void ReaderThread(dds::domain::DomainParticipant participant);
            virtual void Handler(void){ std::cout << "*** GENERIC READER HNDLR " << std::endl;}; // implemented by the intantiated derived topic

        
        private:
            std::string topicName;
            std::string readerName;
            std::thread readerThread;

    };

} // namespace MODULE


#endif // TOPICS_HPP
