//
// Created by Admin on 14.12.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>
#include "../states/State.h"
#include "../attacks/BaseAttack.h"

class BaseAttack;

class Unit {
    private:
        std::string name;
    public:
        Unit(const std::string& name);
        ~Unit();

        virtual State& getState()=0;

        virtual BaseAttack& getAttack()=0;

        void attack(Unit* enemy);

        const std::string& getName() const;

};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif //ARMY_UNIT_H
