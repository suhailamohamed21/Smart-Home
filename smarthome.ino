#include<SoftwareSerial.h>
#define Relay_1 2
#define Relay_2 3
#define Rx 4
#define TX 5
SoftwareSerial btserial(4,5);

void setup() {
  Serial.begin(9600);
  btserial.begin(9600);
  pinMode(Relay_1,OUTPUT);
  pinMode(Relay_2,OUTPUT);

}

void loop() {
  if(btserial.available()>0){
    char order = btserial.read();

    if(order == '1'){
      digitalWrite(Relay_1, !digitalRead(Relay_1));
   } else if(order == '2'){
      digitalWrite(Relay_2, !digitalRead(Relay_2));
   }
  
  }

  delay(100);
}
