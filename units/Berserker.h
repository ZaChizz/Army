//
// Created by Admin on 22.01.2021.
//

#ifndef ARMY_BERSERKER_H
#define ARMY_BERSERKER_H

#include <iostream>
#include "Unit.h"
#include "../states/NoMagicState.h"

class Berserker : public Unit {
    private:
        State* uState;
        BaseAttack* uAttack;
        ITransformState* uMultiState;
    public:
        Berserker(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Berserker();

        State& getState();
        BaseAttack& getAttack();
        State* getStateP();
        ITransformState* getMultiState();

        void setState(State* uState);
        void setAttack(BaseAttack* uAttack);
        void setMultiState(ITransformState* transformState);
};

std::ostream& operator<<(std::ostream& out, Berserker& berserker);

#endif //ARMY_BERSERKER_H
