//
// Created by hylbr on 5-5-2021.
//
#include "Point.h"
//een point is een samenvoeging van twee buttons en hun outputpins.
Point::Point(Button pointInput,byte pointOutput) : pointInput(pointInput){
    this->pointInput = pointInput;
    this->pointOutput = pointOutput;
    init();
}

void Point::init(){
    pinMode(pointOutput,OUTPUT);
}

void Point::activatePoint() {
    if (pointInput.isPressed()){
        Serial.print("Point ");
        Serial.print(pointOutput);;
        activateOutput();
    }else{
        deactivateOutput();
    }
}

void Point::activateOutput() {
    digitalWrite(pointOutput,HIGH);
}

void Point::deactivateOutput(){
    digitalWrite(pointOutput,LOW);
}
//Verschillende functies, help hoe te integreren




