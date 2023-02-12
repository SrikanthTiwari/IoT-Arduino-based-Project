int led=13;
int push=12;
int state;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(push,INPUT);
  

}

void loop() {
  state=digitalRead(push);
  if (state==1){
     digitalWrite(led,HIGH);
     
    }
   else {
     digitalWrite(led,LOW);
    }

}
