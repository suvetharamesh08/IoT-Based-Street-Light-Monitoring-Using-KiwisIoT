#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "TOPIC ID";

// Create KiwisIoT object
KiwisIoT kiwisiot(ssid, pass, topic);

// Pin configuration
#define LDR_PIN A0
#define LED_PIN D1

// LDR threshold
int threshold = 500;

int ldrValue;
int streetLightStatus;
int environmentStatus;

void setup() {

  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  Serial.println();
  Serial.println("IoT Automatic Street Light System");

  kiwisiot.begin();

  Serial.println("KiwisIoT Initialized");
}

void loop() {

  // Maintain IoT connection
  kiwisiot.run();

  // Read LDR sensor
  ldrValue = analogRead(LDR_PIN);

  // Check environmental condition
  if (ldrValue < threshold) {

    // DARK condition
    digitalWrite(LED_PIN, HIGH);

    streetLightStatus = 1;
    environmentStatus = 0;

    Serial.println("Environment: DARK");
    Serial.println("Street Light: ON");

  }

  else {

    // LIGHT condition
    digitalWrite(LED_PIN, LOW);

    streetLightStatus = 0;
    environmentStatus = 1;

    Serial.println("Environment: LIGHT");
    Serial.println("Street Light: OFF");

  }

  // Send LDR value to Widget 1
  kiwisiot.send("0", ldrValue);

  // Send street light status to Widget 2
  kiwisiot.send("1", streetLightStatus);

  // Send environment condition to Widget 3
  kiwisiot.send("2", environmentStatus);

  // Display sensor value
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  Serial.println("----------------------");

  delay(3000);
}
