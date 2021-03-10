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
        Unit* iUnit;
        State* InitialState;
        State* AnotherState;

        bool isHuman;

        void sinchronization();

    public:
        TransformState(Unit* iUnit, State* AnotherState);
        ~TransformState();

        void transform();
};

#endif //ARMY_TRANSFORM_STATE_H
