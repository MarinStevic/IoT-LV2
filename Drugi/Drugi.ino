const int ledPin = 11;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    int val = Serial.parseInt();
    
    if (Serial.read() == '\n') {
      if (val >= 50 && val <= 1000) {
        val = map(val, 50, 1000, 0, 255);
  
        analogWrite(ledPin, val);
        
        Serial.println(val);
      }
      else {
        Serial.println("Broj treba biti u intervalu od 50 do 1000!");
      }
    }
  }
}
