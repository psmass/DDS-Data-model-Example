# C++11 example using XML Application Creation and Dynamic Data

## Environment
The example code was built with the following environment.

* Windows 10 (x64)
* Connext DDS Professional 6.1.0 with x64Win64VS2019

## Building Debug executable:

1. Create build directory. 

2. From build type the following.

`cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Win64VS2017 -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 16 2019" -A x64 ..`

3. The project can be build from Visual Studio or from the command line.
    - In Visual Studio open RSConfig.sln and select **Debug** build configuration and build.
    - Or type the following command.

`cmake --build . --config Debug`

OR if you want to see the build output

`cmake --build . --config Debug --verbose`

## Running Example:
Publisher and subscriber must be executed from the build directory.

```.\Debug\Publisher.exe```

```.\Debug\Subscriber.exe```