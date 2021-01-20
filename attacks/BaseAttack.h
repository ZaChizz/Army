//
// Created by Admin on 05.01.2021.
//
#ifndef BASE_ATTACK_H
#define BASE_ATTACK_H

#include <iostream>

#include "../units/Unit.h"

class Unit;

class BaseAttack {
    public:
        BaseAttack();
        ~BaseAttack();

        void attack(Unit* attacker, Unit* enemy);
        void counterAttack(Unit* attacker, Unit* enemy);

};

#endif //BASE_ATTACK_H
