//
// Created by Admin on 14.12.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>

class UnitIsDead {};

class Unit {
    private:
        int damage;
        int hitPoints;
        int hitPointsLimit;
        std::string name;
        void ensureIsAlive();
    public:
        Unit(const std::string& name, int hp, int dmg);
        ~Unit();

        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;

        void addHitPoints(int hp);
        void takeDamage(int dmg);

        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //ARMY_UNIT_H
