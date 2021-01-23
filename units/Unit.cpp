//
// Created by Admin on 14.12.2020.
//

#include "Unit.h"

Unit::Unit(const std::string& name, BaseAttack* uAttack) {
    this->name = name;
    this->uAttack = uAttack;
}

Unit::~Unit() {
    delete(this->uState);
    delete(this->uAttack);
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::attack(Unit* enemy) {
    this->uAttack->attack(this, enemy);
    this->uAttack->counterAttack(this, enemy);
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << unit.getName() <<": "<< std::endl;
    out << unit.getState() << std::endl;

    return out;
}
