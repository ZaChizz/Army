//
// Created by Admin on 13.01.2021.
//

#ifndef ARMY_SOLDIER_H
#define ARMY_SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    private:
        State* uState;
        BaseAttack* uAttack;
        ITransformState* uMultiState;
    public:
        Soldier(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Soldier();

        State& getState();
        BaseAttack& getAttack();
        State* getStateP();
        ITransformState* getMultiState();

        void setState(State* uState);
        void setAttack(BaseAttack* uAttack);
        void setMultiState(ITransformState* transformState);
};

std::ostream& operator<<(std::ostream& out, Soldier& soldier);

#endif //ARMY_SOLDIER_H
