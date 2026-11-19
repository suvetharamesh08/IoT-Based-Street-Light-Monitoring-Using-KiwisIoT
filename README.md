# 💡 ESP8266-Based IoT Automatic Street Light Monitoring System

## 📌 Project Overview

An IoT-based Automatic Street Light System developed using ESP8266 and an LDR sensor. The system automatically switches the LED ON during dark conditions and OFF during bright conditions based on light intensity. Sensor readings and street light status are transmitted to the KiwisIoT cloud dashboard through Wi-Fi for real-time monitoring.

## 🎯 Objectives

- To detect environmental light intensity using an LDR sensor.
- To automate street light ON/OFF operation.
- To monitor sensor readings in real time.
- To transmit data to the KiwisIoT dashboard.

## 🛠️ Components Required

- ESP8266 NodeMCU
- LDR Sensor
- LED
- Breadboard
- Jumper Wires
- USB Cable

## 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- ESP8266WiFi Library
- KiwisIoT Library

## ⚙️ Working Principle

1. The LDR sensor detects surrounding light intensity.
2. ESP8266 reads the analog value through pin A0.
3. If the LDR value is below 500, the LED turns ON.
4. If the LDR value is 500 or above, the LED turns OFF.
5. Sensor readings and operating status are transmitted to KiwisIoT.

## 📂 Source Code

[ESP8266_Automatic_Street_Light.ino](ESP8266_Automatic_Street_Light.ino)

## 📸 Project Output

## Circuit Connections

![Street Light Circuit Connections](street%20light%20%20circuit%20connections.jpeg)




![Three LED KiwisIoT Output](<THREE LED KIWISIOT output.jpeg>)

## 🌟 Key Features

- Automatic street light control.
- Real-time light intensity monitoring.
- Wi-Fi-based communication.


## 🚀 Applications

- Smart Street Lighting
- Smart City Infrastructure
- Automated Outdoor Lighting


## 📜 Conclusion

This project demonstrates an IoT-based automatic street light system using ESP8266 and an LDR sensor. It provides automatic lighting control based on environmental brightness and enables real-time monitoring through the KiwisIoT cloud dashboard.
