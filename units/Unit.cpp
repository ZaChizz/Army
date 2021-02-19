//
// Created by Admin on 14.12.2020.
//

#include "Unit.h"

Unit::Unit() {}
Unit::~Unit() {}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << unit.getName() << " - " << std::endl;
    out << unit.getForm() << ": " <<std::endl;
    out << unit.getState() << std::endl;

    return out;
}
