//
// Created by Admin on 05.03.2021.
//

#ifndef ARMY_UNIT_IS_DEAD_H
#define ARMY_UNIT_IS_DEAD_H

#include <iostream>

class UnitIsDead {
public:
    UnitIsDead(std::string exp);
    ~UnitIsDead()=default;

    std::string exp;
};

#endif //ARMY_UNIT_IS_DEAD_H
