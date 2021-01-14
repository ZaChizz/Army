//
// Created by Admin on 13.01.2021.
//

#include "Rogue.h"

Rogue::Rogue(const std::string& name, State* uState, BaseAttack* uAttack)
    :Unit(name, uState, uAttack) {
};
Rogue::~Rogue() {};

void Rogue::attack(Unit* enemy) {
    this->uAttack->attack(this, enemy);
}

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
    out << rogue.getName() <<": "<< std::endl;
    out << rogue.getState() << std::endl;

    return out;
};