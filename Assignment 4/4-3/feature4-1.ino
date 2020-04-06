String numberToText(int age);
String yourAreYoung(int age) 
{
  String result;

  return result;
}

String yourAreYoung(int age, String ageString) {
  String result;
  result = "I'm " + numberToText(age) + " years old"; 
  if(age<=18 && age >0){
      result = "I'm " + numberToText(age) + " years old\nYou are young."; 
  }
  return result;
}