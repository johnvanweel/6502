void setup() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  reset();

  Serial.begin(57600);
}

void loop() {
  // Clock
  pulse(199, 5);
  Serial.println("200");
  pulse(1, 1000);
  pulse(9, 100);
  Serial.println("210");
  pulse(1, 1000);
  pulse(31, 100);
  Serial.println("242");
  pulse(1, 1000);
  pulse(21, 100);
  Serial.println("264");
  pulse(1, 1000); 

  reset();
}

void pulse(int amount, int wait){
  for (int i = 0; i < amount; i++){
    digitalWrite(2, HIGH);
    delay(wait);
    digitalWrite(2, LOW);
    delay(wait);
  }
}

void reset(){
  Serial.println("Resetting...");
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  delay(50);
  digitalWrite(3, HIGH);
  delay(50);
}
