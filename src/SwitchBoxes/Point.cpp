//
// Created by hylbr on 5-5-2021.
//

#include "Point.h"
Point::Point(Button pointInput,byte pointOutput) : pointInput(pointInput) {
    this->pointInput = pointInput;
    this->pointOutput = pointOutput;
    this->lastPointState= LOW;
    this->currentPointState = LOW;
    this->pointToggle=false; //evt uitbreiden van moment naar toggle?
    init();
}

void Point::init(){
    pinMode(pointOutput,OUTPUT);
}

void Point::activateOutput() {
    if (pointInput.isPressed()){
        currentPointState = HIGH;
        Serial.print("Point ");
        Serial.print(pointOutput);
        lastPointState = currentPointState;
        pointToggle= true;
        digitalWrite(pointOutput,HIGH);

    }else{
        digitalWrite(pointOutput,LOW);
    }
}
//En dan nu iets bedenken voor de verschillende modussen die een point kan hebben
void Point::setOutput(){
    if (pointToggle){
    digitalWrite(pointOutput,HIGH); //vervangen door servoaansturing!
}}

void Point::deactivateOutput(){
    currentPointState = LOW;
    digitalWrite(pointOutput,LOW);
}

//en dan hier alle logica voor schakelen (servo, soleniod etc)
//of toch liever een aparte class met functions?
void Point::setFunction(byte chosenFunction) {
    pointFunction = chosenFunction;
}