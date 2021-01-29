//
// Created by Admin on 23.01.2021.
//

#include "VampireAttack.h"

VampireAttack::VampireAttack() : BaseAttack() {}
VampireAttack::~VampireAttack() {}

const void VampireAttack::attack(Unit* attacker, Unit* enemy) {
    enemy->getState().takeDamage(attacker->getState().getDamage());
    enemy->getState().updateDamage(3);
}

const void VampireAttack::counterAttack(Unit* attacker, Unit* enemy) {
    attacker->getState().takeDamage(enemy->getState().getDamage() / 2);
    enemy->getState().updateDamage(3);
}