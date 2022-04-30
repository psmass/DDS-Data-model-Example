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
        const std::string writer_name)
    {
        // by setting period non-zero the topic will be a periodic topic
        std::cout << "Writer Topic" << std::endl;
        topicName = topic_name;
        writerName = writer_name;
        writerThread = std::thread(&Writer::WriterThread, this, participant);

    }

    void Writer::WriterThread(dds::domain::DomainParticipant participant) {
        // Lookup the specific topic DeviceState as defined in the xml file.
        // This will be needed to create samples of the correct type
        std::cout <<  " Writer Thread " << this->writerName << " running " << std::endl;

        dds::core::QosProvider qos_provider({ MODULE::QOS_FILE });

        const dds::core::xtypes::DynamicType &thisTopicType =
            qos_provider->type(this->topicName);

        // rti::core::xtypes::print_idl(deviceStateType);

        // Find the DataWriter defined in the xml by using the participant and the
        // publisher::writer pair as the datawriter name.
        dds::pub::DataWriter<dds::core::xtypes::DynamicData> thisTopicWriter =
            rti::pub::find_datawriter_by_name<
                dds::pub::DataWriter<dds::core::xtypes::DynamicData>>(
                participant,
                this->writerName);

        // Create one sample from the specified type and populate the id field.
        // This sample will be used repeatedly in the loop below.
        dds::core::xtypes::DynamicData thisTopicSample(thisTopicType);

        this->Handler(thisTopicWriter, thisTopicSample); // call the toic specific Handler (Virtual)

        std::cout << this->topicName << " Writer thread shutting down" << std::endl;  

    } // end Writer::WriterThread

    std::thread* Writer::getThreadHndl(void) { return &writerThread; };

    dds::pub::DataWriter<dds::core::xtypes::DynamicData>* Writer::getMyWriter() 
        { return topicWriter;};  // needed for Requests to get the response writer
    dds::core::xtypes::DynamicData * Writer::getMyDataInstance()
        { return mySample; };       
    void Writer::enable()  { MODULE::Writer::enabled=true; };
    void Writer::disable() { MODULE::Writer::enabled=false; };

    Reader::Reader( 
        dds::domain::DomainParticipant participant, 
        const std::string topic_name, 
        const std::string reader_name)
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
                    std::cout << "Read sample for topic: " << topicName << std::endl;
                    std::cout << sample.data() << std::endl;
                    // Do Generic Topic Read **Stuff** here
                    this->Handler(); // call the toic specific Handler (Virtual)
                }
                else
                {
                    std::cout << "  Received metadata" << std::endl;
                }
            }

            //std::cout << "Runing thread for Reader " << this->readerName << std::endl;
        }
        
        std::cout << this->topicName << " Reader thread shutting down" << std::endl;   
    }

    std::thread* Reader::getThreadHndl(void) { return &readerThread; };



} // NAMESPACE MODULE


