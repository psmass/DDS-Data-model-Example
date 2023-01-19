# Python example using XML Application Creation and Dynamic Data

Perform the simple build and install outlined in the documentation:
     https://community.rti.com/static/documentation/connext-dds/6.0.1/api/connext_dds/api_python/building.html
    install per directions (ensure your VM has at least 4GB RAM if not 6GB RAM)
    [less RAM results in pip install failure - this last step takes 20 minutes or so]


    1) Install RTI's new experimental python binding:
    Note: *** if previously installed older RTI python binding, first - pip3 uninstall rti

    download/gitclone:  https://github.com/rticommunity/connextdds-py
    cd to downloaded directory:


    2) then: (note documentation makes appear you do this step first, but not true)
    python3 configure.py -n $NDDSHOME x64Linux3gcc4.8.2 // or what ever libs you have installed
    or python3 configure.py --nddshome/Applications/rti_connext_dds-7.0.0 x64Darwin17clang9.0 // or what ever libs you have installed

    3) then:
    pip3 install . 

## Environment
The example code was built with the following environment.

* MacOS Darwin (x64) w/ Connext DDS Professional 7.0.0
* UBUNTU 20.0.4 w/Connext DDS Professional 6.1.1

## Running Example:

source /Applications/rti_connext_dds-7.0.0/resource/scripts/rtisetenv_x64Darwin17clang.9.0.bash

Device and Controller must be executed from the build directory.
> python Device or python3 device
> python Controller or python3 controller

## Issues
Device cft seems to have broken with Connext 7.0.0 releas -  I've commented out the cft in the xml and commented out the line of code that updates the cft values in the device.py file.





