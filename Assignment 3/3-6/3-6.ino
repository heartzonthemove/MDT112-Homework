
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
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
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  Serial.println("Hello World");
}
int count = 0;
void loop() {
  if (digitalRead(2) == 0) {
    switch (count) {
    case 1:
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(11, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      break;
    case 2:
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(11, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      delay(100);
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      delay(100);
      break;
    case 3:
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      break;
    case 4:
      count = 1;
      break;
    }
  } else {
    switch (count) {
    case 1:
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(11, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      break;
    case 2:
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(11, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      delay(100);
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      delay(100);
      break;
    case 3:
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      break;
    case 4:
      count = 1;
      break;
    }
    if (digitalRead(2) == 0) {
      count++;
    }
  }
}