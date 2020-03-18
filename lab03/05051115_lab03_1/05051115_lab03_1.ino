int n;
const byte led=13;

void setup() {
  
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  Serial.println("Hello,World!");
}


void loop() {
  if(Serial.available()){
    n=Serial.read();
    if(n=='1'){
      digitalWrite(led,HIGH);
      Serial.println("LED　ON");
      }
      else if(n=='0'){
      digitalWrite(led,LOW);
      Serial.println("LED　OFF");
        }
    }

  delay(1);       
}
