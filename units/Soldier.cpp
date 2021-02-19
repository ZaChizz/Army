//
// Created by Admin on 13.01.2021.
//

#include "Soldier.h"

Soldier::Soldier(const std::string& name, State* uState, BaseAttack* uAttack, const std::string& form)
    : Unit() {
    this->uMultiState = nullptr;
    this->name = name;
    this->uState = uState;
    this->uAttack = uAttack;
    this->form = form;
}

Soldier::~Soldier() {
    delete(this->uState);
    delete(this->uAttack);
    if(this->uMultiState != nullptr) {
        delete(this->uMultiState);
    }
}

std::string& Soldier::getName() {
    return this->name;
}

std::string& Soldier::getForm() {
    return this->form;
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

void Soldier::setMultiState(ITransformState* uMultiState) {
    this->uMultiState = uMultiState;
}

void Soldier::attack(Unit* enemy) {
    this->getAttack().attack(this, enemy);
    this->getAttack().counterAttack(this, enemy);
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    out << soldier.getName() << " - " << soldier.getForm() << ": " <<std::endl;
    out << soldier.getState() << std::endl;

    return out;
}
