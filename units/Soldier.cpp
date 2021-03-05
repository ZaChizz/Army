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
    this->uObserverServer = new ObserverServer();
    this->uObserverClient = new ObserverClient();
    this->form = form;
}

Soldier::~Soldier() {
    delete(this->uState);
    delete(this->uAttack);
    delete(this->uObserverServer);
    delete(this->uObserverClient);
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

IObserverServer* Soldier::getObserver() {
    return this->uObserverServer;
}

ObserverServer& Soldier::getObserverRef() {
    return *(this->uObserverServer);
}

IObserverClient* Soldier::getObserverClient() {
    return this->uObserverClient;
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

void Soldier::gestalt() {

    auto m = this->getObserver()->getList();

    for (const auto& [unit, ptr] : m) {
        ptr->getState().setHitPoints(this->getState().getHitPointsLimit()/3);
        ptr->getState().setMagicHitPoints(this->getState().getMagicHitPointsLimit()/3);
    }
    this->getObserver()->clear();
}

void Soldier::onEventAction() {
    if ( this->getState().getDead() ) {
        this->gestalt();
    }
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    out << soldier.getName() << " - " << soldier.getForm() << ": " <<std::endl;
    out << soldier.getState() << std::endl;
    out << soldier.getObserverRef() << std::endl;
    return out;
}
