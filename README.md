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

1. 🖐️ Introduction
2. 🖼️ Representation
3. 📦 Prerequisites
4. ⚡ How It Works


---
## 🖐️ Introduction

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
## 🖼️ Representation
<p align="center">
  <img src="Assets/ft.jpg" alt="Hand Gesture Demo" width="450"/>
  <img src="Assets/st.jpg" alt="Hand Gesture Demo" width="450"/>
<p/>

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
## ⚡ How It Works

# Arduino: RGB & 7-Segment Controller

📅 **Last Updated:** May 28, 2025  
🔌 **Purpose:** Control an RGB LED’s color & brightness via serial commands—*and* show the selected channel on a seven-segment display simultaneously.

---

## 🚀 Features

- **Serial-driven control**  
  Send `"<channel>#<level>"` over USB-UART  
- **Multi-channel RGB**  
  Adjust each LED channel (R, G, B) from OFF (0) to MAX (9)  
- **Seven-segment feedback**  
  Active channel number (1–3) shows on the display  
- **Plug-and-play**  
  Minimal wiring and standard Arduino calls  

---

## 🔧 Hardware Setup

| Component            | Arduino Pin | Notes                               |
|----------------------|-------------|-------------------------------------|
| **Red LED Channel**  | D11         | PWM output                          |
| **Green LED Channel**| D10         | PWM output                          |
| **Blue LED Channel** | D12         | PWM output                          |
| **7-Seg Anode**      | D3          | Common-anode enable for digit pin   |
| **Segments A–G**     | A0–A5       | (Wire per your display’s datasheet) |

> **Tip:** Use current-limiting resistors (220 Ω–330 Ω) on every LED/segment pin.

> **Tip:** We can use analog pin in arduino by writing on DDRC and PORTC registers.

---

## 💻 Serial Command Reference

| Command String | Meaning                                          | Effect                                         |
|---------------:|--------------------------------------------------|------------------------------------------------|
| `1#0`          | Channel 1 (Red) → OFF                            | Red LED off; displays “1” on 7-seg             |
| `2#5`          | Channel 2 (Green) → Medium brightness (≈50%)     | Green LED ≈50%; displays “2”                   |
| `3#9`          | Channel 3 (Blue) → Max brightness                | Blue LED 100%; displays “3”                    |
| `X#Y`          | X = 1–3 (R, G, B), Y = 0–9 (map to 0–255 PWM)    | —                                              |

---

## 🔮 Future Expansion

This hand‐gesture–driven LED controller is just the beginning! Here are some high-impact ways to extend and apply the core “thumb-index distance → brightness” & “digit gesture → color” concept into new domains:

| Domain                  | Expansion Idea                                                                                                                                                                                                                                                                       |
|-------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 🏠 Smart Home           | **Gesture-Activated Lighting Scenes**<br>• Swipe left/right to cycle “moods” (reading, movie, party) and pinch to confirm.<br>• Hold a “peace” sign (✌️) for 3 seconds to toggle all lights off/on.<br>• Control smart plugs or blinds via gesture commands.                                         |
| 🚗 In-Car Assistant      | **Touchless Dashboard Controls**<br>• Show “3” to mute/unmute audio; “2” to change HVAC mode (green = eco, red = heat).<br>• Pinch to adjust volume or fan speed in real time.<br>• Raise an open palm to silence phone notifications or incoming calls—safe, hands-free interaction.        |
| 🤖 Wearables & Robotics  | **Gesture-Controlled Drone/Robot**<br>• Distance pinch controls drone altitude (closer = descend, farther = ascend).<br>• Show “1”/“2”/“3” to switch flight modes (hover, follow-me, waypoint).<br>• Integrate vibration feedback on wristband for “success” or “warning.”                         |
| 📱 Mobile & AR/VR       | **AR Gesture UI**<br>• Overlay virtual sliders on smartphone camera feed—pinch to adjust volume, brightness, zoom.<br>• In VR, use hand distance to scale objects or navigate menus without controllers.<br>• Voice + gesture multimodal commands (e.g. “Hey Siri” + pinch).                  |
| 🎮 Gaming & Esports      | **In-Game Gesture Macros**<br>• Assign “2” for quick-cast ability, “3” for ultimate skill; distance pinch for power charge.<br>• Map gestures to controller buttons for custom combos—no hardware required.<br>• Show finger count to switch weapon slots in FPS or RPG.                      |
| 🌱 Environmental & IoT   | **Gesture Sensor Hub**<br>• Combine with temp/humidity sensors—raise two fingers to display current readings on LEDs/segment.<br>• Distance pinch controls water pump flow for automated plant watering.<br>• Show “4” to start air-purifier or “5” for fan boost.                               |
| 🌌 Interactive Art       | **Gesture-Reactive Installations**<br>• Visitors control color & intensity of large LED walls by standing in front of a camera—pinch to paint with light.<br>• Show numbers for scene changes (abstract, geometric, organic patterns).<br>• Network multiple units for collaborative performance. |
| 🤝 Accessibility & HCI   | **Assistive Controls**<br>• For users with limited mobility, use simple pinches to control wheelchairs, prosthetics, or environmental devices.<br>• Show “3” for emergency call, “2” for lights, pinch to scroll through menu options.<br>• Integrate with speech recognition for full A/V interface. |

---

> **Got more ideas?**  
> Share your concepts or create a pull request—we’d love to see this project evolve!  



---
