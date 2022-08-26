# Python example using XML Application Creation and Dynamic Data

Perform the simple build and install outlined in the documentation:
     https://community.rti.com/static/documentation/connext-dds/6.0.1/api/connext_dds/api_python/building.html
    install per directions (ensure your VM has at least 4GB RAM if not 6GB RAM)
    [less RAM results in pip install failure - this last step takes 20 minutes or so]


    1) Install RTI's new experimental python binding:

    download/gitclone:  https://github.com/rticommunity/connextdds-py
    cd to downloaded directory:


    2) then: (note documentation makes appear you do this step first, but not true)
    python3 configure.py -n $NDDSHOMe x64Linux3gcc4.8.2 // or what ever libs you have installed 

    3) then:
    pip install . 

## Environment
The example code was built with the following environment.

* MacOS Darwin (x64)
* UBUNTU 20.0.4
* Connext DDS Professional 6.1.0 or 6.1.1

## Running Example:
Device and Controller must be executed from the build directory.
> python Device or python3 device
> python Controller or python3 controller





