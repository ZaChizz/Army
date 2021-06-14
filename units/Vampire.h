//
// Created by Admin on 23.01.2021.
//

#ifndef ARMY_VAMPIRE_H
#define ARMY_VAMPIRE_H

#include <iostream>
#include "Unit.h"
#include "Soldier.h"
#include "../attacks/VampireAttack.h"

class VampireAttack;

class Vampire : public Soldier {
    public:
        Vampire(const std::string& name,
                State* uState = new State((int)HP::VAMPIRE,(int)DMG::VAMPIRE,(int)MHP::VAMPIRE,(int)TYPEUNIT::UNDEAD),
                BaseAttack* uAttack = new VampireAttack(),
                const std::string& form = "Vampire");
        ~Vampire();
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire);

#endif //ARMY_VAMPIRE_H
