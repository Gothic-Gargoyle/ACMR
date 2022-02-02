//
// Created by hylbr on 5-5-2021.
//
#include "Point.h"
//een point is een samenvoeging van een button en een outputpin.
Point::Point(Button pointInput, byte pointOutput, PointAction *pointAction = nullptr) : pointInput(pointInput), pointAction_(pointAction){
    this->pointInput = pointInput;
    this->pointOutput = pointOutput;
    this->pointAction_ = pointAction;
    init();
}
Point::~Point(){
    delete this->pointAction_;
}
void Point::init(){
    pinMode(pointOutput,OUTPUT);
}

void Point::setFunction(PointAction *pointAction){
    delete this->pointAction_;
    this->pointAction_ = pointAction;
}

void Point::activatePoint() {
    //testing purposes want apparantly doet de strategy het niet :(
    if (pointInput.isPressed()){
        Serial.print("Point activated");
        digitalWrite(pointOutput,HIGH);
        //this->pointAction_->PointFunction(pointOutput);
}else{
        digitalWrite(pointOutput,LOW);
    }
}








