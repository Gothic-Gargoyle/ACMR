//
// Created by hylbr on 5-5-2021.
//

#include "Motordriver.h"
Motordriver::Motordriver(byte motorSpeed,byte motorDir1, byte motorDir2, byte potmeterPin) {
    this->motorSpeed = motorSpeed;
    this->motorDir1 = motorDir1;
    this->motorDir2 = motorDir2;
    this->potMeterPin = potmeterPin;
    potmeterValue = 0;
    init();
}
void Motordriver::init() {
    pinMode(motorSpeed,OUTPUT);
    pinMode(motorDir1,OUTPUT);
    pinMode(motorDir2,OUTPUT);
    pinMode(potMeterPin,INPUT);
}

void Motordriver::readPotmeterInput(){
    //read potmeterpin implementatie
    potmeterValue = analogRead(potMeterPin);
    motorSpeed = potmeterValue;
}

void Motordriver::switchDirection(){

}

void Motordriver::motorControl(){
    readPotmeterInput();
    //voor schakelen: OF knopje OF range tussen 0 en midden en midden en max


    //en nog meer om ze aan te sturen

}
