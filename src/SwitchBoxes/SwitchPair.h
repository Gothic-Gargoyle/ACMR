//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_SWITCHPAIR_H
#define ARDUINOKASTBAAN_SWITCHPAIR_H


#include "SwitchBoxes/Points/Point.h"

class SwitchPair {
private:
    Point yellowPoint;
    Point greenPoint;

public:
    SwitchPair(Point yellowPoint, Point greenPoint);

    void switchPoint(Point yPoint, Point gPoint);

    void switchYellowPoint();

    void switchGreenPoint();


};


#endif //ARDUINOKASTBAAN_SWITCHPAIR_H
