//
// Created by Admin on 13.01.2021.
//

#include "Soldier.h"

Soldier::Soldier(const std::string& name, State* uState, BaseAttack* uAttack)
    : Unit(name) {
    this->uMultiState = nullptr;
    this->uState = uState;
    this->uAttack = uAttack;
}

Soldier::~Soldier() {
    delete(this->uState);
    delete(this->uAttack);
    if(this->uMultiState != nullptr) {
        delete(this->uMultiState);
    }
}

State& Soldier::getState() {
    return *(this->uState);
}

BaseAttack& Soldier::getAttack() {
    return *(this->uAttack);
}

State* Soldier::getStateP() {
    return this->uState;
}

ITransformState* Soldier::getMultiState() {
    return this->uMultiState;
}

void Soldier::setAttack(BaseAttack* uAttack) {
    delete(this->uAttack);
    this->uAttack = uAttack;
}

void Soldier::setState(State* uState) {
    this->uState = uState;
}

void Soldier::setMultiState(ITransformState* transformState) {
    this->uMultiState = transformState;
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    out << soldier.getName() <<": "<< std::endl;
    out << soldier.getState() << std::endl;

    return out;
}
