# C++ example using code generation
The example generates code using two IDL files ..\model\Sensor.idl and ..\model\Common.idl

## Environment
The example code was built with the following environment.

* Windows 10 (x64)
* Connext DDS Professional 6.1.0 with x64Win64VS2019

## Directories

- idl - Contains the IDL files created by converting ..\model\SensorInfo.xml to SensorInfo.idl using the following command from the c++ directory. SensorInfo.idl was then separated into two files Common.idl and Sensor.idl. These two files are used during code generation for the C++ application. 

    ```
    cd c++
    %NDDSHOME%\bin\rtiddsgen.bat -convertToIdl -d idl ..\model\SensorInfo.xml
    ```

- src - Contains the Sensor_publisher.cxx and Sensor_subscriber.cxx were originally generated as examples but have been modified and therefore should not be deleted.

- src/generated - Contains the type files generated from the IDL.

- xml - Contains the SensorQoS.xml file extracted from ..\model\SensorInfo.xml and used by Sensor_publisher.cxx and Sensor_subscriber.cxx.  

## Building Windows Debug executable:

1. Create a src/build directory and cd to the build directory

2. To build for Visual Studio 19 type the following.
    ```
    cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Win64VS2017 -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 16 2019" -A x64 ..
    ```

3. The project can be build from Visual Studio or from the command line.

    In Visual Studio open sensors.sln and select Debug build configuration and build with the optional --verbose argument.
    Or type the following command.
    ```
    cmake --build . --config Debug <--verbose>
    ```

4. Run the examples from the directory where the USER_QOS_PROFILES.xml was copied to. Publisher and subscriber must be executed from the build directory.

    ```.\Debug\Sensor_subscriber.exe```

    ```.\Debug\Sensor_publisher.exe```

# Building Linux Debug executable

1. Create a src/build directory and cd to the build directory

2. To build for Linux type the following.
    ```
    cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Linux4gcc7.3.0 -DCMAKE_BUILD_TYPE=Debug  ..
    ```

3. Build the executables

    ```
    cmake --build . --config Debug <--verbose>
    ```
4. Run the examples from the directory where the USER_QOS_PROFILES.xml was copied to.

    ```./Subscriber.exe```

    ```./Publisher.exe```

