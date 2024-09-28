## Voltmeter OLED Display

## Overview

This project creates a simple voltmeter using an Arduino Nano and an OLED display. It measures the voltage from a voltage sensor and displays the value in volts on the OLED screen.

## Components Used

- **Arduino Nano**
- **OLED Display (128x64)**
- **Voltage Sensor**
- **Breadboard**
- **Jumper Wires**

## Wiring Instructions

### OLED Display
- **VCC** -> 5V on Arduino
- **GND** -> GND on Arduino
- **SCL** -> A5 on Arduino Nano
- **SDA** -> A4 on Arduino Nano

### Voltage Sensor
- **VOUT** -> A0 on Arduino (analog input)
- **VCC** -> 5V on Arduino
- **GND** -> GND on Arduino

## How It Works

- **Voltage Sensor**: The voltage sensor reads the voltage level and outputs a corresponding analog signal to the Arduino.
- **OLED Display**: The Arduino processes the sensor reading and converts it into a voltage value, which is then displayed on the OLED screen.

## Setup Instructions

1. **Wiring**: Connect the OLED display and voltage sensor to the Arduino according to the wiring instructions.
2. **Install Libraries**: Install the `Adafruit_GFX` and `Adafruit_SSD1306` libraries using the Arduino IDE's Library Manager.
3. **Upload Code**: Upload the provided code to your Arduino board.
4. **Test**: Power the Arduino and observe the voltage readings displayed on the OLED.

## Features

- **Real-Time Voltage Readings**: Displays real-time voltage measurements on the OLED display.
- **Simple Interface**: User-friendly display that shows voltage in volts.

## Customization

- **Voltage Range**: Adjust the code to accommodate different voltage sensor specifications.
- **Data Logging**: Implement additional functionality to log voltage readings over time.
- **Multiple Sensors**: Extend the project to read from multiple voltage sensors.

## Applications

- **Battery Monitoring**: Useful for monitoring battery voltages in DIY projects.
- **Power Supply Testing**: Can be used to test and measure voltages from power supplies.
- **Educational Projects**: A great project for learning about voltage measurements and OLED displays with Arduino.

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute this project for personal or commercial purposes.
