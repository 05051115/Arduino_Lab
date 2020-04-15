#include "SevSeg.h"
#include <Keypad.h>


const byte ROWS = 4; // 4 Rows
const byte COLS = 4; // 4 Columns
// 定義 Keypad 的按鍵
char keys[ROWS][COLS] = {
{'0', '1', '2', '3'}, {'4','5','6', '7'},
{'8', '9', 'A', 'B'}, {'C', 'D', 'E', 'F'}
};
// 定義 Keypad 連到 Arduino 的接腳
byte rowPins[ROWS] = {2,3,4,5};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {9, 8, 7, 6};
// 連到 Keypad 的 4 個 Columns
// 建立 Keypad 物件
SevSeg sevseg; //Instantiate a seven segment object
Keypad keypad =
Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );

void setup(){
Serial.begin(9600);
byte numDigits = 1;
byte digitPins[] = {17};
byte segmentPins[] = {10,11,12,13,14,15,16};
sevseg.begin(COMMON_ANODE, numDigits, digitPins,segmentPins);
}

void loop(){
char key = keypad.getKey(); // 讀取 Keypad的輸入
int  num = key-'0';
  if (key != NO_KEY){
  Serial.println(key);
  sevseg.setNumber(num,0);
  sevseg.refreshDisplay();
  }
  
}
