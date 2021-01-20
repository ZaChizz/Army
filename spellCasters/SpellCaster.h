//
// Created by Admin on 14.01.2021.
//

#ifndef ARMY_SPELL_CASTER_H
#define ARMY_SPELL_CASTER_H

#include <iostream>
#include "../units/Unit.h"

#include "../states/State.h"

#include "../attacks/BaseAttack.h"
#include "../attacks/MagicAttack.h"

class MagicAttack;

class SpellCaster : public Unit {
    public:
        SpellCaster(const std::string& name, State* uState, BaseAttack* uAttack, MagicAttack* mAttack);
        ~SpellCaster();

        MagicAttack* mAttack;

        void spellAttack(Unit* enemy);

};

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster);

#endif //ARMY_SPELL_CASTER_H
