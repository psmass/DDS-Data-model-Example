# C++11 example using XML Application Creation and Dynamic Data

## Environment
The example code was built with the following environment.

* MacOS Darwin (x64)
* Connext DDS Professional 6.1.0 

## Building Debug executable:

1. Create build directory. 

2. From build type the following.

`cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Darwin17clang9.0 -DCMAKE_BUILD_TYPE=Debug -A x64 ..`

3. The project can be built from the command line.

`cmake --build . --config Debug`

OR if you want to see the build output

`cmake --build . --config Debug --verbose`

## Running Example:
Device and Controller must be executed from the build directory.