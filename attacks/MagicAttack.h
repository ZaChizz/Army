//
// Created by Admin on 19.01.2021.
//

#ifndef ARMY_MAGIC_ATTACK_H
#define ARMY_MAGIC_ATTACK_H

#include <iostream>

#include "../spellCasters/SpellCaster.h"

class SpellCaster;

class MagicAttack {
    public:
        MagicAttack();
        ~MagicAttack();

        void attack(SpellCaster* attacker, Unit* enemy);
};

#endif //ARMY_MAGIC_ATTACK_H
