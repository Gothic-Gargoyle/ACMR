//
// Created by hylbr on 2-2-2022.
//

#include "PointAction.h"
#include "Arduino.h"
void PointAction::PointFunction(byte i) {

}

void Moment::PointFunction(byte i) {
    digitalWrite(i,HIGH);
    Serial.print("Moment");
}

void Toggle::PointFunction(byte i) {
    Serial.print("Toggle");
}
