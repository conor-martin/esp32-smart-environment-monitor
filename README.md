# ESP32 Smart Environment Monitor

An ESP32-based connected embedded system that monitors motion, light, and temperature using commonly available sensors and displays live readings on a 16x2 LCD. The system also publishes sensor data over Wi-Fi using MQTT, making it suitable as a smart IoT node.

---

## 🛠 Features

- Motion detection using PIR sensor
- Light sensing with LDR
- Temperature measurement using a thermistor
- 16x2 LCD display (parallel interface)
- Wi-Fi connection using ESP32
- MQTT protocol for publishing sensor data to a broker
- Serial logging for debugging and monitoring
- Visual alerts via LEDs
- Modular embedded C structure (firmware)

---

## 🧰 Hardware Used

| Component     | Description                              |
|--------------|------------------------------------------|
| ESP32 Dev Board | Wi-Fi-enabled microcontroller          |
| PIR Sensor    | Motion detection                         |
| LDR + Resistor| Light sensing (ADC)                      |
| Thermistor + Resistor | Temperature sensing (ADC)       |
| 16x2 LCD      | Parallel LCD with HD44780 controller     |
| LED + Resistors | Visual status indicators              |
| Breadboard, jumper wires, USB cable | For prototyping   |

---

## 🧪 Sensor Data Format

Example MQTT message:

```json
{
  "motion": true,
  "light": 422,
  "temperature": 23.4
}
```

---

## 📦 Project Structure

```text
esp32-smart-environment-monitor/
├── firmware/
│   ├── main.c
│   ├── sensor.c
│   ├── lcd_display.c
│   ├── wifi_mqtt.c
│   └── utils.c
├── include/
│   ├── sensor.h
│   ├── lcd_display.h
│   ├── wifi_mqtt.h
│   └── utils.h
├── docs/
│   ├── wiring_diagram.png
│   ├── setup_photo.jpg
│   └── sample_output.txt
├── README.md
└── platformio.ini
```

---

## 🚀 Getting Started

Clone the repository:

```bash
git clone https://github.com/your-username/esp32-smart-environment-monitor.git
```

1. Open in [PlatformIO](https://platformio.org/) or your preferred embedded IDE.
1. Wire up the components as shown in `docs/wiring_diagram.png`
1. Build and flash the firmware to your ESP32 board
1. Open serial monitor and verify sensor readings and MQTT messages

---

## 📡 MQTT Setup

- You can use a free public broker like `broker.hivemq.com`
- Or run a local Mosquitto broker
- Update `wifi_mqtt.c` with your SSID, password, and MQTT topic/broker

---

## ✍️ Author

**Conor Martin**  
[LinkedIn](https://linkedin.com/in/conor-martin) | [GitHub](https://github.com/conor-martin)

---

## 📌 Notes

- LCD is used in 4-bit parallel mode (not I2C)
- ADC values are scaled and filtered in firmware
- Modular codebase supports easy expansion (e.g., buttons, other sensors)
