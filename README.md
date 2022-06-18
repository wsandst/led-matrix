# led-matrix
This project contains the code and documentation to run a LED Matrix device, a decorative LED grid with functionality for displaying various interesting animations and information. The device can be controlled over Bluetooth through an app or a website. This is accomplished through two main parts - the physical hardware and the user interface. The physical hardware consists of an ESP32 microcontroller, LEDs and other electrical components. The user interface consists of an app and a website, created using Flutter. The devi

# Hardware
The physical hardware of the device consists of an ESP32 microcontroller and individually controllable LEDs, as well as
electrical components to connect them together.

# Network architecture
In order to facilitate user-friendly interfacing with the device, multiple modes of communication are used. 
The device can be used locally through Bluetooth with an app or the publically available website. It can
also be used wirelessly over the internet if the device is connected to the internet. The internet communications
is facilitied through a public MQTT broker, which allows for communication between the website and device without
a dedicated server. Finally, the device can be connected to an available internet connection using an access point website, which allows users without Bluetooth to setup the device.

# App and website
The user interface is available as an app or a website. These are implemented using the same Flutter project.

# Security
To prevent unauthorized usage, each device has a unique identifier. This 
identifier is required to be able to access the device over the internet. 
The app and website will remember previous identifiers (through cookies).
Additionally, a user can set a pin code to a particular device.

# ESP32
The ESP32 performs several functions:
* Controlling the LEDS
* Bluetooth communication
* MQTT cmmunication over the internet
* Performing certain animations and keeping track of user settings
* Scheduling features
