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
            State* uState = new State((int)HP::SOLDIER,(int)DMG::SOLDIER,(int)MHP::SOLDIER),
            BaseAttack* uAttack = new WerewolfAttack(),
            const std::string& form = "Werewolf",
            ITransformState* uMultiState = new TransformState(new State((int)HP::ROGUE,(int)DMG::ROGUE,(int)MHP::ROGUE)));
    ~Werewolf();
};

std::ostream& operator<<(std::ostream& out, Werewolf& werewolf);

#endif //ARMY_WEREWOLF_H
