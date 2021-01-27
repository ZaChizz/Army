//
// Created by Admin on 13.01.2021.
//

#include "Soldier.h"

Soldier::Soldier(const std::string& name, State* uState, BaseAttack* uAttack)
    : Unit(name) {
    this->uState = uState;
    this->uAttack = uAttack;

};
Soldier::~Soldier() {
    delete(this->uState);
};

State& Soldier::getState() {
    return *(this->uState);
}

BaseAttack& Soldier::getAttack() {
    return *(this->uAttack);
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    out << soldier.getName() <<": "<< std::endl;
    out << soldier.getState() << std::endl;

    return out;
};
