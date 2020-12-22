//
// Created by Admin on 14.12.2020.
//

#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->name = name;
    this->hitPoints = hp;
    this->damage = dmg;
    this->hitPointsLimit = hp;
}

Unit::~Unit() {}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::ensureIsAlive() {
    if ( this->hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();

    this->hitPoints += hp;
    if ( this->hitPoints > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();

    if ( dmg >= this->hitPoints ) {
        this->hitPoints = 0;
    } else {
        this->hitPoints -= dmg;
    }
}

void Unit::attack(Unit& enemy) {
    ensureIsAlive();

    enemy.takeDamage(this->getDamage());
    enemy.counterAttack(*this);
}

void Unit::counterAttack(Unit& enemy) {
    ensureIsAlive();

    enemy.takeDamage(this->getDamage()/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    if ( unit.getHitPoints() == 0 ) {
        out << "Dead" << std::endl;
    } else {
        out << unit.getName() << std::endl;
        out << "HitPoints - " << unit.getHitPoints() << std::endl;
    }

    return out;
}
