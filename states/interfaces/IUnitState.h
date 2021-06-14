//
// Created by Admin on 19.02.2021.
//

#ifndef ARMY_I_UNIT_STATE_H
#define ARMY_I_UNIT_STATE_H

#include "../State.h"

class IUnitState {
    public:
        IUnitState();
        virtual ~IUnitState();

        virtual State& getState()=0;
        virtual State* getStateP()=0;
        virtual void setState(State* uState)=0;
};

#endif //ARMY_I_UNIT_STATE_H
