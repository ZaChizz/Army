//
// Created by Admin on 05.01.2021.
//

#include "BaseAttack.h"

BaseAttack::BaseAttack() {};
BaseAttack::~BaseAttack() {};

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    enemy->getState().setDamage(attacker->getState().getDamage());
}

void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
    attacker->getState().setDamage(enemy->getState().getDamage() / 2);
}

