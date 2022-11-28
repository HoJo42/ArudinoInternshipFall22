int timer = 500;

void setup() {
  for (int i = 2; i < 10; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);  
  }
}

void loop() {
  for (int i = 2; i <= 9; i++){
    if (i%2 == 0){
      digitalWrite(i, HIGH);  
    }else {
      digitalWrite(i, LOW);  
    }
      
  }
  
  delay(timer);

  for (int i = 2; i <= 9; i++){
    if (i%2 != 0){
      digitalWrite(i, HIGH);  
    }else {
      digitalWrite(i, LOW);  
    }
      
  }

  delay(timer);
}
