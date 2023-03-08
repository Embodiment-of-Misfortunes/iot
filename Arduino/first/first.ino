
void setup() {
  Serial.begin(9600);
  pinMode(1,OUTPUT);
   pinMode(5,OUTPUT);
 pinMode(15,OUTPUT);   
  

}

void loop() {
 //1
digitalWrite(1,HIGH);
delay(500);
digitalWrite(1,LOW);
//delay(500);
//2
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);
//delay(500);
//3
digitalWrite(15,HIGH);
delay(500);
digitalWrite(15,LOW);
//delay(500);
//4
digitalWrite(1,HIGH);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(1,LOW);
digitalWrite(5,LOW);
//delay(500);
//5
digitalWrite(15,HIGH);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(15,LOW);
digitalWrite(5,LOW);
//delay(500);
//6
digitalWrite(15,HIGH);
digitalWrite(1,HIGH);
delay(500);
digitalWrite(15,LOW);
digitalWrite(1,LOW);
//delay(500);
//7
digitalWrite(15,HIGH);
digitalWrite(5,HIGH);
digitalWrite(1,HIGH);
delay(500);
digitalWrite(15,LOW);
digitalWrite(5,LOW);
digitalWrite(1,LOW);
//delay(500);
}
