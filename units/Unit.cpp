//
// Created by Admin on 14.12.2020.
//

#include "Unit.h"

Unit::Unit(const std::string& name) {
    this->name = name;
}

Unit::~Unit() {}

const std::string& Unit::getName() const {
    return this->name;
}


void Unit::attack(Unit* enemy) {
    this->getAttack().attack(this, enemy);
    this->getAttack().counterAttack(this, enemy);
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << unit.getName() <<":"<< std::endl;
    out << unit.getState() << std::endl;

    return out;
}
