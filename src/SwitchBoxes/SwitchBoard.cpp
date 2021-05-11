//
// Created by hylbr on 5-5-2021.
//

#include "SwitchBoard.h"
SwitchBoard::SwitchBoard(SwitchPair sp1)
        : sp1(sp1) {

}
void SwitchBoard::switchSp1(){
    sp1.switchGreenPoint();
    Serial.write("test");


}