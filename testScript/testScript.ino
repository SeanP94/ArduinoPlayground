const byte D7 = 7;
byte v = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(D7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  analogWrite(D7, 255);
  delay(500);
  analogWrite(D7, 30);
  
  // v = v + m;
  // Serial.write("\n");
  // Serial.write(v);
  // if (v >= 255) {
  //   v = 255;
  //   m = -10;
  // }
  // if ( v <= 0 ) {
  //   v = 0;
  //   m = 10;
  // }
}
