//
// Created by Admin on 13.01.2021.
//

#ifndef ARMY_ROGUE_H
#define ARMY_ROGUE_H

#include <iostream>
#include "Unit.h"

class Rogue : public Unit {
    private:
        State* uState;
    public:
        Rogue(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Rogue();

        State& getState();

        void attack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, Rogue& rogue);

#endif //ARMY_ROGUE_H
