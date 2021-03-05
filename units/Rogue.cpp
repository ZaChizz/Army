//
// Created by Admin on 13.01.2021.
//

#include "Rogue.h"

Rogue::Rogue(const std::string& name, State* uState, BaseAttack* uAttack, const std::string& form)
    :Soldier(name, uState, uAttack, form) {
}

Rogue::~Rogue() {}

void Rogue::attack(Unit* enemy) {
    this->getAttack().attack(this, enemy);
    enemy->onEventAction();
}

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
    out << rogue.getName() << " - " << rogue.getForm() << ": " <<std::endl;
    out << rogue.getState() << std::endl;

    return out;
}