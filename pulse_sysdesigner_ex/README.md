# pulse_sysdesigner

Pulse Demo design was started from this repo which contains the top-level
System Designer project file `MedicalDemo.rtisdproj` and the Data Model XML file `MedicalDemo.xml`.

Run RTI System Designer from RTI Launcher and open/explore MedicalDemo.
View the system diagram in Powerpoint. 

## Instructions

Go to each repository (listed below) and clone them locally)

git clone https://github.com/rtijohnb/pulse_sysdesigner

git clone https://github.com/rtijohnb/pulse_arduino

git clone https://github.com/rtijohnb/pulse_pi

git clone https://github.com/rtijohnb/pulse_aws_routing

git clone https://github.com/rtijohnb/pulse_wis


In each repository there is a README.md file that explains how to build and run that part of the demo.
Both the AWS routing service and the Web Integration service need to be uploaded and run on the Amazon cloud.  See special instructions in pulse_aws_routing.
To run the demo run:

local routing service  - ./linuxRunPiRouting

aws routing service  -  ./linuxRunWisRouting

WIS are all running  -  ./linuxStartWis

Plug in the Arduino.  Sensor program will start automatically. If there is no actual sensor data there will be simulated data that is sent.

Start the Pulse demo on the Raspberry Pi  - ./runLinuxP

Use the QR Code in pulse_wis to direct your Browser to the pulse page.

## Operation
Set the high / low alert thresholds with the up/down arrows (last change wins).
When in Alert range, the BPM number blinks red.

