#include <Wire.h>
#include <VL53L0X.h>

const int buttonPin = 2;
const int motorPin = 3;
const int ledPin =  13;

VL53L0X sensor;

const int maxWaterRange = 5;
bool isRunning = false;

const int rangeMax = 10;
int ranges[10];
int rangeIndex = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(motorPin, LOW);

  sensor.init();
  sensor.setTimeout(500);
  sensor.startContinuous();
}

int getRange() {
   int sum = 0;
   const int total = 20;
   for (int i = 0; i < total; i++) {
     sum = sum + sensor.readRangeContinuousMillimeters();
     delay(10);
   }
   return sum / total;
}

void loop() {
  int range = getRange();
  Serial.println(range);

  if(!digitalRead(buttonPin)) {
    // push button
    digitalWrite(ledPin, HIGH);
    //digitalWrite(motorPin, HIGH);

    if (!isRunning && range > maxWaterRange) {
      isRunning = true;
      digitalWrite(motorPin, HIGH);
    }
  } else {
    digitalWrite(ledPin, LOW);
    //digitalWrite(motorPin, LOW);
  }

  if (isRunning && range <= maxWaterRange) {
     isRunning = false;
     digitalWrite(motorPin, LOW);
  }
}
