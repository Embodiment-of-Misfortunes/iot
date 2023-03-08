void setup() {
Serial.begin(9600);
   pinMode(33,INPUT);
}
void loop() {
int t=digitalRead(33);
Serial.print("touch:");
Serial.println(t);
delay(500);
}