//
// Created by hylbr on 2-2-2022.
//

#ifndef BLINKTESTHELP_POINTCONTEXT_H
#define BLINKTESTHELP_POINTCONTEXT_H


#include "SwitchBoxes/PointAction.h"

class PointContext {
PointAction *pointAction_;
public:
    PointContext(PointAction *pointAction= nullptr);
    void set_pointaction(PointAction *pointAction);
    void ActivatePoint();
};

#endif //BLINKTESTHELP_POINTCONTEXT_H
