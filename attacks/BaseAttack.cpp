//
// Created by Admin on 05.01.2021.
//

#include "BaseAttack.h"

BaseAttack::BaseAttack() {};
BaseAttack::~BaseAttack() {};

const void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    enemy->getState().takeDamage(attacker->getState().getDamage());
}

const void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
    attacker->getState().takeDamage(enemy->getState().getDamage() / 2);
}
