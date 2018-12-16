#include <Wire.h>
#include <VL53L0X.h>

const int buttonPin = 2;
const int motorPin = 3;
const int ledPin =  13;

VL53L0X sensor;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  sensor.init();
  sensor.setTimeout(500);
  sensor.startContinuous();
}

void loop() {
  if(!digitalRead(buttonPin)) {
    // push button
    digitalWrite(ledPin, HIGH);
    digitalWrite(motorPin, HIGH);
    //analogWrite(motorPin, 200);   
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(motorPin, LOW);
    //analogWrite(motorPin, 0);
  }

  Serial.print(sensor.readRangeContinuousMillimeters());
  if (sensor.timeoutOccurred()) { Serial.print(" TIMEOUT"); }

  Serial.println();
}
