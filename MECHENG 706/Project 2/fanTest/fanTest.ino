#include <Servo.h>

int fanPower = 10; // fan mosfet control on pin 10

void setup() {
  // put your setup code here, to run once:
  pinMode(fanPower, OUTPUT);
  digitalWrite(fanPower, LOW);
  delay(10000);
  digitalWrite(fanPower, HIGH);
  delay(2000);
  digitalWrite(fanPower, LOW);
  delay(12000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
}
