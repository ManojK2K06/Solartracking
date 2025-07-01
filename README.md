# 🌞 Solar Tracking System using ESP32

This project implements a simple **single-axis solar tracking system** using an ESP32 microcontroller, two LDR sensors, a DC motor with a motor driver (L298N), and an LCD display. The system automatically rotates a solar panel towards the direction of maximum sunlight to increase solar energy efficiency.


## 🧠 Features

- Detects light intensity using two LDR sensors
- Rotates the solar panel using a DC motor
- Displays direction of light on a 16x2 LCD
- Fully autonomous operation
- ESP32 controlled, low-cost and scalable design

## 🔧 Hardware Components

| Component       | Quantity |
|----------------|----------|
| ESP32           | 1        |
| LDR Sensor      | 2        |
| Resistors (10k) | 2        |
| DC Motor        | 1        |
| L298N Motor Driver | 1     |
| 16x2 LCD        | 1        |
| Breadboard & Jumper Wires | - |
| Power Supply (Battery or Adapter) | 1 |
| Solar Panel (Optional for real output) | 1 |

## 🔌 Pin Connections

| Component | ESP32 Pin |
|----------|------------|
| LDR1     | GPIO 22    |
| LDR2     | GPIO 23    |
| Motor IN1 | GPIO 18   |
| Motor IN2 | GPIO 19   |
| LCD RS   | GPIO 13    |
| LCD EN   | GPIO 12    |
| LCD D4   | GPIO 14    |
| LCD D5   | GPIO 27    |
| LCD D6   | GPIO 26    |
| LCD D7   | GPIO 25    |

## 🧾 Code Explanation

- `digitalRead()` reads the light state from both LDRs.
- If one LDR detects more light, the motor rotates in that direction.
- LCD displays current status:
  - "ON RIGHT SIDE"
  - "ON LEFT SIDE"
  - "ON BOTH SIDE"
- The motor runs briefly, then stops to avoid overshooting.

## 📟 Project connections and final look
![image](https://github.com/user-attachments/assets/bb739b34-dc8c-4e42-9636-355aceb4ea94)


