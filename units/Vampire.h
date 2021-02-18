//
// Created by Admin on 23.01.2021.
//

#ifndef ARMY_VAMPIRE_H
#define ARMY_VAMPIRE_H

#include <iostream>
#include "Unit.h"
#include "../attacks/VampireAttack.h"

class VampireAttack;

class Vampire : public Unit {
    private:
        State* uState;
        BaseAttack* uAttack;
        ITransformState* uMultiState;

    public:
        Vampire(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Vampire();

        State& getState();
        BaseAttack& getAttack();
        State* getStateP();
        ITransformState* getMultiState();

        void setState(State* uState);
        void setAttack(BaseAttack* uAttack);
        void setMultiState(ITransformState* transformState);
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire);

#endif //ARMY_VAMPIRE_H
