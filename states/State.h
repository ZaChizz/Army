//
// Created by Admin on 01.01.2021.
//

#ifndef ARMY_STATE_H
#define ARMY_STATE_H

#include <iostream>
#include "../Config.h"
#include "UnitIsDead.h"

class Unit;

class State {
    private:
        int damage;
        int hitPoints;
        int hitPointsLimit;
        int magicHitPoints;
        int magicHitPointsLimit;
        int typeUnit;
        void isAlive();
        bool dead;
    public:
        State(int hp, int dmg, int mHp, int type = (int)TYPEUNIT::UNIT);
        virtual ~State();

        int getDamage() const;

        int getHitPoints() const;
        int getHitPointsLimit() const;

        int getMagicHitPoints() const;
        int getMagicHitPointsLimit() const;

        int getTypeUnit() const;
        bool getDead() const;

        void updateTypeUnit(const int type);
        void updateDamage(const int dmg);
        void setHitPoints(const int hp);
        void setMagicHitPoints(const int mHp);
        void setMagicDamage(const int mDmg);

        void takeDamage(const int dmg);
        virtual const void takeMagicDamage(const int mDmg);
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif //ARMY_STATE_H
