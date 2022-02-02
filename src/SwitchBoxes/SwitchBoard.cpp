//
// Created by hylbr on 5-5-2021.
//

#include "SwitchBoard.h"
SwitchBoard::SwitchBoard(SwitchPair *switchPairs) {

}
//Hier nog iets op vinden(fatsoenlijke list) , een ding voor morgen ofzo.
//oid SwitchBoard::checkSwitchBoard() {
//   for(int i = 0; i < switchingArray;i++){
//       switchingArray->switchPointPair();
//   }
//}

void SwitchBoard::addToSwitchBoard(SwitchPair switchPair) {
    //switchPair ? switchingArray;
}

int SwitchBoard::showSwitchBoardPair(int id){
    return switchingArray[id];
}

SwitchPair * SwitchBoard::returnSwitchBoard(){
    return reinterpret_cast<SwitchPair *>(switchingArray);
}