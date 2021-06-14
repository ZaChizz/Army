//
// Created by Admin on 19.01.2021.
//

#include "MagicAttack.h"

MagicAttack::MagicAttack() {};
MagicAttack::~MagicAttack() {};

void MagicAttack::attack(SpellCaster* attacker, Unit* enemy, const int mDmg) {
    enemy->getState().takeMagicDamage(mDmg);
    enemy->onEventAction();
}
