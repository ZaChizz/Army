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
        State* uState;
    public:
        Unit(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Unit();

        State& getState() const;

        BaseAttack* uAttack;

        void attack(Unit* enemy);

        const std::string& getName() const;

};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif //ARMY_UNIT_H
