//
// Created by Admin on 14.01.2021.
//

#include "SpellCaster.h"


SpellCaster::SpellCaster(const std::string& name,
                         State* uState,
                         BaseAttack* uAttack,
                         MagicAttack* mAttack,
                         SpellBook* sBook)
    :Unit(name) {
    this->uMultiState = nullptr;
    this->mAttack = mAttack;
    this->uAttack = uAttack;
    this->sBook = sBook;
    this->uState = uState;
}

SpellCaster::~SpellCaster() {
    delete(this->mAttack);
    delete(this->uAttack);
    delete(this->uState);
    delete(this->sBook);
    if(this->uMultiState != nullptr) {
        delete(this->uMultiState);
    }
}

State& SpellCaster::getState() {
    return *(this->uState);
}

State* SpellCaster::getStateP() {
    return this->uState;
}

BaseAttack& SpellCaster::getAttack() {
    return *(this->uAttack);
}

SpellBook& SpellCaster::getSpellBook() const {
    return *(this->sBook);
}

ITransformState* SpellCaster::getMultiState() {
    return this->uMultiState;
}

void SpellCaster::setState(State* uState) {
    this->uState = uState;
}

void SpellCaster::setAttack(BaseAttack* uAttack) {
    delete(this->uAttack);
    this->uAttack = uAttack;
}

void SpellCaster::setMultiState(ITransformState* transformState) {
    this->uMultiState = transformState;
}

void SpellCaster::spellAttack(Unit* enemy, const std::string& spellName) {
    int mDmg = this->getSpellBook().getSpell(spellName);
    this->mAttack->attack(this, enemy, mDmg);
}

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster) {
    out << spellCaster.getName() << ": "<< std::endl;
    out << spellCaster.getState() << std::endl;

    return out;
}