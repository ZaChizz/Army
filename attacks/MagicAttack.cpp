//
// Created by Admin on 19.01.2021.
//

#include "MagicAttack.h"

MagicAttack::MagicAttack() {};
MagicAttack::~MagicAttack() {};

void MagicAttack::attack(SpellCaster* attacker, Unit* enemy) {
    enemy->getState().setMagicDamage(5);
}
