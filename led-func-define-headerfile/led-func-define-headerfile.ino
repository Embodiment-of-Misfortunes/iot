#include"rgb.h"
void setup() {
  Serial.begin(9600);
  pinMode(R,OUTPUT);
   pinMode(B,OUTPUT);
 pinMode(G,OUTPUT);  
 

}

void loop() 
{ 
red();
blue();
green();
purple();
lightBlue();
yellow();
white();
}
