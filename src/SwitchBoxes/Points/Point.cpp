//
// Created by hylbr on 5-5-2021.
//

#include "Point.h"

Point::Point(Button pointInput, byte pointOutput) : pointInput(pointInput) {
    this->pointInput = pointInput;
    this->pointOutput = pointOutput;
    this->lastPointState= LOW;
    this->currentPointState = LOW;
    init();
}

void Point:: init(){
    pinMode(pointOutput,OUTPUT);
}

boolean Point::isPointActivated(){
if (pointInput.isPressed()){
    return true;
}
    return false;
}

//Dit allicht nog vervangen voor een functie die dingen met functies doet oid
//voor nu stuur ie iig een output hoog
void Point::activateOutput() {
    if (pointInput.isPressed()) {
        currentPointState = HIGH;
        Serial.print("Point ");
        Serial.print(pointOutput);
        lastPointState = currentPointState;
        setOutput();
    }

}

void Point::setOutput(){
    digitalWrite(pointOutput,lastPointState); //vervangen door servoaansturing!
}

void Point::deactivateOutput(){
    currentPointState = LOW;
    digitalWrite(pointOutput,LOW);
}

//en dan hier alle logica voor schakelen (servo, soleniod etc)
//of toch liever een aparte class met functions?
void Point::setFunction(byte chosenFunction) {
    pointFunction = chosenFunction;
}

