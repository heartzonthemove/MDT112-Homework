void setup(){
    pinMode(2,INPUT_PULLUP);
    pinMode(3,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    int x=0,loopdown=0,loopup = 0,count = 0;

    for (x=0;x<=255;x++){
        analogWrite(3,x);
        analogWrite(5,x);
        analogWrite(6,x);
        analogWrite(9,x);
        analogWrite(10,x);
        analogWrite(11,x);
        delay(10);
        if (digitalRead(2)==0){
            
            count++;
        }
        else{
            if (count>1){
                count = 1;
                Serial.println(count);
                break;
            }
        }

        if(x == 255){
            for (x=255;x>=0;x--){
                analogWrite(3,x);
                analogWrite(5,x);
                analogWrite(6,x);
                analogWrite(9,x);
                analogWrite(10,x);
                analogWrite(11,x);
                delay(10);
                if (digitalRead(2)==0){
                    count++;
                }
                else{
                if (count>1){
                    count = 2;
                    Serial.println(count);
                    break;
                }
                }
                
            }
        }
    }
    while (count == 1){
        analogWrite(3,x);
        analogWrite(5,x);
        analogWrite(6,x);
        analogWrite(9,x);
        analogWrite(10,x);
        analogWrite(11,x);
        
        if (digitalRead(2)==0){
            delay(1000);
            break;
        }
    }
    if (count == 1){
        for(loopup = x;loopup<=255;loopup++){
            analogWrite(3,loopup);
            analogWrite(5,loopup);
            analogWrite(6,loopup);
            analogWrite(9,loopup);
            analogWrite(10,loopup);
            analogWrite(11,loopup);
            delay(10);
        }
        for (x=255;x>=0;x--){
            analogWrite(3,x);
            analogWrite(5,x);
            analogWrite(6,x);
            analogWrite(9,x);
            analogWrite(10,x);
            analogWrite(11,x);
            delay(10);
            if (digitalRead(2)==0){
                count++;
            }
        else{
            if (count>1){
                count = 2;
                Serial.println(count);
                break;
            }
            }
                
        }
        
    }
    while (count == 2){
        analogWrite(3,x);
        analogWrite(5,x);
        analogWrite(6,x);
        analogWrite(9,x);
        analogWrite(10,x);
        analogWrite(11,x);
        delay(10);
        if (digitalRead(2)==0){
            delay(1000);
            break;
        }
    }
    if (count == 2){
        for(loopdown = x;loopdown >=0;loopdown--){
            analogWrite(3,loopdown);
            analogWrite(5,loopdown);
            analogWrite(6,loopdown);
            analogWrite(9,loopdown);
            analogWrite(10,loopdown);
            analogWrite(11,loopdown);
            delay(10);
        }
    }
}