#include <Arduino.h>

#define LED1 16
#define LED2 4
#define LED3 17
#define LED2 23


void setup() {
 pinMode(BUILTIN_LED, OUTPUT);
 pinMode(LED1,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(17,OUTPUT);
 pinMode(23,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(BUILTIN_LED, HIGH);
  delay(2000);
  digitalWrite(BUILTIN_LED, LOW);
  delay(2000);
  digitalWrite(LED1, HIGH);
  delay(2000);
  digitalWrite(LED1, LOW);
  delay(2000);
  digitalWrite(17, HIGH);
  delay(2000);
  digitalWrite(17, LOW);
  delay(2000);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(4, LOW);
  delay(2000);
  digitalWrite(23, HIGH);
  delay(2000);
  digitalWrite(23, LOW);
  delay(2000);// put your main code here, to run repeatedly:
}