# c++ example using code generation
The c++ example uses rtiddsgen code generation. 

Note: The Connext DDS environment must be set up before running any commands below since they rely on $NDDSHOME being set.
## Directories

- idl - Contains the IDL file Alarms.idl used by rtiddsgen to generate typecode.

- src - Contains the Alarms_publisher.cxx and Alarms_subscriber.cxx. These files should not be deleted.

- src/gen - Contains the type files generated from the IDL.

- xml - Contains the USER_QOS_PROFILE.xml whish is used to apply the Qos to the publisher and subscriber. This file is copied to the build directory during cmake build. To make changes to this file do it in the xml directory, delete the file from the build directory and rebuild.

## Building Windows Debug executable:

1. Create a src/build directory and cd to the build directory

2. To build for Visual Studio 19 type the following.
    ```
    cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Win64VS2017 -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 16 2019" -A x64 ..
    ```

3. The project can be build from Visual Studio or from the command line.

    In Visual Studio open Alarms.sln and select Debug build configuration and build with the optional --verbose argument.
    Or type the following command.
    ```
    cmake --build . --config Debug <--verbose>
    ```

4. Run the examples from the directory where the USER_QOS_PROFILES.xml was copied to. Publisher and subscriber must be executed from the build directory.

    ```.\Debug\alarms_subscriber.exe```

    ```.\Debug\alarms_publisher.exe```

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

    ```./alarms_subscriber```

    ```./alarms_publisher```

