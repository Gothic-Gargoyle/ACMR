//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_BUTTON_H
#define ARDUINOKASTBAAN_BUTTON_H
#include "Arduino.h"

class Button {
private:
    byte buttonPin;
    int time;
    byte lastReading;
    int lastDebounceTime = 0;
    int debounce;
    byte buttonState;
public:
    Button(byte buttonPin);
    void init();
    void update();
    unsigned char getButtonState(byte buttonPin);
    bool isPressed();

    byte getButtonState();
};


#endif //ARDUINOKASTBAAN_BUTTON_H
