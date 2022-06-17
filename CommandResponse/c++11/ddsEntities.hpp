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
#define MAX_FILTER_EXPRESSION_LEN 120
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
                const std::string topic_type,
                const std::string writer_name,
                dds::core::Duration period);
            ~Writer(void) {}; 

            void writerThread(dds::domain::DomainParticipant participant);
            void runThread(dds::domain::DomainParticipant participant);

            virtual void handler(dds::core::status::StatusMask triggered_mask)
                // should pass the triggered mask to the concrete topic function in case
                // the user wants to do something specific with an event 
                { std::cout << "DWH";}; // Default Writer Handler 

            dds::pub::DataWriter<dds::core::xtypes::DynamicData>* getMyWriter(void)
                 {return topicWriter;};  // needed for Requests to get the response writer
            dds::core::xtypes::DynamicData * getMyDataSample(void)
                {return topicSample;};
            std::thread* getThreadHndl(void) { return &myWtrThread; };
            void enable(void) { MODULE::Writer::enabled=true; };
            void disable(void) { MODULE::Writer::enabled=false; };
        
        protected:
            std::string topicType;
            std::string writerName;
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> * topicWriter;
            dds::core::xtypes::DynamicData * topicSample; 
            bool enabled;
            dds::core::Duration period;
            std::thread myWtrThread;
    };

    class Reader {
        public:
            Reader(
                dds::domain::DomainParticipant participant,
                const std::string topic_type, 
                const std::string reader_name);
            ~Reader(void){};

            void readerThread(dds::domain::DomainParticipant participant);
            void runThread(dds::domain::DomainParticipant participant);

            virtual void handler(dds::core::xtypes::DynamicData& data)
                // Default Reader Handler - Needs to be overriden to parse out specific topic
                { std::cout << "DRH";};

            std::thread * getThreadHndl(void) { return &myRdrThread; };

        protected:
            std::string topicType;
            std::string readerName;
            std::thread myRdrThread;

    };

} // namespace MODULE


#endif // TOPICS_HPP
