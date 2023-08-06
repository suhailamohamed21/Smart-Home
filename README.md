# Smart Home Project 

This repository contains the code and documentation for a smart home project that utilizes Arduino, a Bluetooth module, a relay, an electric bulb, and a DC motor. The project allows you to control the electric bulb and the DC motor remotely using a smartphone or any Bluetooth-enabled device.

## Components Required
- Arduino board
- Bluetooth module (e.g., HC-05)
- Relay module
- Electric bulb
- DC motor
- Jumper wires
- Breadboard (optional)
- Power supply

## Circuit Connections
1. Connect the Arduino board to your computer using a USB cable.
2. Connect the Bluetooth module to the Arduino:
   - VCC pin to 5V on Arduino
   - GND pin to GND on Arduino
   - TX pin to RX on Arduino
   - RX pin to TX on Arduino
3. Connect the relay module to the Arduino:
   - VCC pin to 5V on Arduino
   - GND pin to GND on Arduino
   - IN1 pin to digital pin 7 on Arduino
   - IN2 pin to digital pin 8 on Arduino
4. Connect the electric bulb to the relay module:
   - Connect one terminal of the electric bulb to the NO (Normally Open) terminal of the relay.
   - Connect the other terminal of the electric bulb to the COM (Common) terminal of the relay.
5. Connect the DC motor to the Arduino:
   - Connect one terminal of the motor to the NO (Normally Open) terminal of the relay.
   - Connect the other terminal of the motor to DC power supply.

## Circuit diagram

![WhatsApp Image 2023-08-06 at 1 57 02 AM](https://github.com/suhailamohamed21/Smart-Home/assets/125570330/865424a6-b668-4487-9697-bcdb17e68868)

## Usage
1. Install the Arduino IDE on your computer if you haven't already.
2. Connect the Arduino board to your computer using a USB cable.
3. Open the `smarthome.ino` file in the Arduino IDE.
4. Upload the code to the Arduino board.
5. Disconnect the Arduino from the computer and power it using an external power supply.
6. Install a Bluetooth terminal app on your smartphone or any Bluetooth-enabled device.
7. Pair your smartphone with the Bluetooth module (e.g., HC-05) using the default PIN (usually 1234 or 0000).
8. Open the Bluetooth terminal app and connect to the Bluetooth module.
9. Send the following commands via the Bluetooth terminal app to control the smart home devices:
   - To turn on the electric bulb, send '2'.
   - To turn off the electric bulb, send '2' again.
   - To start the DC motor, send '1'.
   - To stop the DC motor, send '1' again.

## Simulation

https://github.com/suhailamohamed21/Smart-Home/assets/125570330/94b2c90e-c6fa-42f5-adff-45ea36484464


