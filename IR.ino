int ir=2;
int led=13;
int buzzer=12;
int state;

void setup(){
  pinMode(ir,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  }
void loop(){
  state=digitalRead(ir);
  if (state==1){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    }
   else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    }
  }
  
