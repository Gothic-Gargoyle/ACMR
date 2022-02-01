//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_POINT_H
#define ARDUINOKASTBAAN_POINT_H


#include <Arduino.h>
#include "Button.h"

//een point bestaat uit twee buttons en twee outputs
class Point {
private:
    Button pointInput;
    byte pointOutput;

public:
    Point(Button pointInput, byte pointOutput);
    void init();
    void activatePoint();
    void activateOutput();
    void deactivateOutput();


};
#endif //ARDUINOKASTBAAN_POINT_H
