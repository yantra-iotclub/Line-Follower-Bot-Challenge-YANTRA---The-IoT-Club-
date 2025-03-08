# 🛠️ Troubleshooting Guide
### 📍 Line Follower Bot Challenge | YANTRA - The IoT Club

This guide helps resolve common issues encountered while building and programming the **Line Follower Bot**.

---

## ⚡ Power Issues
### Problem: Bot is not turning on
🔹 **Possible Causes:**
- Battery is not connected properly or is discharged.
- Loose connections in the power circuit.
- Faulty motor driver or microcontroller.

✅ **Solution:**
- Ensure the battery is fully charged and connected correctly.
- Check power connections and resolder any loose wires.
- Replace the motor driver or Arduino Nano if necessary.

---

## 📡 Sensor Issues
### Problem: IR Sensors not detecting the line
🔹 **Possible Causes:**
- Improper sensor placement or incorrect height adjustment.
- IR sensors not calibrated correctly.
- Dust or dirt on sensors affecting readings.

✅ **Solution:**
- Adjust the height and angle of IR sensors for optimal detection.
- Use a white surface with a dark line for better contrast.
- Clean the sensors and recalibrate using the provided setup guide.

---

## 🔄 Motor & Movement Issues
### Problem: Bot moves in the wrong direction or stops
🔹 **Possible Causes:**
- Incorrect wiring of motors.
- Faulty motor driver (L298N) or low battery.
- Wrong motor speed values in the code.

✅ **Solution:**
- Cross-check motor connections and follow the wiring diagram.
- Test motors individually with direct power to verify functionality.
- Adjust motor speed in the code to ensure smooth movement.

---

## 🖥️ Code Upload Issues
### Problem: Unable to upload code to Arduino
🔹 **Possible Causes:**
- Wrong board or port selected in the Arduino IDE.
- Missing required libraries.
- USB cable issue or driver not installed.

✅ **Solution:**
- Select **Arduino Nano** and the correct COM port in Arduino IDE.
- Install missing libraries (`AFMotor`, `Servo`, etc.) from the Library Manager.
- Use a different USB cable or reinstall Arduino drivers.

---

## 📶 Random Bot Behavior
### Problem: Bot behaves erratically while following the line
🔹 **Possible Causes:**
- Noise in sensor readings due to improper wiring.
- Sudden changes in surface color affecting IR sensor detection.
- Power fluctuations affecting motor speed.

✅ **Solution:**
- Use shielded cables for sensor connections to reduce interference.
- Ensure a uniform path surface for the bot to follow.
- Use a stable power supply and avoid weak batteries.

---

## 📫 Need More Help?
If you're still facing issues, reach out to us!
📧 Email: [yantratheiotclub@gmail.com](mailto:yantratheiotclub@gmail.com)  
🌐 GitHub: [YANTRA - The IoT Club](https://github.com/yantra-iotclub)  

🚀 **Keep Innovating with YANTRA - The IoT Club!**

