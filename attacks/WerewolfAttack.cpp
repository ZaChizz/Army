//
// Created by Admin on 05.03.2021.
//

#include "WerewolfAttack.h"
#include "../states/TransformState.h"

WerewolfAttack::WerewolfAttack(): BaseAttack() {}
WerewolfAttack::~WerewolfAttack() {}

const void WerewolfAttack::attack(Unit* attacker, Unit* enemy) {
    enemy->getState().takeDamage(attacker->getState().getDamage());
    ITransformState* multiState = new TransformState(new State((int)HP::WEREWOLF_WOLF,(int)DMG::WEREWOLF_WOLF,(int)MHP::WEREWOLF_WOLF));
    enemy->setMultiState(multiState);
    enemy->onEventAction();
}

const void WerewolfAttack::counterAttack(Unit* attacker, Unit* enemy) {
    attacker->getState().takeDamage(enemy->getState().getDamage() / 2);
    enemy->onEventAction();
}
