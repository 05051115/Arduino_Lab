/*Lab02
開關 OFF -> LED 向左及向右執行花色展示
開關 ON -> 執行自定花色展示*/

const int LEDs[]={7,8,9,10,11,12,13,14};
const byte sw =6;
int i,j=0;
int delaytime=100;
boolean buttonstate;

void setup(){
  for (i=0;i<8;i++) {
  pinMode(LEDs[i], OUTPUT);
  digitalWrite(LEDs[i], LOW);
  }
  pinMode(sw,INPUT);
  

}

void loop() {
  buttonstate=digitalRead(sw);

if(digitalRead(sw)==LOW){            //OFF
  delay(20);
  
    for(i=0;i<8;i++){             //左移
      digitalWrite(LEDs[i],HIGH);
      delay(delaytime);
      digitalWrite(LEDs[i],LOW);
    }

    for(i=0;i<8;i++){
    digitalWrite(LEDs[i],LOW);
    }
    delay(delaytime);
    

    for(i=7;i>=0;i--){             //右移
      digitalWrite(LEDs[i],HIGH); 
      delay(delaytime); 
      digitalWrite(LEDs[i],LOW);
    }

     for(i=0;i<8;i++){
      digitalWrite(LEDs[i],LOW);
    }
    delay(1000);
  
}


  else{                           //ON
  delay(20);
  
  for(i=0;i<8;i++){               //所有LED亮滅兩次
    digitalWrite(LEDs[i],HIGH);
  }
  delay(delaytime);
  for(i=0;i<8;i++){
    digitalWrite(LEDs[i],LOW);
  }
  delay(delaytime);

  for(i=0;i<8;i++){               
    digitalWrite(LEDs[i],HIGH);
  }
  delay(delaytime);
  for(i=0;i<8;i++){
    digitalWrite(LEDs[i],LOW);
  }
  delay(delaytime);
  

  for(j=0;j<8;j++){              //左移八次
    for(i=0;i<8;i++){  
      digitalWrite(LEDs[i],HIGH);
      delay(delaytime);
      digitalWrite(LEDs[i],LOW);
    }

    for(i=0;i<8;i++){
    digitalWrite(LEDs[i],LOW);
    }
    delay(delaytime);
  }

  for(i=0;i<8;i++){               //所有LED亮滅兩次
    digitalWrite(LEDs[i],HIGH);
  }
  delay(delaytime);
  for(i=0;i<8;i++){
    digitalWrite(LEDs[i],LOW);
  }
  delay(delaytime);

  for(i=0;i<8;i++){               
    digitalWrite(LEDs[i],HIGH);
  }
  delay(delaytime);
  for(i=0;i<8;i++){
    digitalWrite(LEDs[i],LOW);
  }
  delay(delaytime);

  for(j=0;j<8;j++){             //右移八次
    for(i=7;i>=0;i--){
      digitalWrite(LEDs[i],HIGH); 
      delay(delaytime); 
      digitalWrite(LEDs[i],LOW);
    }

    for(i=0;i<8;i++){
      digitalWrite(LEDs[i],LOW);
    }
    delay(delaytime);
  }

  }
  
  
}
