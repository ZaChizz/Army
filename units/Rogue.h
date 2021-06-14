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
        Rogue(const std::string& name,
              State* uState = new State((int)HP::ROGUE,(int)DMG::ROGUE,(int)MHP::ROGUE),
              BaseAttack* uAttack = new BaseAttack(),
              const std::string& form ="rogue");
        ~Rogue();

        void attack(Unit* enemy);

};

std::ostream& operator<<(std::ostream& out, Rogue& rogue);

#endif //ARMY_ROGUE_H
