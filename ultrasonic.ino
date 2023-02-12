float dist=0;
int trig;
int echo;
int led=13;

long ReadValue(int trig,int echo){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  return pulseIn(echo,HIGH);
 }
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  dist=0.01723*(ReadValue(11,10));
  Serial.println(dist);

}
