#include <Arduino.h>

const int analogPin = A1;

void setup() {
    Serial.begin(9600);
}

void loop() {
// Read the analog value from pin A0
int analogValue = analogRead(analogPin);

// Convert the analog value to voltage (assuming 3.3V reference)
float voltage = analogValue * (3.3/ 4095.0);

// Display the voltage value
    Serial.print("Analog Value: ");
    Serial.print(analogValue);
    Serial.print(", Voltage: ");
    Serial.println(voltage);

    delay(1000);
}