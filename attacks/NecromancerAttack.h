//
// Created by Admin on 05.03.2021.
//

#ifndef ARMY_NECROMANCER_ATTACK_H
#define ARMY_NECROMANCER_ATTACK_H

#include <iostream>
#include "../units/Unit.h"

class NecromancerAttack : public BaseAttack {
public:
    NecromancerAttack();
    virtual ~NecromancerAttack();

    virtual const void attack(Unit* attacker, Unit* enemy);
    virtual const void counterAttack(Unit* attacker, Unit* enemy);

};

#endif //ARMY_NECROMANCER_ATTACK_H
