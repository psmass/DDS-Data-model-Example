
![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)

THIS DIRECTORY CONTAINS:


``` 
const unsigned long LEN_DEV_ID = 8;
const unsigned long MAX_DEVICE_NAME_LEN=100;

typedef octet DeviceID[LEN_DEV_ID]

struct GenericAlarm {
   DeviceID deviceId; //@Key
   char deviceName[MAX_DEVICE_NAME_LEN];
   AlarmCriticalityEnum alarmCriticality; // Critical, Major, Minor
   AlarmTypeEnum alarmType;               // Humidity, Motion, Fire, Intrusion
   AlarmStateEnum alarmState;             // Open, Closed
   float value;               //@Optional
   unitTypeEnum valueType;    //@Optional Fahrenheit, Celsius, Percentage 
}
   
   

```




