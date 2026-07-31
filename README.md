# Day-14-Adaptive-Cruise-Control-System
A C-based simulation of Adaptive Cruise Control (ACC) that adjusts vehicle speed dynamically based on distance from the vehicle ahead, demonstrating core ADAS safety logic.
# 🚗 Adaptive Cruise Control System

## 📌 Description
This project simulates an Adaptive Cruise Control (ACC) system that automatically adjusts vehicle speed based on distance to maintain safety.

## 💡 Features
- Distance-based speed adjustment
- Collision avoidance logic
- Real-time driving simulation
- Smart acceleration and braking

## 🧠 Logic
- Distance < 10 → Stop
- Distance < 30 → Slow down
- Distance < 60 → Maintain speed
- Distance > 60 → Accelerate

## 💻 Tech Stack
- C Programming
- GCC Compiler

## 🚀 Run
gcc acc.c -o acc
./acc

## 🔥 Future Scope
- Sensor integration (Radar/LiDAR)
- Real-time vehicle interface
- AI-based decision making
