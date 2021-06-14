//
// Created by Admin on 01.04.2021.
//

#ifndef ARMY_WEREWOLF_H
#define ARMY_WEREWOLF_H

#include <iostream>
#include "Unit.h"
#include "Soldier.h"
#include "../attacks/WerewolfAttack.h"
#include "../states/TransformState.h"

class WerewolfAttack;

class Werewolf : public Soldier {
public:
    Werewolf(const std::string& name,
            State* uState = new State((int)HP::WEREWOLF_HUMAN,(int)DMG::WEREWOLF_HUMAN,(int)MHP::WEREWOLF_HUMAN),
            BaseAttack* uAttack = new WerewolfAttack(),
            const std::string& form = "Werewolf",
            ITransformState* uMultiState = new TransformState(new State((int)HP::WEREWOLF_WOLF,(int)DMG::WEREWOLF_WOLF,(int)MHP::WEREWOLF_WOLF)));
    ~Werewolf();
};

std::ostream& operator<<(std::ostream& out, Werewolf& werewolf);

#endif //ARMY_WEREWOLF_H
