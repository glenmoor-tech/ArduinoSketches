void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  blinkLong();
  blinkLong();
  blinkLong();

  blinkShort();
  blinkShort();
  blinkShort();

  blinkLong();
  blinkLong();
  blinkLong();
  delay(1000); 
}

void blinkLong() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW);      
  delay(1000);                  
  digitalWrite(LED_BUILTIN, LOW);   
  digitalWrite(12, HIGH);
  delay(1000);
}

void blinkShort() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);       
  digitalWrite(12, HIGH);
  delay(500); 
}
