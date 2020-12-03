const int ledPin = 11;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    int val = Serial.parseInt();
    
    if (Serial.read() == '\n') {
      if (val >= 0 && val <= 255) {
        analogWrite(ledPin, val);
      }
    }
  }
}
