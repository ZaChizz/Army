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
        NoMagicState* uState;
    public:
        Berserker(const std::string& name, NoMagicState* uState, BaseAttack* uAttack);
        ~Berserker();

        NoMagicState& getState();

};

std::ostream& operator<<(std::ostream& out, Berserker& berserker);

#endif //ARMY_BERSERKER_H
