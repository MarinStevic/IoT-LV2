int potentiometer = A0;    // select the input pin for the potentiometer
int ledPin = 11;      // select the pin for the LED

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(potentiometer, INPUT);
}

void loop() {
  int val = analogRead(potentiometer);

  Serial.print(val);
  Serial.print("\t");
  Serial.println(val*(1023/5));
  
  val = map(val, 0, 1023, 0, 255);
  analogWrite(ledPin, val);
}
