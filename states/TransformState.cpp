//
// Created by Admin on 15.02.2021.
//

#include "TransformState.h"
#include "../units/Unit.h"

TransformState::TransformState(Unit* iUnit,  State* AnotherState) : ITransformState() {
    this->iUnit = iUnit;
    this->InitialState = iUnit->getStateP();
    this->AnotherState = AnotherState;
    this->isHuman = true;
}

TransformState::~TransformState() {
    delete(this->AnotherState);
}

void TransformState::sinchronization() {

}

void TransformState::transform() {
    this->sinchronization();

    if ( this->isHuman ) {
        this->iUnit->setState(this->AnotherState);
    } else {
        this->iUnit->setState(this->InitialState);
    }
}