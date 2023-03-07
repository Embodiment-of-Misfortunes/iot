void setup() {
Serial.begin(9600);
   pinMode(33,INPUT);
   pinMode(32,INPUT);
pinMode(5,OUTPUT);
}
void loop() {
int t=digitalRead(33);
if(t==0){
  digitalWrite(5,HIGH);
delay(500);
}
int to=digitalRead(32);
if(to==1){
  digitalWrite(5,LOW);
delay(500);
}
}