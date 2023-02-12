// C++ code
//
int red=7;
int green=6;
int blue=5;
int led=13;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{ 
  digitalWrite(red, HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue, LOW);
  delay(1000);
   
  digitalWrite(red, LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue, LOW);
  delay(1000);
   
  digitalWrite(red, LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue, HIGH);
  delay(1000);

  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  delay(2000);
}
