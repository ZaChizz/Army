//
// Created by Admin on 15.02.2021.
//

#ifndef ARMY_TRANSFORM_STATE_H
#define ARMY_TRANSFORM_STATE_H

#include <iostream>
#include "interfaces/ITransformState.h"

class Unit;

class TransformState : public ITransformState {
    private:
        State* InitialState;
        State* AnotherState;

        bool isHuman;

        void sinchronization();

    public:
        TransformState(State* AnotherState);
        ~TransformState();

        void transform(Unit* iUnit);
};

#endif //ARMY_TRANSFORM_STATE_H
