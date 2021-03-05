//
// Created by Admin on 05.03.2021.
//

#include "NecromancerAttack.h"

NecromancerAttack::NecromancerAttack(): BaseAttack() {}
NecromancerAttack::~NecromancerAttack() {}

const void NecromancerAttack::attack(Unit* attacker, Unit* enemy) {
    enemy->getState().takeDamage(attacker->getState().getDamage());
    attacker->getObserverClient()->subscribeMe(attacker, enemy);
    enemy->onEventAction();
}

const void NecromancerAttack::counterAttack(Unit* attacker, Unit* enemy) {
    attacker->getState().takeDamage(enemy->getState().getDamage() / 2);
    enemy->onEventAction();
}
