int timer = 100;

void setup() {
  for (int i = 2; i < 10; i++){
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  for (int i = 2; i <= 9; i++){
    int rnd = random(2);
    
    if (rnd == 1){
      digitalWrite(i, HIGH);  
    }else {
      digitalWrite(i, LOW);
    }
  }
  delay(timer);
}
