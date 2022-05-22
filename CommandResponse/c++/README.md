# C++ example using code generation

## Environment
The example code was built with the following environment.

* MacOS Darwin (x64)
* Connext DDS Professional 6.1.0 

## Building Debug executable:



## Running Example:
Device and Controller must be executed from the build directory.

## ToDo:
- Ideally to use a class template that has all the common code,
  concrete topic classes use directly or inherit from and add 
  specific data members and read/event handlers.
- Check how to load an Dynamic data value enum (currently casting)
- Use and load an array of octets for deviceID vs current int_32
- Set Static Topic Values in Constructor vs. top of the handler
- Set deviceID Filter programatically so that xml is not unique per Partipant
- Set deviceID via "EPROM" struct vs. hardwire

