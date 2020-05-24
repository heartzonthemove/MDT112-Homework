void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
int count = 1;
int p = 2;
void loop() {
  for (int i = 0; i < count && count <= 100; i++) {
    for (int j = 1; j < p && j <= 13; j++) {
      digitalWrite(p, 1);
      p++;
      if (p > 13) {
        break;
      }
    }
    delay(count * 10);
    p = 2;
    for (int k = 1; k < p && k <= 13; k++) {
      digitalWrite(p, 0);
      p++;
      if (p > 13) {
        break;
      }
    }
    delay(count * 10);
    p = 2;
  }
  count++;
  if (count > 100) {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    delay(2000);
    count = 1;
  }
}