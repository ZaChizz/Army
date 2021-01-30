//
// Created by Admin on 22.01.2021.
//

#include "Berserker.h"

Berserker::Berserker(const std::string& name, State* uState, BaseAttack* uAttack)
    :Unit(name) {
    this->uState = uState;
    this->uAttack = uAttack;
}

Berserker::~Berserker() {
    delete(this->uState);
}

State& Berserker::getState() {
    return *(this->uState);
}

BaseAttack& Berserker::getAttack() {
    return *(this->uAttack);
}

void Berserker::setAttack(BaseAttack* uAttack) {
    this->uAttack = uAttack;
}

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
    out << berserker.getName() <<": "<< std::endl;
    out << berserker.getState() << std::endl;

    return out;
}
