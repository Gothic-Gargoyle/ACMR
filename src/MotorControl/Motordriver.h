//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_MOTORDRIVER_H
#define ARDUINOKASTBAAN_MOTORDRIVER_H


#include <Arduino.h>

class Motordriver {
private:
    //moet PWM zijn!
    byte motorSpeed;

    //Zijn digital
    byte motorDir1;
    byte motorDir2;

    //analog In
    byte potMeterPin;


    int potmeterValue;
public:
    Motordriver(byte motorDir,byte motorIn1, byte motorIn2, byte potmeterPin);
    void init();

    void readPotmeterInput();

    void motorControl();

    void switchDirection();
};


#endif //ARDUINOKASTBAAN_MOTORDRIVER_H
