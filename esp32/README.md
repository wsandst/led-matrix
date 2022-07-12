# ESP32 Network Code

This folder contains the ESP32 microcontroller code, which
communicates with the client and controls the LED matrix.

# Build instructions (Linux)
## Dependencies
Install the [EspressIF development toolkit by following these instructions](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html)  
## Building
To build, first setup the EspressIF environment in your current terminal:  
`. PATH_TO_ESP_IDF/export.sh`  
You can then build and flash using:  
`idf.py flash`
## Viewing debug messages/printf
To view debug messages and logging, you can use:  
 `idf.py monitor`