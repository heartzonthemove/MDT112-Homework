String primeNumber(int maxNumber);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int maxNumber = random(50, 1000);

  Serial.println("Prime number between 1-" + String(maxNumber));
  Serial.println(primeNumber(maxNumber));
  Serial.println("-----------------------------------");
  delay(2000);
}
