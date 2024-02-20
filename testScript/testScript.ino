/*
Project to make a pin fade in and out.
*/

const byte D6_LED = 6; // LED pin 
byte v = 0xf;
byte m = 0xf;
bool reverse = false;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(D6_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  analogWrite(D6_LED, v);
  if (counter == 15 ) { // Runs 15 times and then reverses;
    reverse = (reverse == true) ? false : true;
    counter = 0;
  }
  
  
  // Applies logic to inc or dec the voltage. 
  if (reverse) 
    v -= m;
  else 
    v += m;
  counter++;
}
