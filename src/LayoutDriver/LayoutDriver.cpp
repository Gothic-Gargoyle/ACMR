//
// Created by hylbr on 5-5-2021.
//

#include <SwitchBoxes/SwitchPair.h>
#include <MotorControl/Motordriver.h>
#include "LayoutDriver.h"
Button button1(2);
Button button2(3);
Point point1(button1,12);
Point point2(button2,13);
SwitchPair sp1(point1,point2);
Motordriver motordriver(11,7,8,A0);

LayoutDriver::LayoutDriver(){
}

void LayoutDriver::run() {
    sp1.switchPointPair();
    motordriver.motorControl();
}
