#include <Arduino.h>

HardwareSerial MySerial(PA8,PA9);

void setup() {
  pinMode(PA1, OUTPUT);
  digitalWrite(PA1,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PA1,LOW);
  delay(500);
  digitalWrite(PA1,HIGH);
  delay(500);
  MySerial.println("loop");
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}