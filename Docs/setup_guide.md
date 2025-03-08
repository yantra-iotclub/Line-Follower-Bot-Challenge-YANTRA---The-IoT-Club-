# ⚙️ Setup Guide
### 📍 Line Follower Bot Challenge | YANTRA - The IoT Club

Follow this guide to assemble and set up your **Line Follower Bot** for the challenge.

---

## 🛠️ Components Required
### **Electronics**
- **Microcontroller**: Arduino Nano
- **Sensors**: IR Sensors (2 or more)
- **Motors**: DC Motors (2) with Motor Driver (L298N)
- **Power Supply**: Battery Pack (9V or 12V)
- **Other Components**: Jumper wires, Resistors (if needed), Switches

### **Hardware & Tools**
- Chassis for mounting components
- Wheels and caster wheel for stability
- Soldering iron (optional for stronger connections)
- Screwdrivers, double-sided tape, or glue gun for fixing components

---

## 🔌 Wiring & Circuit Setup
1. **Connect the Arduino Nano** to the L298N motor driver as follows:
   - **IN1 & IN2** → Arduino Digital Pins **3 & 4** (Left Motor)
   - **IN3 & IN4** → Arduino Digital Pins **5 & 6** (Right Motor)
   - **ENA & ENB** → Arduino **PWM Pins** for speed control
   - **VCC** → 5V (from Arduino or external battery)
   - **GND** → Common ground

2. **Connect IR Sensors**:
   - VCC → **5V**
   - GND → **GND**
   - OUT → **Arduino Digital Pins 7 & 8**

3. **Power Supply**:
   - Connect a **9V or 12V battery** to the motor driver’s power input.
   - Make sure the **GND** of the battery is connected to the Arduino and Motor Driver.

🔗 **Refer to the Circuit Diagram in the `Hardware` folder for exact connections.**

---

## 💻 Software & Code Setup
1. **Install Arduino IDE** (if not already installed) from [Arduino Official Website](https://www.arduino.cc/).
2. **Download and Install Required Libraries** (if needed):
   - Open Arduino IDE → **Sketch** → **Include Library** → **Manage Libraries**
   - Search for and install:
     - `AFMotor`
     - `Servo` (if using a servo for additional controls)
3. **Upload Code to Arduino**:
   - Open `line_follower.ino` file from the `Code` folder.
   - Select **Board: Arduino Nano** and correct **COM Port** in Arduino IDE.
   - Click **Upload**.

---

## 🏁 Testing & Calibration
1. **Place the bot on a test track** with a **black line on a white surface**.
2. **Power on the bot** and check if it follows the line smoothly.
3. **If needed, adjust IR sensor placement** for better line detection.
4. **Fine-tune motor speeds** in the code for smoother movement.

---

## 🚀 You're Ready to Go!
Your Line Follower Bot is now set up and ready for action! If you face any issues, check the [Troubleshooting Guide](troubleshooting.md).

📧 Need Help? Contact us at:
📧 Email: [yantratheiotclub@gmail.com](mailto:yantratheiotclub@gmail.com)  
🌐 GitHub: [YANTRA - The IoT Club](https://github.com/yantra-iotclub)  

🚀 **Innovate, Experiment, and Build with YANTRA - The IoT Club!**

