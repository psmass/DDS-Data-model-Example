# C++11 example using XML Application Creation and Dynamic Data.
This example uses the "../model/SensorInfo.xml" created with System Designer. 

## Environment
In order to build this example the Connext environment must be set up since the build process relies on $NDDSHOME.

## Directories
The following files are used in this example.

- The sensor_publisher.cxx and sensor_subscriber.cxx and application.hpp are user defined DDS files.

- The directory ../model contains SensorInfo.xml created with System Designer to specify the types, quality of service and domain entities. See the README.md in the model directory for the modeling best practices that were followed.

## Building Windows Debug executable:

1. From the c++11 directory create a build directory and cd to the build directory

2. To build for Visual Studio 19 type the following.
    ```
    cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Win64VS2017 -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 16 2019" -A x64 ..
    ```
3. The project can be build from Visual Studio or from the command line.

    In Visual Studio open sensors-xml-application.sln and select Debug build configuration and build with the optional --verbose argument.
    Or type the following command.
    ```
    cmake --build . --config Debug <--verbose>
    ```
4. Publisher and subscriber must be executed from the build directory since the source code references the QoS file "Sensors/model/SensorQoS.xml" file.

    ```
    .\Debug\sensor_subscriber.exe
    ```

    ```
    .\Debug\sensor_publisher.exe
    ```

# Building Linux Debug executable

1. Create a c++11/build directory and cd to the build directory

2. To build for Linux type the following.
    ```
    cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Linux4gcc7.3.0 -DCMAKE_BUILD_TYPE=Debug  ..
    ```
3. Build the executables

    ```
    cmake --build . --config Debug <--verbose>
    ```
4. Publisher and subscriber must be executed from the build directory since the source code references the QoS file "Sensors/model/SensorQoS.xml" file.

    ```
    ./sensor_subscriber
    ```

    ```
    ./sensor_publisher
    ```
