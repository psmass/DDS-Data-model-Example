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
#include "dds/pub/DataWriterListener.hpp"
#include <rti/domain/find.hpp>

#define MODULE ExCmdRsp  // Same as MODULE_NAMESPACE defined in the idl file. Need w/o Quotes
#define MAX_FILTER_EXPRESSION_LEN 120
namespace application {
    extern bool shutdown_requested;
}

namespace MODULE
{
    const std::string QOS_FILE = "../../model/CommandProject.xml";


    class DefaultWriterListener : public dds::pub::NoOpDataWriterListener<dds::core::xtypes::DynamicData>
    {
    public:
        DefaultWriterListener() {}

        void on_publication_matched(
        dds::pub::DataWriter<dds::core::xtypes::DynamicData>&,
        const dds::core::status::PublicationMatchedStatus &status)
            {
                std::cout << "Listener Callback On Publication Match " << std::endl;
                std::cout << "Writer Subs: " << status.current_count()
                            << " " << status.current_count_change() << std::endl;
            }
    };

    class Writer {
        public:
            Writer(
                const dds::domain::DomainParticipant participant,
                const std::string topic_type,
                const std::string writer_name,
                const bool periodic,
                dds::core::Duration period);
             
            ~Writer(void); 

            // override to write your specific data topic
            virtual void write(void) { std::cout << "DWH";}; // Default Writer Handler ;

            void writerThread(void); // configures a waitset for status conditions
            void runThread(void);    // runs the event thread aboce

            dds::pub::DataWriter<dds::core::xtypes::DynamicData>  getMyDataWriter(void)
                { return this->topicWriter; };
            dds::core::xtypes::DynamicData * getMyDataSample(void)
                { return this->topicSample; } ;
            std::thread* getThreadHndl(void) { return &myWtrThread; };
            void enable(void) { MODULE::Writer::enabled=true; };
            void disable(void) { MODULE::Writer::enabled=false; };
        
        protected:
            dds::domain::DomainParticipant participant = {nullptr} ;
            dds::pub::DataWriter<dds::core::xtypes::DynamicData> topicWriter = {nullptr} ;
            std::string topicType;
            std::string writerName;
            dds::core::xtypes::DynamicData * topicSample; 
            bool enabled;
            bool periodic;
            dds::core::Duration period;
            std::thread myWtrThread;
    };

    class Reader {
        public:
            Reader(
                const dds::domain::DomainParticipant participant,
                const std::string topic_type, 
                const std::string reader_name);
            ~Reader(void){};

            void readerThread(void);
            void runThread(void);

            virtual void handler(dds::core::xtypes::DynamicData& data)
                // Default Reader Handler - Needs to be overriden to parse out specific topic
                { std::cout << "DRH";};

            std::thread * getThreadHndl(void) { return &myRdrThread; };

        protected:
            dds::domain::DomainParticipant participant = {nullptr};
            std::string topicType;
            std::string readerName;
            std::thread myRdrThread;

    };

} // namespace MODULE


#endif // TOPICS_HPP
