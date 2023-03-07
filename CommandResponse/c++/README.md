# C++98 example using Code Gen and Compiled Types
# C++11 example using XML Application Creation and Dynamic Data

## Environment
The example code was built with the following environment.

* MacOS Darwin (x64)
* Ubuntu 20.04 gcc 9.4.0
* Connext DDS Professional 6.1.0 / 6.1.1

## Building Debug executable:

1. Create build directory. 

2. From build type the following.
from c11> mkdir build, cd build

`cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Darwin17clang9.0 -DCMAKE_BUILD_TYPE=Debug ..`
`cmake -DBUILD_SHARED_LIBS=ON -DCONNEXTDDS_ARCH=x64Linux4gcc7.3.0 (5.4.0 also good) -DCMAKE_BUILD_TYPE=Debug ..`

alternatively:
`cmake -DBUILD_SHARED_LIBS=ON ..`


3. The project can be built from the command line.

`cmake --build . --config Debug`

OR if you want to see the build output

`cmake --build . --config Debug --verbose`

OR simply:
`cmake --build .`


## Running Example:
Device and Controller MUST be executed from ../DDS-Data_model-Example/CommandResponse/c++ directory
e.g. .src/build/GenDevice  .src/build/Controller

or ./runGenDevice
   ./runController

## Issues

Not sure if Connext 7.0 would work - likely
