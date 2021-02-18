//
// Created by Admin on 23.01.2021.
//

#include "Vampire.h"

Vampire::Vampire(const std::string& name, State* uState, BaseAttack* uAttack)
        : Unit(name) {
        this->uMultiState = nullptr;
        this->uState = uState;
        this->uAttack = uAttack;
}

Vampire::~Vampire() {
    delete(this->uState);
    delete(this->uAttack);
    if(this->uMultiState != nullptr) {
        delete(this->uMultiState);
    }
}

State& Vampire::getState() {
    return *(this->uState);
}

State* Vampire::getStateP() {
    return this->uState;
}

BaseAttack& Vampire::getAttack() {
    return *(this->uAttack);
}

ITransformState* Vampire::getMultiState() {
    return this->uMultiState;
}

void Vampire::setState(State* uState) {
    this->uState = uState;
}

void Vampire::setAttack(BaseAttack* uAttack) {
    delete(this->uAttack);
    this->uAttack = uAttack;
}

void Vampire::setMultiState(ITransformState* transformState) {
    this->uMultiState = transformState;
}

std::ostream& operator<<(std::ostream& out, Vampire& vampire) {
    out << vampire.getName() <<": "<< std::endl;
    out << vampire.getState() << std::endl;

    return out;
}
