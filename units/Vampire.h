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
    public:
        Vampire(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Vampire();

        State& getState();
        BaseAttack& getAttack();

        void setAttack(BaseAttack* uAttack);
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire);

#endif //ARMY_VAMPIRE_H
