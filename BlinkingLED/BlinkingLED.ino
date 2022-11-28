void setup() {
  pinMode(13, OUTPUT);
  
}

void loop() {
  int sensorValue = 1000; //backward compatible for circut without a potentiometer
  
  sensorValue = analogRead(A0); //potentiometer logic
  
  digitalWrite(13, HIGH);
  delay(sensorValue);
  digitalWrite(13, LOW);
  delay(sensorValue);
}
