#Arduino Esp8266 Alexa controlled oller blinds

This project is completly based on the [forked repo](https://github.com/kakopappa/arduino-esp8266-alexa-multiple-wemo-switch), all the hard work was done by kakopappa. I am adding supprt for stepper motors controlling roller blinds

Parts you need:

WeMos D1-mini ($4.00)  http://www.aliexpress.com/store/product/D1-mini-Mini-NodeMcu-4M-bytes-Lua-WIFI-Internet-of-Things-development-board-based-ESP8266/1331105_32529101036.html

It also relies on the [AccelStepper library](https://github.com/waspinator/AccelStepper) which alows to control the motors without blocking the ESP8266 chip. You can add it from the Librarie Manager in the arduino IDE, but just in case it is added as a submodule of this repo so it should come along when you clone (then you would need to copy manually the files in the folder of the .ino sketch). 

    git clone --recursive git://github.com/GaelReinaudi/esp8266-Alexa-controlled-roller-blinds.git


How to use:

1. Download the code
2. Open wemos.ino in the Arduino editor.
2. Change the WI-FI settings. 
3. Define switches and callbacks
3. Flash 
4. Enjoy


### Articles about the Wemos switch
* [monkeytypewritr](https://medium.com/@monkeytypewritr/amazon-echo-esp8266-iot-a42076daafa5#.oc4od1xa0)

### Credits

- kakopappa - [forked repo](https://github.com/kakopappa/arduino-esp8266-alexa-multiple-wemo-switch)


