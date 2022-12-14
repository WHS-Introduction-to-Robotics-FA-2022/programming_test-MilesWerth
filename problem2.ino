/*

*/


 int redPin = 11;
int greenPin = 10;
int bluePin = 9;
void setup() {
    pinMode(bluePin, OUTPUT);
    pinMode(greenPin,OUTPUT);
    pinMode(redPin,OUTPUT);
}

void loop() {
  analogWrite(bluePin,16);
  analogWrite(greenPin,2);
  analogWrite(redPin,128);
}
