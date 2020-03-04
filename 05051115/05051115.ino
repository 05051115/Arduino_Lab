int delaytime = 100*2;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delaytime);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(delaytime);                       // wait for a second

  digitalWrite(13, HIGH);   
  delay(100);                      
  digitalWrite(13, LOW);   
  delay(100);

  digitalWrite(13, HIGH);   
  delay(100);                      
  digitalWrite(13, LOW);   
  delay(100);             //S

  digitalWrite(13, HIGH);   
  delay(300);                      
  digitalWrite(13, LOW);   
  delay(100);

  digitalWrite(13, HIGH);   
  delay(300);                      
  digitalWrite(13, LOW);   
  delay(100);

  digitalWrite(13, HIGH);   
  delay(300);                      
  digitalWrite(13, LOW);   
  delay(100);             //O

  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  digitalWrite(13, HIGH);   
  delay(100);                      
  digitalWrite(13, LOW);   
  delay(100);

  digitalWrite(13, HIGH);   
  delay(100);                      
  digitalWrite(13, LOW);   
  delay(300);             //S

}
