//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_BUTTON_H
#define ARDUINOKASTBAAN_BUTTON_H
#include "Arduino.h"

class Button {
private:
    byte buttonPin;
    byte lastReading;
    byte buttonState;
    int lastDebounceTime = 0;
    int debounceDelay = 250;

public:
    Button(byte buttonPin);
    void init();
    void update();
    bool isPressed();
    byte getButtonState();
};


#endif //ARDUINOKASTBAAN_BUTTON_H
