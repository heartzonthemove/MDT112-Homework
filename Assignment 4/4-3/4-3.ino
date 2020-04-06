int yourAge(int yearInCE);

String yourAreYoung(int age);
String yourAreYoung(int age, String ageString);
String numberToText(int age);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int yearCE = random(1950, 2019);
  int age = yourAge(yearCE);

  Serial.println("I’m born in " + String(yearCE) + " C.E.");
  Serial.println(yourAreYoung(age, numberToText(age)));
  Serial.println("-----------------------------------");
  delay(2000);
}
