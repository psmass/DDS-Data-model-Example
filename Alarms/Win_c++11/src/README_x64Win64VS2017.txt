Welcome to your first Connext DDS example! 

This example was generated for architecture x64Win64VS2017, using the
data type IntrusionAlarm from Alarms.idl.
This example builds two applications, named Alarms_publisher and
Alarms_subscriber.

Simple Example
============
If you have generated this example using:
> rtiddsgen -example <arch> <idl>.idl
This is the simple example. This shows how to create a single DataWriter
and DataReader to send and receive data over Connext DDS.

Advanced Example
===============
If you have generated the advanced example using:
> rtiddsgen -example <arch> -exampleTemplate advanced <idl>.idl
The code is similar to the simple example, with a few key differences:
    - Both examples use WaitSets to block a thread until data is available.
      This is the safest way to get data, because it does not affect any
      middleware threads. In addition, the advanced example installs listeners
      on both the DataReader and DataWriter with callbacks that you can
      implement to accomplish a desired behavior. These listener callbacks
      are triggered for various events, such as discovering a matched
      DataWriter or DataReader. Listener callbacks are called back from
      a middleware thread, which you should not block.
    - The simple example sets is_default_qos=true in the XML file, and creates
      the DDS entities without specifying a profile. However, the advanced
      example sets is_default_qos=false, and specifies the QoS profile to use
      from the XML file when creating DDS entities. is_default_qos=false
      is recommended in a production application.

To Build this Example:
======================
1. Launch Visual Studio in one of two ways:
        - By typing Alarms-x64Win64VS2017.sln in the
          Command Prompt window.
        - By opening Visual Studio on your machine and then opening the
          Alarms-x64Win64VS2017.sln file (in the
          Solution Explorer) via File > Open Project.

    Note: If you are using Visual Studio 2017 or later, you might be prompted
    to retarget the file. If this happens, in the Retarget Projects window that
    appears, select an installed version of Windows SDK and click OK.

2. Select Build Solution from the Build menu. (You can also right-click
   Alarms_publisher or Alarms_subscriber and
   choose Build; do for each.) 

    Note: If you get the Windows SDK error, right-click the solution and choose
    Retarget Solution.

To Modify the Data:
===================

To modify the data being sent: edit the Alarms_publisher.cxx
file where it says 
// Modify the data to be written here

Recompile after making the changes.

To Run this Example:
====================
 
To run from Visual Studio:
1. Right-click Alarms_publisher and choose Debug > Start new instance.
2. Right-click Alarms_subscriber and choose Debug > Start new instance.
If Visual Studio will not let you choose Debug > Start new instance, run the
subscribing application from the command prompt instead.
 
To run from the command prompt: 
1. Make sure you are in the directory where the USER_QOS_PROFILES.xml file was
   generated (the same directory this README file is in).
2. Run C:\Program Files\rti_connext_dds-6.1.0\bin\..\resource\scripts\rtisetenv_x64Win64VS2017.bat
   to make sure the Connext libraries are in the path, especially if you opened a
   new command prompt window.
3. Run the publishing or subscribing application by typing:
> objs\x64Win64VS2017\Alarms_publisher.exe -d <domain_id> -s <sample_count>
> objs\x64Win64VS2017\Alarms_subscriber.exe -d <domain_id> -s <sample_count>
