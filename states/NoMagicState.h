//
// Created by Admin on 22.01.2021.
//

#ifndef ARMY_NO_MAGIC_STATE_H
#define ARMY_NO_MAGIC_STATE_H

#include <iostream>
#include "State.h"

class NoMagicState : public State {
    public:
        NoMagicState(int hp, int dmg, int mHp);
        ~NoMagicState();

        virtual const void takeMagicDamage(const int mDmg);
};

std::ostream& operator<<(std::ostream& out, const NoMagicState& noMagicState);

#endif //ARMY_NO_MAGIC_STATE_H
