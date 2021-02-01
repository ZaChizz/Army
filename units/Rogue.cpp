//
// Created by Admin on 13.01.2021.
//

#include "Rogue.h"

Rogue::Rogue(const std::string& name, State* uState, BaseAttack* uAttack)
    :Unit(name) {
    this->uState = uState;
    this->uAttack = uAttack;
};
Rogue::~Rogue() {
    delete(this->uState);
};

State& Rogue::getState() {
    return *(this->uState);
}

BaseAttack& Rogue::getAttack() {
    return *(this->uAttack);
}

void Rogue::attack(Unit* enemy) {
    this->getAttack().attack(this, enemy);
}

void Rogue::setAttack(BaseAttack* uAttack) {
    delete(this->uAttack);
    this->uAttack = uAttack;
}

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
    out << rogue.getName() <<": "<< std::endl;
    out << rogue.getState() << std::endl;

    return out;
};