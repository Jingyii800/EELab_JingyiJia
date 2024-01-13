#include <Arduino.h>

const int analogPin = 32; // ESP32's analog pin

void setup() {
  Serial.begin(115200); 
  analogReadResolution(12); // Set the resolution to 12 bits (0-4095)
}

void loop() {

  int adcValue = analogRead(analogPin); // Read the analog value
  float voltage = (adcValue / 4095.0) * 3.3; // Convert ADC value to voltage

  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print("\tVoltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000); // Wait for a second before reading again
}