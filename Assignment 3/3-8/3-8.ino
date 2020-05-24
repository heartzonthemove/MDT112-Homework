void setup()
{
    Serial.begin(9600);
    int ID = 6+2+1+2+0+5+0+1+0+7+5;
    for (int x = 0; x<1000; x++)
    {
        if (x % 29 == 0)
        {
            Serial.println(x);
        }
    }
}
void loop ()
{
}