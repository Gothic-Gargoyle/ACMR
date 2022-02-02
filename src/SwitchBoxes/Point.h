//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_POINT_H
#define ARDUINOKASTBAAN_POINT_H


#include <Arduino.h>
#include "Button.h"
#include "PointAction.h"

//een point bestaat uit twee buttons en twee outputs
class Point {
private:
    Button pointInput;
    byte pointOutput;
    PointAction *pointAction_;
public:
    Point(Button pointInput, byte pointOutput, PointAction *pointAction);
    ~Point();
    void init();
    void activatePoint();
    void setFunction(PointAction *pointAction);
};
#endif //ARDUINOKASTBAAN_POINT_H
