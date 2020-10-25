#include <Arduino.h>


#define LED1 17
#define LED2 4
#define LED3 16
#define LED4 23
#define POT_PIN 2

int adcValue = 0;
float voltage = 0;
float temp = 0;

void setup() {
 pinMode(LED1, OUTPUT); //d4
 pinMode(LED2, OUTPUT); //rx2
 pinMode(LED3, OUTPUT);
 pinMode(LED4, OUTPUT); //d5
 Serial.begin(9600);
 
}

void loop() {

  

  adcValue = analogRead(POT_PIN);
  String printData = "Nilai ADC yang terbaca : " + String(adcValue);
  Serial.println(printData);
  voltage = ((float)adcValue/4095)*3.3;
  printData = "Nilai tegangan yang terbaca : " + String(voltage) +" V";
  Serial.println(printData);
  temp= (voltage/3.3) * 100;
  printData = "Nilai suhu yang terbaca : " + String(temp) +" C";
  Serial.println(printData);
  delay(1000);
  
    if(temp<15){
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW); 
      delay(1000);
  
    }
    else if(temp>=15 && temp<20){
      digitalWrite(LED2,HIGH);
      digitalWrite(LED1,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
      delay(1000);

    }  
    else if(temp>=20 && temp<30){
      digitalWrite(LED3,HIGH);
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED4,LOW);
      delay(1000);
    }
    else if(temp>=30){
      digitalWrite(LED4,HIGH);
      digitalWrite(LED1,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED2,LOW);
      delay(1000);
    } 
    
}
