# 💧 **Real-Time Groundwater Resource Evaluation using DWLR**

### **Team: Groundbreakers**

---

## 📑 **Index**

1. [Project Overview](#project-overview)
2. [Team Details](#team-details)
3. [Mentorship](#mentorship)
4. [Problem Statement](#problem-statement)
5. [Proposed Solution](#proposed-solution)
6. [System Architecture](#system-architecture)
7. [Hardware Design](#hardware-design)
8. [Software Flow](#software-flow)
9. [Data Pipeline](#data-pipeline)
10. [Machine Learning Component](#machine-learning-component)
11. [Features](#features)
12. [Feasibility & Viability](#feasibility--viability)
13. [Benefits & Impact](#benefits--impact)
14. [Tech Stack](#tech-stack)
15. [How to Run](#how-to-run)
16. [Folder Structure](#folder-structure)
17. [References](#references)

---

## 🌍 **Project Overview**

This project provides a **real-time groundwater monitoring system** using a custom **IoT-based DWLR (Digital Water Level Recorder)** setup.

A **pipe inserted underground** is filled with **glycerin**, trapping air at the top. As the groundwater level rises, it pushes the glycerin upward, **compressing the air column**.
This pressure change is measured using the **HX710B/HX70AB air pressure sensor** and processed through an **ESP32 microcontroller**, which sends live data to **Firebase** for visualization on a **web dashboard**.

Additionally, we integrate **open-source historical DWLR data** and train **LSTM models** to forecast future groundwater levels.




---

## 👥 **Team Details**

### **Team Name:** Groundbreakers

### **Team Leader:** Naysha Garg

### **Team Members:**

* Raman Sharma
* Shubham Chaudhary



---

## 🎓 **Mentorship**

**Mentor:** *Praneya Arora*

---

## ⚠️ **Problem Statement**

Groundwater depletion has become a severe national challenge due to:

* **Over-extraction** and inefficient monitoring
* **Climate change**, irregular rainfall patterns
* **Lack of standardized groundwater surveillance systems**

These issues lead to **water scarcity**, reduced **agricultural yield**, and **poor resource planning**.




---

## 💡 **Proposed Solution**

Our solution aims to:

### ✔ Build a **centralized groundwater monitoring dashboard**

### ✔ Enable **real-time water level tracking** using IoT

### ✔ Provide **historical comparisons & anomaly alerts**

### ✔ Integrate LSTM models to **predict future groundwater trends**

### ✔ Support decision-making for **farmers, policymakers, and water authorities**


---

## 🧠 **System Architecture**

### **1. Hardware Monitoring Unit**

* Underground glycerin-filled pipe with sealed air chamber
* HX710AB/HX70B1 pressure sensor
* ESP32 microcontroller
* Data transmission to Firebase via WiFi

### **2. Cloud Storage**

* Firebase Realtime Database
* Stores timestamped pressure → water level data

### **3. Web Dashboard**

* Real-time level graphs
* Alerts for sudden drops/rises
* Historical data visualization

### **4. Machine Learning**

* LSTM model trained using DWLR datasets
* Predictive curves showing future groundwater trends



---

## 🔧 **Hardware Design**

### Components Used

* **ESP32** – IoT microcontroller
* **HX710AB / HX70B1** – High-resolution pressure sensor
* **Pipe filled with glycerin**
* **Jumper wires**
* **Power supply (USB)**



### Flow

1. Groundwater pushes glycerin upward
2. Air pressure increases in the sealed section
3. HX710AB senses pressure
4. ESP32 converts & uploads values
5. Firebase dashboard shows real-time groundwater level

---

## 💻 **Software Flow**

### Arduino/ESP32 Firmware

* Reads analog pressure data
* Converts pressure → water depth
* Sends JSON packets to Firebase
* Code: `ground_water_resource_evaluation.ino`


### Backend

* Firebase Realtime DB stores live values

### Frontend

* Website fetches Firebase data using REST
* Displays graphs, alerts, and groundwater maps

---

## 📊 **Data Pipeline**

1. **Sensor Data → ESP32 → Firebase** (real-time)
2. **DWLR datasets** from Government open portals (Data.gov.in, IndiaWRIS)
3. Data cleaning & preprocessing
4. **LSTM model training** using historical time-series data
5. Dashboard shows **future groundwater predictions**


---

## 🤖 **Machine Learning Component**

* Uses **LSTM neural networks** for time-series forecasting
* Input: historical DWLR data
* Output: predicted groundwater depth for:

  * Next 7 days
  * Next 30 days
  * Seasonal predictions (optional)


---

## ⭐ **Features**

* 🌐 Real-time groundwater monitoring
* 📡 IoT-based DWLR measurement
* 📊 Proprietary pressure → depth model
* 🔥 Alerts for sudden drops & anomalies
* 📈 ML-powered prediction (LSTM)
* 🗺️ GIS mapping using Google Maps API
* 📱 Mobile-friendly dashboard
* 🌾 Helps farmers plan irrigation
* ☁️ Cloud-based & scalable

---

## 🧪 **Feasibility & Viability**

### ✔ Data Availability

Open government datasets (Data.gov.in, IndiaWRIS)



### ✔ Cost-Effective

Minimal hardware + free Firebase tier



### ✔ Scalable

Cloud-based expansion without downtime



### ✔ Sustainability

Prevents over-extraction and assists conservation



---

## 🌱 **Benefits & Impact**

### **Social**

* Improved community access to groundwater info
* Supports rural & agricultural decision-making

### **Technological**

* Early warning systems
* Real-time monitoring + forecasting

### **Environmental**

* Mitigates groundwater depletion
* Supports climate adaptation planning

### **Economic**

* Reduces irrigation cost
* Optimises water use



---

## 🛠 **Tech Stack**

* **Hardware:** ESP32, HX710AB/HX70B1
* **Firmware:** Arduino IDE
* **Backend:** Firebase Realtime Database
* **Frontend:** Web App
* **ML:** Python, TensorFlow / TensorFlow Lite
* **Mapping:** Google Maps API

---

## ▶️ **How to Run**

### **1. Flash the ESP32**

Upload the code in:

```
ground_water_resource_evaluation.ino
```

### **2. Configure Firebase**

* Create a Firebase project
* Enable Realtime Database
* Add ESP32 API keys in the `.ino` file

### **3. Start the Web Dashboard**

Open the `/website` folder (if included)
Run:

```
index.html
```

### **4. Run ML Notebook**

* Install TensorFlow
* Train LSTM using the notebook in `/ml-model/`

---

## 📁 **Folder Structure (Recommended)**

```
/groundbreakers-dwlr-project
│── hardware/
│   └── circuit-diagrams/
│
│── firmware/
│   └── ground_water_resource_evaluation.ino
│
│── ml-model/
│   └── lstm_forecasting.ipynb
│
│── web-dashboard/
│   └── index.html
│   └── firebase.js
│
│── docs/
│   └── SIH.pdf
│   └── Avinya.pdf
│   └── App Prototype.docx
│
└── README.md
```

---

## 📚 **References**

Included from SIH & Avinya documents:

* DWLR working principle
* Groundwater monitoring datasets
* NASA groundwater observations
* IndiaWRIS official portal

