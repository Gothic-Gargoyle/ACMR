//
// Created by hylbr on 2-2-2022.
//

#ifndef BLINKTESTHELP_POINTACTION_H
#define BLINKTESTHELP_POINTACTION_H


#include <Arduino.h>

class PointAction {
public:
    virtual ~PointAction(){}
    virtual void PointFunction(byte i);
};

class Moment : public PointAction{
public:
    void PointFunction(byte i) override;
};

class Toggle : public PointAction{
public:
    void PointFunction(byte i) override;
};

#endif //BLINKTESTHELP_POINTACTION_H
