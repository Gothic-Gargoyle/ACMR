//
// Created by hylbr on 5-5-2021.
//

#include "Button.h"
Button::Button(byte buttonPin){
    this->buttonPin = buttonPin;
    time = 0;
    debounce = 50;
    init();
}

void Button::init(){
    pinMode(buttonPin,INPUT);
    update();
}

void Button::update(){
    byte newReading = digitalRead(buttonPin);
    if (newReading != lastReading){
        lastDebounceTime = millis();
        if (millis() - lastDebounceTime > debounce){
            buttonState = newReading;
        }
        lastReading = newReading;
    }
}

byte Button::getButtonState(){
    update();
    return buttonState;
}

bool Button::isPressed(){
    return (getButtonState() == HIGH);
}