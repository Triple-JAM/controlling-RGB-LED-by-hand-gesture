# 🖥️ LED Hand Gesture Controller

## 🌟 Overview

This project transforms your laptop into a smart gesture recognition hub, using its webcam to control an RGB LED connected to an Arduino Nano. It offers a seamless, touch-free interface where hand gestures control the LED's brightness and color in real time.

### 🔧 Technologies Used

- **MediaPipe** – Real-time hand tracking and gesture detection  
- **OpenCV** – Image processing and webcam handling  
- **Arduino Nano** – Microcontroller to drive RGB LED and 7-segment display  
- **Python** – Communication interface and gesture logic  
- **Serial Communication** – Data transfer between PC and Arduino  

---
## 🔍 Table of Contents

1. 🖐️ How It Works
2. 📦 Prerequisites
5. ⚡ How It Works


---
## 🖐️ How It Works

| Gesture | Functionality                    |
|---------|----------------------------------|
| **Thumb & Index Finger Distance** | Adjusts **brightness** of the LED |
| **Three Fingers (R, G, B)**      | Dynamically sets **RGB color** values |

- 👁️ The **webcam** captures the user's hand in real time.  
- 🧠 **MediaPipe** identifies hand landmarks and calculates distances.  
- 🎛️ These gestures are translated into LED parameters (intensity & color).  
- 🧵 A **serial connection** sends data to the Arduino.  
- 💡 The **Arduino** interprets this and drives the RGB LED and a 7-segment display.  

---

## 📦 Prerequisites

- Python 3.7 or higher
- Laptop with built-in or external webcam
- Installed packages:
  - `opencv-python`
  - `mediapipe`
  - `numpy`
  - (Optional) `pyserial` if controlling a physical LED via serial port

---
