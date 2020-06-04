// constants won't change. They're used here to set pin numbers:
const int redLedPin =  9;      // the number of the red LED pin
const int greenLedPin =  10;      // the number of the yellow LED pin
const int blueLedPin =  11;      // the number of the green LED pin
int redValue = 0;
int greenValue = 0;
int blueValue = 0;
int i = 0;

void setColor(int red, int green, int blue) {
  analogWrite(redLedPin, red);
  analogWrite(greenLedPin, green);
  analogWrite(blueLedPin, blue);
}

void setup() {
  // initialize the LED pins as an outputs:
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  i++;
  if (i < 255) {
    redValue++;
  }
  else if (redValue <= 0) {
    redValue = 0;
  }
  else {
    redValue --;
  }
  if (i > 255 && i < 510) {
    greenValue++;
  }
  else if (greenValue <= 0) {
    greenValue = 0;
  }
  else {
    greenValue --;
  }
  if (i > 510 && i < 765) {
    blueValue++;
  }
  else if (blueValue <= 0) {
    blueValue = 0;
  }
  else {
    blueValue --;
  }
  if (i > 765) {
    i = 0;
  }
  
  setColor(redValue, greenValue, blueValue);
  delay(10);
}
