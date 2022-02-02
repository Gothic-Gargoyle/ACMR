//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_SWITCHBOARD_H
#define ARDUINOKASTBAAN_SWITCHBOARD_H
#include "SwitchPair.h"
class SwitchBoard {
private:
    static SwitchPair switchingArray[10];
public:
    SwitchBoard(SwitchPair *switchPairs);
    void addToSwitchBoard(SwitchPair switchPair);
    void checkSwitchBoard();
    static SwitchPair showSwitchBoardPair(int id);
    SwitchPair *returnSwitchBoard();
};


#endif //ARDUINOKASTBAAN_SWITCHBOARD_H
