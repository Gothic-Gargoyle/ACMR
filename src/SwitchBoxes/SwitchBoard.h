//
// Created by hylbr on 5-5-2021.
//

#ifndef ARDUINOKASTBAAN_SWITCHBOARD_H
#define ARDUINOKASTBAAN_SWITCHBOARD_H
#include "SwitchPair.h"
class SwitchBoard {
private:
    static int switchingArray[10];
public:
    SwitchBoard(SwitchPair *switchPairs);
    void addToSwitchBoard(SwitchPair switchPair);
    void checkSwitchBoard();
    static int showSwitchBoardPair(int id);
    SwitchPair *returnSwitchBoard();
};


#endif //ARDUINOKASTBAAN_SWITCHBOARD_H
