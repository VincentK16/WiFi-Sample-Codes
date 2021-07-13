# WiFi Sample Codes

This repo consists of the sample codes to be used during class.

> 1. **TTGO-uKitExplore_Basic Serial Communication**: Basic serial communication (UART) between TTGO to uKit Explore. [NO EXTERNAL HARDWARE] *TTGO --> uKit Explore*
> 2. **TTGO-uKitExploreServoMotor**: Basic serial communication (UART) between TTGO to uKit Explore. [WITH ATTACHED UBTECH Servo] *TTGO --> uKit Explore*
> 3. **ESP32_APMode**: Made the TTGO in AP mode (broadcast its own WiFi) *TTGO*
> 4. **TTGO_WebServer-uKitExploreServoMotor**: Basic Web Server in TTGO to control hardware attached on uKit Explore *TTGO --> uKit Explore*
> 5. **Ultrasonic**: Basic serial communication (UART) between uKit Explore to TTGO. [With uKit Explore connected to UBTECH Ultrasonic Sensor] *uKit Explore --> TTGO*
> 6. **TTGO_DHT11**: Basic web server on TTGO to read and display DHT temperature and humidity values. *TTGO*
> 7. **NTPTime_ESP32**: Learn how to request date and time from an NTP Server. *TTGO*
> 8. **Manual_WiFi_Configuration_ESP32**: Manual configure the WiFi instead of hardcoded on code. *TTGO*

For sending TWO DATAS to ESP32 from Arduino/uKit Explore Hardware, refer to:
1. Arduino sketch for Arduino NANO to send data to NodeMCU using SoftwareSerial library: https://gist.github.com/ariffinzulkifli/fd77b92d28b2ead38f20a033a8bde72d
2. Arduino sketch for NodeMCU to receive incoming data from Arduino NANO using SoftwareSerial library: https://gist.github.com/ariffinzulkifli/0d8be195de02e8cbc23ee51c1337c903

Note that SoftwareSerial is NOT NEEDED if you are using the hardware UART. 

**indexof() Reference:**
1. https://www.arduino.cc/reference/en/language/variables/data-types/string/functions/indexof/
2. https://www.arduino.cc/en/Tutorial/BuiltInExamples/StringIndexOf

**substring() Reference:**
1. https://www.arduino.cc/reference/en/language/variables/data-types/string/functions/substring/
2. https://www.arduino.cc/en/Tutorial/BuiltInExamples/StringSubstring

NOTE: Sample codes are just for reference and for you to improve and make your own AWESOME applications!

Thanks!

Vincent Kok, July 2021
