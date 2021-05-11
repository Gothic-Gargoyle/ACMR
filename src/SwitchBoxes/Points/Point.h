//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_POINT_H
#define ARDUINOKASTBAAN_POINT_H


#include <Arduino.h>
#include "SwitchBoxes/Button.h"
//een point bestaat uit twee buttons en twee outputs
class Point {
private:
    //input
    Button pointInput;

    //output
    byte pointOutput;

    //state van point
    byte lastPointState;
    byte currentPointState;

    //functie die de point uitvoert
    byte pointFunction;

public:
    Point(Button pointInput, byte pointOutput);
    void init();
    boolean isPointActivated();
    void activateOutput();
    void setFunction(byte chosenFunction);

    void deactivateOutput();

    void setOutput();
};


#endif //ARDUINOKASTBAAN_POINT_H
