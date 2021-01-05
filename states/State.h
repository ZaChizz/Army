//
// Created by Admin on 01.01.2021.
//

#ifndef ARMY_STATE_H
#define ARMY_STATE_H

#include <iostream>

class UnitIsDead {};

class State {
    private:
        int damage;
        int hitPoints;
        int hitPointsLimit;
        void isAlive();
    public:
        State( int hp, int dmg );
        ~State();

        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;

        void setHitPoints(const int hp);
        void setDamage(const int dmg);
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif //ARMY_STATE_H
