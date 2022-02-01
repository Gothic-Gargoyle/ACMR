//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_SWITCHPAIR_H
#define ARDUINOKASTBAAN_SWITCHPAIR_H


#include "Point.h"

class SwitchPair {
private:
    Point yellowPoint;
    Point greenPoint;
    byte switchState;

public:
    SwitchPair(Point yellowPoint, Point greenPoint);
    void switchPoint(Point point1, Point point2, byte stateSwitchTo);
    void switchYellowPoint();
    void switchGreenPoint();
    byte returnSwitchState();


    void switchPointPair();
};


#endif //ARDUINOKASTBAAN_SWITCHPAIR_H
