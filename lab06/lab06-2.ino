#include <Keypad.h>

const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={
{'0', '1', '2', '3'}, {'4','5','6', '7'},
{'8', '9', 'A', 'B'}, {'C', 'D', 'E', 'F'}
};

// 定義 Keypad 連到 Arduino 的接腳
byte rowPins[ROWS] = {2,3,4,5};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {9, 8, 7, 6};
Keypad keypad =
Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );
const byte SP_PIN=16;
int x;
int length;
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
#define SPACE 0.01
#define NOTE_0 0

int tune[]={NOTE_C3,NOTE_CS3
,NOTE_D3,NOTE_DS3,NOTE_E3,NOTE_F3,NOTE_FS3,NOTE_G3,NOTE_GS3,NOTE_A3,NOTE_AS3,NOTE_B3,NOTE_C4,NOTE_CS4,NOTE_D4,NOTE_E4};
void setup() {
 pinMode(SP_PIN,OUTPUT);
 Serial.begin(9600); 
}


void loop() {
  char key = keypad.getKey(); // 讀取 Keypad
  int key1=key-'0';
  int key2=key-'A'+10;
  //Serial.println(key);

  
if (key != NO_KEY){
  if(key>='0'&&key<='9')
  {
    Serial.println(key1);
    tone(SP_PIN,tune[key1]);
    delay(500);
    noTone(SP_PIN);
    }
  if(key>='A'&&key<='F')
  {
    Serial.println(key2);
    tone(SP_PIN,tune[key2]);
    delay(500);
    noTone(SP_PIN);
    }
  }
}
