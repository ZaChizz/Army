//
// Created by Admin on 13.01.2021.
//

#include "Rogue.h"

Rogue::Rogue(const std::string& name, State* uState, BaseAttack* uAttack)
    :Unit(name) {
    this->uMultiState = nullptr;
    this->uState = uState;
    this->uAttack = uAttack;
}

Rogue::~Rogue() {
    delete(this->uState);
    delete(this->uAttack);
    if(this->uMultiState != nullptr) {
        delete(this->uMultiState);
    }
}

State& Rogue::getState() {
    return *(this->uState);
}

BaseAttack& Rogue::getAttack() {
    return *(this->uAttack);
}

State* Rogue::getStateP() {
    return this->uState;
}

ITransformState* Rogue::getMultiState() {
    return this->uMultiState;
}

void Rogue::attack(Unit* enemy) {
    this->getAttack().attack(this, enemy);
}

void Rogue::setState(State* uState) {
    this->uState = uState;
}

void Rogue::setAttack(BaseAttack* uAttack) {
    delete(this->uAttack);
    this->uAttack = uAttack;
}

void Rogue::setMultiState(ITransformState* transformState) {
    this->uMultiState = transformState;
}

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
    out << rogue.getName() <<": "<< std::endl;
    out << rogue.getState() << std::endl;

    return out;
}