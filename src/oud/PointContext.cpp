//
// Created by hylbr on 2-2-2022.
//

#include "PointContext.h"

PointContext::PointContext(PointAction *pointAction): pointAction_(pointAction) {

}

void PointContext::set_pointaction(PointAction *pointAction) {
    delete this->pointAction_;
    this->pointAction_ = pointAction;
}

void PointContext::ActivatePoint() {
    this->pointAction_->PointFunction(0);
}

