#include <Arduino.h>

#include <SoftwareSerial.h>
#include <SwitchBoxes/Button.h>
#include <SwitchBoxes/Point.h>
#include <SwitchBoxes/SwitchPair.h>
#include <MotorControl/Motordriver.h>
//#include "MotorControl/Motordriver.h"

Button button1(2);
Button button2(3);
Point point1(button1,12);
Point point2(button2,13);
SwitchPair sp1(point1,point2);

//SoftwareSerial serial(0,1); //tx & rx
Motordriver motordriver(11,7,8,A0);
void setup() {
// write your initialization code here
Serial.begin(9600);
Serial.print("Arduino Kastbaan \n");
}

void loop() {
    sp1.switchPointPair();
    motordriver.motorControl();
}


