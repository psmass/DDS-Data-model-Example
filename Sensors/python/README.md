# Python example using RTI python API and RTI python code generator
This example uses RTI python API with python types generated from the RTI python module available starting with RTI Connext 7.0.0.

## Generating the code
1. cd to Sensors/build directory

2. Run the code generator for the python types. The SensorInfo.py will contain the types defined in SensorInfo.xml.
```
rtiddsgen ..\model\SensorInfo.xml -ppDisable -d . -language python -update typefiles 
```

## Running Example:
Publisher and subscriber must be executed from the python directory because it looks for the XML file that defines the types, Domain and QoS in `../model/SensorInfo.xml`. 
Note: In this example we are not using XML application generation to create the DDS entities and therefore the SensorDomainLibrary is not used in SensorInfo.xml.

```SensorInfo_program.py --pub```

```SensorInfo_program.py --sub```