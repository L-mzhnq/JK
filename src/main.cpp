#include <Arduino.h>

HardwareSerial MySerial(PA10,PA9);

static int a = 0;

void setup() {
  MySerial.begin(115200);
  MySerial.println("setup");
  MySerial.setTimeout(2);
  pinMode(PA1, OUTPUT);
  pinMode(PC13, OUTPUT);
  digitalWrite(PA1,HIGH);
  digitalWrite(PC13,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PA1,LOW);
  delay(500);
  digitalWrite(PA1,HIGH);
  delay(500);
  digitalWrite(PC13,LOW);
  delay(500);
  digitalWrite(PC13,HIGH);
  delay(500);
  MySerial.print("loop ");
  MySerial.println(a++);
}
