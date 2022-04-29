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

#include "ddsEntities.hpp"

namespace MODULE
{

    Writer::Writer(
        dds::domain::DomainParticipant participant, 
        const std::string topic_name, 
        const std::string writer_name, 
        int period, 
        bool prefillDevId)
    {
        // by setting period non-zero the topic will be a periodic topic
        std::cout << "Writer Topic" << std::endl;
        topicName = topic_name;
        writerName = writer_name;

    }

    dds::pub::DataWriter<dds::core::xtypes::DynamicData>* Writer::getMyWriter() 
        { return topicWriter;};  // needed for Requests to get the response writer
    dds::core::xtypes::DynamicData * Writer::getMyDataInstance()
        { return mySample; };       
    void Writer::enable()  { MODULE::Writer::enabled=true; };
    void Writer::disable() { MODULE::Writer::enabled=false; };

    Reader::Reader( 
        dds::domain::DomainParticipant participant, 
        const std::string topic_name, 
        const std::string reader_name,
        bool filterOnId)
    {
        std::cout << "Reader for topic " << topic_name << " created." << std::endl;
        topicName = topic_name;
        readerName = reader_name;
    
        // spin up thread for this reader
        readerThread = std::thread(&Reader::ReaderThread, this, participant);  
    }


    void Reader::ReaderThread(dds::domain::DomainParticipant participant) {

        std::cout <<  " ReaderThread " << this->readerName << " running " << std::endl;


        // Find the DataReader defined in the xml by using the participant and the
        // subscriber::reader pair as the datareader name.
        dds::sub::DataReader<dds::core::xtypes::DynamicData> reader =
            rti::sub::find_datareader_by_name<
                dds::sub::DataReader<dds::core::xtypes::DynamicData>>(
                participant,
                this->readerName);

        // WaitSet will be woken when the attached condition is triggered
        dds::core::cond::WaitSet waitset;
        
        // Create a ReadCondition for any data on this reader, and add to WaitSet
        dds::sub::cond::ReadCondition read_condition(
            reader,
            dds::sub::status::DataState::any()
         );


        waitset += read_condition;

        while (!application::shutdown_requested)
        {
            // Wait 4 seconds for data 
            //waitset.dispatch(dds::core::Duration(4));
            waitset.wait(dds::core::Duration(4));
            // Take all samples
            dds::sub::LoanedSamples<dds::core::xtypes::DynamicData> samples = reader.take();
            for (const auto &sample : samples)
            {
                if (sample.info().valid())
                {
                    std::cout << sample.data() << std::endl;
                    std::cout << "****" << std::endl;
                    this->Handler(); // call the associated Handler (Virtual)
                }
                else
                {
                    std::cout << "  Received metadata" << std::endl;
                }
            }

            //std::cout << "Runing thread for Reader " << this->readerName << std::endl;
        }
        
        std::cout << "configure device reader thread shutting down" << std::endl;   
    }


} // NAMESPACE MODULE


