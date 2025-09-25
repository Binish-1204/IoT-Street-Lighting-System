# IoT-Street-Lighting-System
A motion-activated street lighting system for urban sustainability. Built with Arduino, this project aims to reduce energy consumption by ensuring lights are only on when needed.

# IoT-Enabled Street Lighting System for Urban Sustainability 

* Binish Moosa 

---

## About The Project

This project is a motion-activated LED system designed for energy-efficient street lighting. The system utilizes an Arduino microcontroller, an IR sensor to detect motion, and an LDR sensor to sense ambient light levels. The streetlights activate only when motion is detected and it is dark, significantly reducing energy consumption compared to traditional, manually operated systems.

This research demonstrates a practical implementation of IoT principles to enhance functionality and sustainability in everyday urban infrastructure.

### Key Features
* **Automatic Operation:** Lights switch on/off automatically based on real-time conditions.
* **Energy Efficiency:** Reduces energy wastage by operating only when needed.
* **Motion Detection:** Uses an IR sensor to detect passing vehicles or pedestrians.
* **Ambient Light Sensing:** Uses an LDR sensor to ensure lights do not turn on during the day.
* **Reduced Costs & Manpower:** Lowers electricity bills and eliminates the need for manual switching.

## Technologies Used

The core components of this project include:
* **Microcontroller:** Arduino UNO 
* **Sensors:**
    * Infrared (IR) Sensor 
    * Light-Dependent Resistor (LDR) Sensor 
* **Output:** LED (Light Emitting Diode) 
* **Prototyping:** Breadboard and Jumper Wires 

## Project Setup & Results

Here is a photo of the final working prototype. The system demonstrates the ability to light up LEDs sequentially as a toy car (simulating a vehicle) moves past the IR sensors in low-light conditions.

![Output Image 1](output-1.png)
_Figure 1: The complete circuit setup with the model roadway._

### How to Use

1.  **Hardware:** Assemble the circuit as shown in the images above.
2.  **Software:**
    * Install the [Arduino IDE](https://www.arduino.cc/en/software).
    * Connect the Arduino UNO to your computer.
    * Open the `.ino` file located in the `/code` directory of this repository.
    * Upload the sketch to the Arduino board.

## Future Scope

Potential future enhancements for this project include:
* **Smart Grid Integration:** Enable communication between streetlights and the power grid for dynamic energy management.
* **AI and Sensor Fusion:** Combine data from multiple sensors (cameras, environmental sensors) to make more intelligent lighting decisions.
* **Community Engagement:** Add features for public feedback and interactive lighting zones.
* **Scalability:** Design a modular architecture for easy deployment across entire cities.
