#include <LiquidCrystal.h> // include the library code
#include "Arduino.h" 
LiquidCrystal lcd(1,2,10,11,12,13); // initialize interface pinchars
char val;
void setup() {
lcd.begin(20, 2); // set up the LCD's number of columns and rows:
lcd.clear();
lcd.print("05051115 YU,CAIJIE"); // Print a message to the LCD.
lcd.setCursor(0,1);
Serial.begin(9600); 
}
void loop() {
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since counting begins with 0):
//lcd.clear();
//lcd.setCursor(0,1);

if (Serial.available()) {
  delay(100);    // clear the screen
    
    
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
      
    }

  }
}
