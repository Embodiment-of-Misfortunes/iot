
void setup() {
  Serial.begin(9600);
  pinMode(1,OUTPUT);
   pinMode(5,OUTPUT);
 pinMode(15,OUTPUT);   
  

}

void loop() {
 red();
blue();
green();
purple();
lightBlue();
yellow();
white();
}

void red(){
digitalWrite(1,HIGH);
delay(500);
digitalWrite(1,LOW);  
}
void blue(){
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);  
}
void green(){
  digitalWrite(15,HIGH);
delay(500);
digitalWrite(15,LOW);
}
void purple(){

digitalWrite(1,HIGH);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(1,LOW);
digitalWrite(5,LOW);
}
void lightBlue(){
digitalWrite(15,HIGH);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(15,LOW);
digitalWrite(5,LOW);  
}
void yellow(){
digitalWrite(15,HIGH);
digitalWrite(1,HIGH);
delay(500);
digitalWrite(15,LOW);
digitalWrite(1,LOW);  
}
void white(){
  digitalWrite(15,HIGH);
digitalWrite(5,HIGH);
digitalWrite(1,HIGH);
delay(500);
digitalWrite(15,LOW);
digitalWrite(5,LOW);
digitalWrite(1,LOW);
}