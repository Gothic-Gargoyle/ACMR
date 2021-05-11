#include <Arduino.h>

#include "SwitchBoxes/SwitchBoard.h"
#include <SoftwareSerial.h>
Button button(8);
Button button2(7);
Point point(button,13);
Point point2(button2,12);
SwitchPair sp(point,point2);
SwitchBoard sb(sp);;
SoftwareSerial serial(0,1); //tx & rx
void setup() {
// write your initialization code here
serial.begin(9600);
serial.print("Arduino Kastbaan \n");

}
void loop() {
// write your code here
//point.activateOutput();
//point2.activateOutput();
sp.switchPoint(point,point2);
sp.switchPoint(point2,point);

}

