# 8051 Automatic Street Light Control System

## Project Description
This project implements an automatic street light control system using the 8051 microcontroller. It uses four IR sensors to detect vehicle or object movement and an LDR sensor to detect ambient light conditions. Based on the sensor inputs, the system automatically controls four street lights to reduce unnecessary power consumption.

## Features
- Automatic street light control
- Four IR sensors for object detection
- LDR sensor for ambient light detection
- Independent control of four lights
- Energy-efficient lighting operation

## Hardware Requirements
- 8051 Microcontroller
- 4 IR Sensors
- 1 LDR Sensor
- 4 LEDs or street light driver circuits
- Power supply
- Connecting wires

## Software Requirements
- Embedded C
- Keil µVision IDE
- 8051-compatible C compiler

## Working Principle
The LDR sensor determines whether the ambient light condition allows the system to operate. When the LDR input is HIGH, the controller checks the IR sensors and switches the lights according to the detected sensor. When the LDR input is LOW, all four lights are turned OFF.

## Applications
- Smart street lighting
- Parking areas
- Road and pathway lighting
- Energy-saving lighting systems

## Programming Language
Embedded C

## Microcontroller
8051
