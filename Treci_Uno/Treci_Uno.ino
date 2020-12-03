int potentiometer = A0;    // select the input pin for the potentiometer

void setup() {
  Serial.begin(9600);
  
  pinMode(potentiometer, INPUT);
}

void loop() {
  int val = analogRead(potentiometer);
  val = map(val, 0, 1023, 0, 255);
  Serial.print(val);
  Serial.print("\n");
}
