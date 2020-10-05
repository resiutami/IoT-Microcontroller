#include <Arduino.h>


#define LED1 4
#define LED2 16
#define LED3 17

void setup() {
 pinMode(BUILTIN_LED, OUTPUT);
 pinMode(LED1, OUTPUT); //d4
 pinMode(LED2, OUTPUT); //rx2
 pinMode(LED3, OUTPUT); //tx2
 Serial.begin(9600);
 delay(2000);
 
}

void loop() {
  if(Serial.available()) {
    char data = Serial.read();

    Serial.println();
    Serial.print("karakter yang dikirim: ");
    Serial.print(data);

    if(data == '1'){
      digitalWrite(BUILTIN_LED, HIGH);
      delay(2000);
      digitalWrite(BUILTIN_LED, LOW);
      //delay(2000);
    }

    else if(data == '2'){
      digitalWrite(LED1, HIGH);
      delay(2000);
      digitalWrite(LED1, LOW);

    }
    else if(data == '3'){
      digitalWrite(LED2, HIGH);
      delay(2000);
      digitalWrite(LED2, LOW);
    }

    else if(data == '4'){
      digitalWrite(LED3, HIGH);
      delay(2000);
      digitalWrite(LED3, LOW);
    }
  }
}
