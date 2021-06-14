//
// Created by Admin on 05.03.2021.
//

#ifndef ARMY_NECROMANCER_H
#define ARMY_NECROMANCER_H

#include <iostream>
#include "SpellCaster.h"
#include "../attacks/NecromancerAttack.h"

class Necromancer : public SpellCaster {
public:
    Necromancer(const std::string& name,
                State* uState,
                BaseAttack* uAttack,
                MagicAttack* mAttack,
                SpellBook* sBook,
                const std::string& form = "Necromancer");

    virtual ~Necromancer()=default;
};

std::ostream& operator<<(std::ostream& out, Necromancer& necromancer);

#endif //ARMY_NECROMANCER_H

