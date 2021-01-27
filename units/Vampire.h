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
        VampireAttack* uAttack;
    public:
        Vampire(const std::string& name, State* uState, VampireAttack* uAttack);
        ~Vampire();

        State& getState();
        VampireAttack& getAttack();
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire);

#endif //ARMY_VAMPIRE_H
