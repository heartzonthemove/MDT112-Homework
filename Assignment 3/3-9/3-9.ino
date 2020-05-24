void setup(){
    int x = 0;
    while (x < 1000) {
    x++;
        if(x % 29 == 0){
            Serial.println(x);

        }
    }
}
void loop()
{
}