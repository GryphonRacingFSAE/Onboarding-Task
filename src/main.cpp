#include <Arduino.h>
int led=10;
int timeunit=500;

void setup() {
  pinMode(led,OUTPUT);
}
void loop() {
  M();
  I();
  S();
  S();
  I();
  S();
  S();
  I();
  P();
  I();
}


void M(){
  digitalWrite(led,HIGH);
  delay(3*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit);
   digitalWrite(led,HIGH);
  delay(3*timeunit);
  digitalWrite(led,LOW);
  delay(3*timeunit);

}

void I(){
   digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit);
   digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(3*timeunit);

}

void S(){
   digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit);
   digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit); 
  digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(3*timeunit);

}
void P(){
    digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit);
   digitalWrite(led,HIGH);
  delay(3*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit);
  digitalWrite(led,HIGH);
  delay(3*timeunit);
  digitalWrite(led,LOW);
  delay(1*timeunit);
  digitalWrite(led,HIGH);
  delay(1*timeunit);
  digitalWrite(led,LOW);
  delay(3*timeunit);
}
