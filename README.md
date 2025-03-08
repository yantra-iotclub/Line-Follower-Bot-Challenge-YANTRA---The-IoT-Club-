# 🔩 Components Guide for Line Follower Bot

This document provides detailed information about the components used in the **Line Follower Bot Challenge** organized by **YANTRA - The IoT Club**.

---

## 📌 Components List

### 1️⃣ **Microcontroller: Arduino Nano**
- A compact, versatile microcontroller board based on the **ATmega328P**.
- Features:
  - 14 digital I/O pins (6 PWM outputs)
  - 8 analog inputs
  - Clock speed: 16 MHz
  - USB Type-B interface for programming
- **Why Arduino Nano?**
  - Small size makes it ideal for compact robots.
  - Easy programming via the **Arduino IDE**.

---

### 2️⃣ **Sensors: IR Sensors**
- **Purpose:** Detect the black line on a contrasting surface.
- **Working Principle:**
  - The **IR transmitter** emits infrared light.
  - The **IR receiver** detects reflected light from the surface.
  - A **low reflection (black surface)** results in a low signal, while a **high reflection (white surface)** results in a high signal.
- **Usage in the Bot:**
  - Place **two or more IR sensors** to detect left, right, or center deviations.
  - Adjust sensor sensitivity to optimize line detection.

---

### 3️⃣ **Motors: DC Motors with L298N Motor Driver**
- **DC Motors** provide movement to the bot.
- **L298N Motor Driver:**
  - Controls motor speed and direction using **PWM signals**.
  - Can handle **two DC motors simultaneously**.
  - Supports a voltage range of **5V–35V**.
- **Why L298N?**
  - Enables independent control of **left and right motors**.
  - Protects the Arduino from high power surges.

---

### 4️⃣ **Power Supply: Battery Packs**
- **Recommended:** 7.4V - 12V **Li-ion / LiPo Battery**.
- **Why Li-ion/LiPo?**
  - Provides high current for motor operation.
  - Lightweight and rechargeable.
- **Precautions:**
  - Use a **voltage regulator** to avoid overloading components.
  - Ensure proper polarity when connecting to the motor driver.

---

### 5️⃣ **Programming Language: C++**
- The bot's logic is programmed using **C++ in Arduino IDE**.
- Key programming concepts:
  - **Reading IR sensor values** using `digitalRead()`.
  - **Controlling motor speed** using `analogWrite(PWM_PIN, SPEED_VALUE)`.
  - **Implementing logic** to adjust the bot’s movement based on sensor input.
- **Example Code Snippet:**
```cpp
#define LEFT_SENSOR 2
#define RIGHT_SENSOR 3
#define LEFT_MOTOR 5
#define RIGHT_MOTOR 6

void setup() {
  pinMode(LEFT_SENSOR, INPUT);
  pinMode(RIGHT_SENSOR, INPUT);
  pinMode(LEFT_MOTOR, OUTPUT);
  pinMode(RIGHT_MOTOR, OUTPUT);
}

void loop() {
  int left = digitalRead(LEFT_SENSOR);
  int right = digitalRead(RIGHT_SENSOR);
  
  if (left == LOW && right == HIGH) {
    analogWrite(LEFT_MOTOR, 100);
    analogWrite(RIGHT_MOTOR, 200);
  } else if (left == HIGH && right == LOW) {
    analogWrite(LEFT_MOTOR, 200);
    analogWrite(RIGHT_MOTOR, 100);
  } else {
    analogWrite(LEFT_MOTOR, 150);
    analogWrite(RIGHT_MOTOR, 150);
  }
}
```

---

## 📢 Additional Notes
- Ensure **proper wiring** between components to avoid short circuits.
- **Calibrate IR sensors** before running the bot.
- Use **heat sinks** on the **L298N driver** to prevent overheating.
- **Optimize C++ code** for smooth bot movement.

---

## 📫 Contact Us
📍 **Organized by:** YANTRA - The IoT Club, Reva University  
📧 Email: [yantratheiotclub@gmail.com](mailto:yantratheiotclub@gmail.com)  
🌐 **GitHub**: [github.com/yantra-iotclub](https://github.com/yantra-iotclub)  

---

✨ **Ignite your imagination and shape the future of IoT with YANTRA!** ✨
