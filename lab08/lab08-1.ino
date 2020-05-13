// HCSR04Ultrasonic/examples/UltrasonicDemo/UltrasonicDemo.pde
#include <Ultrasonic.h>
#define TRIGGER_PIN 17
#define ECHO_PIN 16
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
void setup() {
Serial.begin(9600);
}
void loop(){
float cmMsec;
cmMsec = ultrasonic.read(CM); // 計算距離，單位: 公分
Serial.print("CM: "); 
Serial.println(cmMsec);
delay(1000);
}
