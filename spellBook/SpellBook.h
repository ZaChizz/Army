//
// Created by Admin on 20.01.2021.
//

#ifndef ARMY_SPELL_BOOK_H
#define ARMY_SPELL_BOOK_H

#include <iostream>
#include <map>

class SpellBook {
    private:
        std::map <std::string, int> spells;
    public:
        SpellBook(const std::map <std::string, int>& spells);
        ~SpellBook();

        std::map <std::string, int>& getSpells();
        int getSpell(const std::string& name);
};

std::ostream& operator<<(std::ostream& out, SpellBook& spellBook);

#endif //ARMY_SPELL_BOOK_H
