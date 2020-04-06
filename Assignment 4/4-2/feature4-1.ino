String yourAreYoung(int age)
{
  String result; 
  if (age >= 18) 
  { 
      result = "I'm " + String(age) + " years old";
  }
  if(age < 18 && age > 0)
  {
      result = "I'm " + String(age) + " years old\nYou are  young.";    
  }
  return result;
}