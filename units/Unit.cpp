//
// Created by Admin on 14.12.2020.
//

#include "Unit.h"

Unit::Unit(const std::string& name, State* uState, BaseAttack* uAttack) {
    this->name = name;
    this->uState = uState;
    this->uAttack = uAttack;
}

Unit::~Unit() {
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::attack(Unit* enemy) {
    this->uAttack->attack(this, enemy);
    this->uAttack->counterAttack(this, enemy);
}

State& Unit::getState() const {
    return *(this->uState);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() <<": "<< std::endl;
    out << unit.getState() << std::endl;

    return out;
}
