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

#include "../spellBook/SpellBook.h"

class MagicAttack;
class BaseAttack;

class SpellCaster : public Unit {
    private:
        SpellBook* sBook;
        State* uState;
        BaseAttack* uAttack;
    public:
        MagicAttack* mAttack;

        SpellCaster(const std::string& name,
                    State* uState,
                    BaseAttack* uAttack,
                    MagicAttack* mAttack,
                    SpellBook* sBook);
        ~SpellCaster();

        State& getState();

        BaseAttack& getAttack();

        void setAttack(BaseAttack* uAttack);

        SpellBook& getSpellBook() const;

        void spellAttack(Unit* enemy, const std::string& spellName);

};

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster);

#endif //ARMY_SPELL_CASTER_H
