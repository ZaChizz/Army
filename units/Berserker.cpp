//
// Created by Admin on 22.01.2021.
//

#include "Berserker.h"

Berserker::Berserker(const std::string& name, NoMagicState* uState, BaseAttack* uAttack)
    :Unit(name, uAttack) {
    this->uState = uState;
}

Berserker::~Berserker() {}

NoMagicState& Berserker::getState() {
    return *(this->uState);
}

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
    out << berserker.getName() <<": "<< std::endl;
    out << berserker.getState() << std::endl;

    return out;
}
