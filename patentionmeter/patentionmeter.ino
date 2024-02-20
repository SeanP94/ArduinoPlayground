/*
Project to make a pin fade in and out w/ a patentionmeter..
*/
const int VOLTMAX = 1023; // Max volt int
const byte readPin = A5; // LED pin 
float readInp;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readInp = (5./1023.) * analogRead(readPin); // Algorithm to output voltage.
  Serial.println(readInp);
  delay(50);
}
