String drawTriangle(int maxNumber) 
{
  String result;
    for (int i = 1 ; i<=maxNumber ; i++)
    {
      for (int j=1;j<=i;j++) 
      {
      result = result+("*");
      }
      result = result +"\n";
    }  
    for (int i = maxNumber; i >= 1; i--) 
    {  
      for (int j=i;j>=1;j--) 
      {
      result = result+("*");
      }
      result = result +"\n";
    }
    return result;
}