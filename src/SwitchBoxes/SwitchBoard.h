//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_SWITCHBOARD_H
#define ARDUINOKASTBAAN_SWITCHBOARD_H
#include "SwitchPair.h"
class SwitchBoard {
private:
    SwitchPair sp1;
public:
    SwitchBoard(SwitchPair sp1);

    void switchSp1();
};


#endif //ARDUINOKASTBAAN_SWITCHBOARD_H
