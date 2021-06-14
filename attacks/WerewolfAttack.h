//
// Created by Admin on 05.03.2021.
//

#ifndef ARMY_WEREWOLF_ATTACK_H
#define ARMY_WEREWOLF_ATTACK_H

#include <iostream>
#include "../units/Unit.h"

class WerewolfAttack : public BaseAttack {
public:
    WerewolfAttack();
    virtual ~WerewolfAttack();

    virtual const void attack(Unit* attacker, Unit* enemy);
    virtual const void counterAttack(Unit* attacker, Unit* enemy);

};

#endif //ARMY_WEREWOLF_ATTACK_H
