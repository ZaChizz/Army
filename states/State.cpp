//
// Created by Admin on 02.01.2021.
//

#include "State.h"

State::State ( int hp, int dmg ) {
    this->hitPoints = hp;
    this->damage = dmg;
    this->hitPointsLimit = hp;
}

State::~State() {}

void State::isAlive() {
    if ( this->hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

int State::getDamage() const {
    return this->damage;
}

int State::getHitPoints() const {
    return this->hitPoints;
}

int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

void State::setHitPoints(const int hp) {
    this->isAlive();

    this->hitPoints += hp;
    if ( this->hitPoints > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }
}

void State::setDamage(const int dmg) {
    this->isAlive();

    if ( dmg >= this->hitPoints ) {
        this->hitPoints = 0;
    } else {
        this->hitPoints -= dmg;
    }
}

std::ostream& operator<<(std::ostream& out, const State& state) {
    if ( state.getHitPoints() == 0 ) {
        out << " Dead " << std::endl;
    } else {
        out << "HitPoints - " << state.getHitPoints() << std::endl;
        out << "Damage - " << state.getDamage() << std::endl;
    }
    return out;
}

