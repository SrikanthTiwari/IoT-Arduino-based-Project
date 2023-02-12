#include<WiFi.h>
int ir=13;
int state;
int count=0;
void setup(){
   pinMode(ir,INPUT);
   Serial.begin(9600);
   
  }
void loop(){
   state=digitalRead(ir);
   if (state==0){
     count=count+1;
     Serial.print("Number of members in room are: ");
     Serial.print(count);
     Serial.println("");
     delay(1000);
    }
}
