# IoT-Street-Lighting-System
A motion-activated street lighting system for urban sustainability. Built with Arduino, this project aims to reduce energy consumption by ensuring lights are only on when needed.

# [cite_start]IoT-Enabled Street Lighting System for Urban Sustainability [cite: 371]

* [cite_start]Binish Moosa 

---

## About The Project

[cite_start]This project is a motion-activated LED system designed for energy-efficient street lighting[cite: 408]. [cite_start]The system utilizes an Arduino microcontroller, an IR sensor to detect motion, and an LDR sensor to sense ambient light levels[cite: 408, 409]. [cite_start]The streetlights activate only when motion is detected and it is dark, significantly reducing energy consumption compared to traditional, manually operated systems[cite: 409, 649].

[cite_start]This research demonstrates a practical implementation of IoT principles to enhance functionality and sustainability in everyday urban infrastructure[cite: 411].

### Key Features
* [cite_start]**Automatic Operation:** Lights switch on/off automatically based on real-time conditions[cite: 657].
* [cite_start]**Energy Efficiency:** Reduces energy wastage by operating only when needed[cite: 413, 662].
* [cite_start]**Motion Detection:** Uses an IR sensor to detect passing vehicles or pedestrians[cite: 409].
* [cite_start]**Ambient Light Sensing:** Uses an LDR sensor to ensure lights do not turn on during the day[cite: 409].
* [cite_start]**Reduced Costs & Manpower:** Lowers electricity bills and eliminates the need for manual switching[cite: 654, 658, 663].

## Technologies Used

The core components of this project include:
* [cite_start]**Microcontroller:** Arduino UNO [cite: 494]
* **Sensors:**
    * [cite_start]Infrared (IR) Sensor [cite: 503]
    * [cite_start]Light-Dependent Resistor (LDR) Sensor [cite: 508]
* [cite_start]**Output:** LED (Light Emitting Diode) [cite: 517]
* [cite_start]**Prototyping:** Breadboard and Jumper Wires [cite: 523]

## Project Setup & Results

Here is a photo of the final working prototype. The system demonstrates the ability to light up LEDs sequentially as a toy car (simulating a vehicle) moves past the IR sensors in low-light conditions.

![Output Image 1](output-1.png)
[cite_start]_Figure 1: The complete circuit setup with the model roadway[cite: 565]._

### How to Use

1.  **Hardware:** Assemble the circuit as shown in the images above.
2.  **Software:**
    * Install the [Arduino IDE](https://www.arduino.cc/en/software).
    * Connect the Arduino UNO to your computer.
    * Open the `.ino` file located in the `/code` directory of this repository.
    * Upload the sketch to the Arduino board.

## Future Scope

Potential future enhancements for this project include:
* [cite_start]**Smart Grid Integration:** Enable communication between streetlights and the power grid for dynamic energy management[cite: 551].
* [cite_start]**AI and Sensor Fusion:** Combine data from multiple sensors (cameras, environmental sensors) to make more intelligent lighting decisions[cite: 553].
* [cite_start]**Community Engagement:** Add features for public feedback and interactive lighting zones[cite: 557].
* [cite_start]**Scalability:** Design a modular architecture for easy deployment across entire cities[cite: 559].
