/*Lab02
所有LED亮滅兩次 -> 左移八次 -> 所有LED亮滅兩次 ->右移八次*/

const int LEDs[]={6,7,8,9,10,11,12,13};
int i,j=0;
int delaytime=100;
byte index = 0;

void setup(){
  for (i=0;i<8;i++) {
  pinMode(LEDs[i], OUTPUT);
  digitalWrite(LEDs[i], LOW);
  }
}

void loop() {
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
