# C++ example using code generation
The example generates code using two IDL files ..\model\Sensor.idl and ..\model\Common.idl

## Environment
The example code was built with the following environment.

* Windows 10 (x64)
* Connext DDS Professional 6.1.0 with x64Win64VS2019

## Directories

- idl
This directory contains the IDL files that were created by converting ..\model\SensorInfo.xml to SensorInfo.idl using the following command from the c++ directory.
```%NDDSHOME%\bin\rtiddsgen.bat -convertToIdl -d idl ..\model\SensorInfo.xml```

SensorInfo.idl was then separated into two files Common.idl and Sensor.idl. These two files are use during code generation for the C++ application. 
Common.idl - Contains the Common Module types originally defined in SensorInfo.xml.
Sesnor.idl - Contains the Sesnor Module types originally defined in SensorInfo.xml.

## Generating code 

1. Run the following commands from the c++ directory to generate the type files, example code and a makefile.

```%NDDSHOME%\bin\rtiddsgen.bat .\idl\Sensor.idl -d .\src -language C++ -namespace -create typefiles -create makefiles -platform x64Win64VS2017```

```%NDDSHOME%\bin\rtiddsgen.bat .\idl\Common.idl -d .\src -language C++ -namespace -create typefiles```

2. Open Visual Studio and add the Common*cxx and Common*.h files to the Header and Source for publisher and subscriber project.

3. If you make changes to the IDL file run the following command from the c++ directory to update the typefiles. Then recompile.

```%NDDSHOME%\bin\rtiddsgen.bat .\idl\Common.idl -d .\src -language C++ -namespace -update typefiles```

## Building Debug executable:

1. Build the solution from Visual Studio or type
```
    cd src
    msbuild.exe Sensor-x64Win64VS2017.sln
```



## Running Example:
Publisher and subscriber must be executed from the src directory.

```.\objs\x64Win64VS2017\Sensor_subscriber.exe```

```.\objs\x64Win64VS2017\Sensor_publisher.exe```