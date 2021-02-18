//
// Created by Admin on 22.01.2021.
//

#include "Berserker.h"

Berserker::Berserker(const std::string& name, State* uState, BaseAttack* uAttack)
    :Unit(name) {
    this->uMultiState = nullptr;
    this->uState = uState;
    this->uAttack = uAttack;
}

Berserker::~Berserker() {
    delete(this->uState);
    delete(this->uAttack);
    if(this->uMultiState != nullptr) {
        delete(this->uMultiState);
    }
}

State& Berserker::getState() {
    return *(this->uState);
}

State* Berserker::getStateP() {
    return this->uState;
}

BaseAttack& Berserker::getAttack() {
    return *(this->uAttack);
}

ITransformState* Berserker::getMultiState() {
    return this->uMultiState;
}

void Berserker::setState(State* uState) {
    this->uState = uState;
}

void Berserker::setAttack(BaseAttack* uAttack) {
    delete(this->uAttack);
    this->uAttack = uAttack;
}

void Berserker::setMultiState(ITransformState* transformState) {
    this->uMultiState = transformState;
}

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
    out << berserker.getName() <<": "<< std::endl;
    out << berserker.getState() << std::endl;

    return out;
}
