//
// Created by Admin on 14.01.2021.
//

#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string& name, State* uState, BaseAttack* uAttack, MagicAttack* mAttack)
    :Unit(name, uState, uAttack) {
    this->mAttack = mAttack;
}

SpellCaster::~SpellCaster() {
    delete(this->mAttack);
}

void SpellCaster::spellAttack(Unit* enemy) {
    this->mAttack->attack(this, enemy);
}

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster) {
    out << spellCaster.getName() << ": "<< std::endl;
    out << spellCaster.getState() << std::endl;

    return out;
}