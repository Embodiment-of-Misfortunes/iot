#define R 1
#define B 5
#define G 15


void red(){
digitalWrite(R,HIGH);
delay(500);
digitalWrite(R,LOW);  
}
void blue(){
digitalWrite(B,HIGH);
delay(500);
digitalWrite(B,LOW);  
}
void green(){
  digitalWrite(G,HIGH);
delay(500);
digitalWrite(G,LOW);
}
void purple(){

digitalWrite(R,HIGH);
digitalWrite(B,HIGH);
delay(500);
digitalWrite(R,LOW);
digitalWrite(B,LOW);
}
void lightBlue(){
digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
delay(500);
digitalWrite(G,LOW);
digitalWrite(B,LOW);  
}
void yellow(){
digitalWrite(G,HIGH);
digitalWrite(R,HIGH);
delay(500);
digitalWrite(G,LOW);
digitalWrite(R,LOW);  
}
void white(){
  digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
digitalWrite(R,HIGH);
delay(500);
digitalWrite(G,LOW);
digitalWrite(B,LOW);
digitalWrite(R,LOW);
}