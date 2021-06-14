//
// Created by Admin on 22.01.2021.
//

#ifndef ARMY_BERSERKER_H
#define ARMY_BERSERKER_H

#include <iostream>
#include "Unit.h"
#include "Soldier.h"
#include "../states/NoMagicState.h"

class Berserker : public Soldier {
    public:
        Berserker(const std::string& name,
                  State* uState = new NoMagicState((int)HP::BERSERKER,(int)DMG::BERSERKER,(int)MHP::BERSERKER),
                  BaseAttack* uAttack = new BaseAttack(),
                  const std::string& form="Berserker");
        ~Berserker();
};

std::ostream& operator<<(std::ostream& out, Berserker& berserker);

#endif //ARMY_BERSERKER_H
