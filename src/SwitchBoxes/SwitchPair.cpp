//
// Created by hylbr on 5-5-2021.
//

#include "SwitchPair.h"
enum switchStates {UNTOUCHED,YELLOW,GREEN};

SwitchPair::SwitchPair(Point yellowPoint, Point greenPoint) :  yellowPoint(yellowPoint),greenPoint(greenPoint) {
    this->yellowPoint= yellowPoint;
    this->greenPoint= greenPoint;
    this->switchState = UNTOUCHED;
}

void SwitchPair::switchPoint(Point *point1, Point *point2, byte stateSwitchTo) {
    point1->activatePoint();
    switchState = stateSwitchTo;
}

void SwitchPair::switchGreenPoint() {
    switchPoint(&greenPoint, &yellowPoint, GREEN);
}

void SwitchPair::switchYellowPoint() {
    switchPoint(&yellowPoint,&greenPoint, YELLOW);
}

void SwitchPair::switchPointPair(){
    switchYellowPoint();
    switchGreenPoint();
}

byte SwitchPair::returnSwitchState(){
    return switchState;
}