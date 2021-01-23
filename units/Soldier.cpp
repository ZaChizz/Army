//
// Created by Admin on 13.01.2021.
//

#include "Soldier.h"

Soldier::Soldier(const std::string& name, State* uState, BaseAttack* uAttack)
    : Unit(name, uAttack) {
    this->uState = uState;

};
Soldier::~Soldier() {};

State& Soldier::getState() {
    return *(this->uState);
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    out << soldier.getName() <<": "<< std::endl;
    out << soldier.getState() << std::endl;

    return out;
};
