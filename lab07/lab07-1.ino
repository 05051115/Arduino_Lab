#include <LiquidCrystal.h> // include the library code
#include "Arduino.h" 
LiquidCrystal lcd(1,2,10,11,12,13); // initialize interface pinchars
char val;
void setup() {
lcd.begin(20, 2); // set up the LCD's number of columns and rows:
lcd.clear();
lcd.print("05051115 YU,CAIJIE"); // Print a message to the LCD.
//Serial.begin(9600); 
}
void loop() {
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(0,1);

//lcd.print("05051115 YU,CAIJIE"); // Print a message to the LCD.
//lcd.print(millis()/1000); // print the number of seconds since reset:
}
