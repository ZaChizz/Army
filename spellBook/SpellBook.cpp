//
// Created by Admin on 20.01.2021.
//

#include "SpellBook.h"

SpellBook::SpellBook(const std::map <std::string, int>& spells) {
    this->spells = spells;
}

SpellBook::~SpellBook() {}

std::map <std::string, int>& SpellBook::getSpells() {
    return this->spells;
}

int SpellBook::getSpell(const std::string& name) {
    std::map <std::string, int> :: iterator it;
    it = this->spells.find(name);

    if ( it == this->spells.end() ) {
        return 0;
    } else {
        return it->second;
    }
}

std::ostream& operator<<(std::ostream& out, SpellBook& spellBook) {
    out << "SpellBook" << std::endl;

    std::map <std::string, int> :: iterator it = spellBook.getSpells().begin();
    for ( int i = 0; it != spellBook.getSpells().end(); it++, i++ ) {
        out << "Spell name: " << it->first << std::endl;
        out << "Spell value: " << it->second << std::endl;
        out << "---------------" << std::endl;
    }

    return out;
}


