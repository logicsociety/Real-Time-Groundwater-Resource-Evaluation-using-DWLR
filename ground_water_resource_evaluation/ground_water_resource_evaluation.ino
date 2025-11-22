Code

#include <WiFi.h>
#include <HTTPClient.h>
#include "HX710AB.h"

// Wi-Fi credentials
#define WIFI_SSID     "Raman"
#define WIFI_PASSWORD "123456708"

// (Optional) If you want to send to server later, define it
#define SERVER_URL "http://192.168.1.100:5000/data"

uint8_t dataPin = 26;
uint8_t clockPin = 27;

HX710AB sensor(dataPin, clockPin);

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Starting up...");

  // Connect to WiFi
  Serial.print("Connecting to WiFi: ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nWiFi connected!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  // Initialize sensor
  sensor.begin();
  // You can set gain or calibration if library supports
}

void loop() {
  // Optionally check WiFi
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi lost. Reconnecting...");
    WiFi.reconnect();
    delay(1000);
  }

  if (sensor.isReady()) {
    long raw = sensor.read();        // raw ADC value
    float voltage = sensor.voltage(); // if library gives it
    float unit = sensor.scale();     // maybe scaled units

    Serial.print("Raw: ");
    Serial.print(raw);
    Serial.print(" | Voltage: ");
    Serial.print(voltage, 5);
    Serial.print(" V | Scaled: ");
    Serial.println(unit, 3);
  } else {
    Serial.println("Sensor not ready");
  }

  delay(1000);
}