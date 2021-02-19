//
// Created by Admin on 13.01.2021.
//

#ifndef ARMY_ROGUE_H
#define ARMY_ROGUE_H

#include <iostream>
#include "Unit.h"
#include "Soldier.h"

class Rogue : public Soldier {
    public:
        Rogue(const std::string& name, State* uState, BaseAttack* uAttack, const std::string& form ="Rogue");
        ~Rogue();

        void attack(Unit* enemy);

};

std::ostream& operator<<(std::ostream& out, Rogue& rogue);

#endif //ARMY_ROGUE_H
