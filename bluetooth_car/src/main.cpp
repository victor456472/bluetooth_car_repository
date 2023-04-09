#include <Arduino.h>
int ena=8;
int enb=7;
int in1=3;
int in2=6;
int in3=9;
int in4=5;

void setup() {
  pinMode (ena, OUTPUT);
  pinMode (enb, OUTPUT);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
}

void adelante() {
  analogWrite(in1,255);
  analogWrite(in2,0);
  analogWrite(in3,255);
  analogWrite(in4,0);
}

void loop() {
  adelante();
}