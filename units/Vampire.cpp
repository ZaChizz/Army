//
// Created by Admin on 23.01.2021.
//

#include "Vampire.h"

Vampire::Vampire(const std::string& name, State* uState, BaseAttack* uAttack)
        : Unit(name) {
        this->uState = uState;
        this->uAttack = uAttack;
}

Vampire::~Vampire() {
    delete(this->uState);
    delete(this->uAttack);
}

State& Vampire::getState() {
    return *(this->uState);
}

BaseAttack& Vampire::getAttack() {
    return *(this->uAttack);
}

void Vampire::setAttack(BaseAttack* uAttack) {
    this->uAttack = uAttack;
}

std::ostream& operator<<(std::ostream& out, Vampire& vampire) {
    out << vampire.getName() <<": "<< std::endl;
    out << vampire.getState() << std::endl;

    return out;
}
