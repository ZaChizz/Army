//
// Created by Admin on 15.02.2021.
//

#include "TransformState.h"
#include "../units/Unit.h"

TransformState::TransformState(State* AnotherState) : ITransformState() {
    this->InitialState = nullptr;
    this->AnotherState = AnotherState;
    this->isHuman = true;
}

TransformState::~TransformState() {
    if ( this->isHuman ) {
        delete(this->AnotherState);
    } else {
        delete (this->InitialState);
    }
}

void TransformState::sinchronization() {

}

void TransformState::transform(Unit* iUnit) {
    if ( this->InitialState == nullptr ) {
        this->InitialState = iUnit->getStateP();
    }
    this->sinchronization();

    if ( this->isHuman ) {
        iUnit->setState(this->AnotherState);
        this->isHuman = false;
    } else {
        iUnit->setState(this->InitialState);
        this->isHuman = true;
    }
}