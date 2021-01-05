//
// Created by Admin on 14.12.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>
#include "../states/State.h"

class Unit {
    private:
        std::string name;
        State* uState;
    public:
        Unit(const std::string& name, State* uState);
        ~Unit();

        State& getState() const;

        const std::string& getName() const;

};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //ARMY_UNIT_H
