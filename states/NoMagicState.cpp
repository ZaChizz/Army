//
// Created by Admin on 22.01.2021.
//

#include "NoMagicState.h"

NoMagicState::NoMagicState(int hp, int dmg, int mHp, int type )
    :State(hp, dmg, mHp, type) {};

NoMagicState::~NoMagicState() {};

const void NoMagicState::takeMagicDamage(const int mDmg) {
}

std::ostream& operator<<(std::ostream& out, const NoMagicState& noMagicState) {
    if ( noMagicState.getHitPoints() == 0 || noMagicState.getMagicHitPoints() == 0 ) {
        out << " Dead " << std::endl;
    } else {
        out << "HitPoints - " << noMagicState.getHitPoints() << std::endl;
        out << "MagicHitPoints - " << noMagicState.getMagicHitPoints() << std::endl;
        out << "Damage - " << noMagicState.getDamage() << std::endl;
    }
    return out;
}
