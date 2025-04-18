# Huggables

**Huggables** is an interactive prototype designed to bridge the emotional gap in long-distance relationships by simulating the comforting sensation of a human embrace. It consists of interconnected body pillows that mimic a human hug by detecting one partner’s heartbeat and simulating corresponding sensations on the other pillow vice-versa.

---

## Table of Contents

- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Wiring & Pinouts](#wiring--pinouts)
- [Software Dependencies](#software-dependencies)
- [Installation & Deployment](#installation--deployment)
- [Configuration](#configuration)
- [Usage](#usage)
- [Troubleshooting](#troubleshooting)
- [License](#license)
- [Author & Acknowledgments](#author--acknowledgments)

---

## Features

- **Bidirectional heartbeat synchronization**: When one pillow’s pulse sensor detects a heartbeat, the partner’s pillow actuates a rhythmic heartbeat servo.
- **Gentle breathing simulation**: A continuous servo running a 3D-printed linear actuator simulates breathing in response to heartbeat detection.
- **Temperature simulation**: A heating pad provides soothing warmth.
- **Motion timeout**: Both servos snap back to neutral when no heartbeat is detected for a configurable interval.
- **LED feedback**: Onboard LED blinks on each detected heartbeat (optional).
- **Modular design**: Easily adjust thresholds and timings in one sketch.

## Hardware Requirements

- Arduino-compatible board (e.g., Arduino Uno, Mega)
- Pulse Sensor attached to analog pin (A0)
- 2 × hobby servos: mini servo for heartbeat (D3) and continuous servo for breathing (D9)
- 1 × 5 V heating pad
- Optional LED connected to pin 13 (use onboard LED if available)
- External 5 V power supply for servos
- Jumper wires and breadboard

## Wiring & Pinouts

- **Pulse Sensor**  
  - Signal → A0  
  - VCC → 5 V  
  - GND → GND  

- **Heartbeat Servo**  
  - Signal → D3  
  - VCC → 5 V (external supply)  
  - GND → common GND  

- **Breathing Servo**  
  - Signal → D9  
  - VCC → 5 V (external supply)  
  - GND → common GND  

- **Heating Pad**  
  - Anode → 5 V  
  - Cathode → GND  

- **LED (optional)**  
  - Anode → D13  
  - Cathode → GND  

## Software Dependencies

- Arduino IDE 1.8+  
- **PulseSensorPlayground** library  
- **Servo** library  

## Installation & Deployment

1. Clone or download this repository.  
2. Open `Huggables.ino` in the Arduino IDE.  
3. Install required libraries (**PulseSensorPlayground**, **Servo**) via Library Manager.  
4. Select your board and COM port.  
5. Upload the sketch to your Arduino.

## Configuration

- **PULSE_PIN**: Change if your sensor uses a different analog input.  
- **pulseSensor.setThreshold(…)**: Adjust threshold for beat detection.  
- **MIN_INTERVAL**, **IDLE_TIMEOUT**, **BREATH_PHASE_MS**: Tweak timing constants for refractory, idle timeout, and breathing cycle.

## Usage

1. Power on your Arduino and peripherals.  
2. Place the pulse sensor on your fingertip and secure it.  
3. Observe the heartbeat servo contracting and relaxing with each beat.  
4. Maintain a continuous pulse to engage the breathing servo.  
5. Remove your finger: both servos will return to neutral after the idle timeout.

## Troubleshooting

- **No LED blink or servo movement**: Check wiring and Serial Monitor for errors.  
- **False triggers**: Increase threshold or add smoothing to sensor readings.  
- **Servo jitter**: Ensure a stable external 5 V supply and common ground.

## License

Released under the MIT License. See [LICENSE](LICENSE) for details.

## Author & Acknowledgments

**Jawad Farooq Naik** is a multidisciplinary artist, designer, entrepreneur, and aspiring educator. He holds an MFA in Design from the Dynamic Media Institute at Massachusetts College of Art and Design, and a BFA in Visual Communication Design from the National College of Arts, Lahore, Pakistan.

Inspired by research in embodied interaction, haptic communication, and tangible computing.
