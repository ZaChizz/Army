//
// Created by Admin on 23.01.2021.
//

#ifndef ARMY_VAMPIRE_ATTACK_H
#define ARMY_VAMPIRE_ATTACK_H

#include <iostream>
#include "../units/Unit.h"

class Vampire;

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        virtual ~VampireAttack();

        virtual const void attack(Unit* attacker, Unit* enemy);
        virtual const void counterAttack(Unit* attacker, Unit* enemy);

        void biteAttack(Unit* enemy);
};

#endif //ARMY_VAMPIRE_ATTACK_H
