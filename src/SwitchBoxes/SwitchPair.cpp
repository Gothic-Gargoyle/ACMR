//
// Created by hylbr on 5-5-2021.
//

#include "SwitchPair.h"

SwitchPair::SwitchPair(Point yellowPoint, Point greenPoint) :  yellowPoint(yellowPoint),greenPoint(greenPoint) {
    this->yellowPoint= yellowPoint;
    this->yellowPoint= greenPoint;
}

void SwitchPair::switchPoint(Point yPoint,Point gPoint){
    yPoint.activateOutput();
    gPoint.deactivateOutput();
}

void SwitchPair::switchYellowPoint(){
    switchPoint(yellowPoint,greenPoint);
    Serial.print("yellow point activated");

}

void SwitchPair::switchGreenPoint(){
    switchPoint(greenPoint,yellowPoint);
    Serial.print("Green point activated");
}