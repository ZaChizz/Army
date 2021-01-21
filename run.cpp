//
// Created by Admin on 14.12.2020.
//

#include <iostream>

#include "units/Unit.h"
#include "units/Soldier.h"
#include "units/Rogue.h"
#include "spellCasters/SpellCaster.h"

int main() {
    std::map <std::string, int> book;
    book["magicHit10"] = 10;
    book["magicHit5"] = 5;

    SpellCaster* wizard = new SpellCaster ("Wizard",
                                           new State(50,20,30),
                                           new BaseAttack(),
                                           new MagicAttack(),
                                           new SpellBook(book)
                                           );
    Unit* barbarian = new Unit ("Barbarian rogue",
                                new State(50,20,30),
                                new BaseAttack());
    Soldier* goga = new Soldier ("Goga",
                                 new State(40,16,20),
                                 new BaseAttack());
    Rogue* knight = new Rogue ("Knight",
                               new State(50,20,30),
                               new BaseAttack());

    std::cout << *wizard << std::endl;
    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    std::cout << *knight << std::endl;

    std::cout << "----Fight----" << std::endl;

    goga->attack(barbarian);
    knight->attack(goga);
    wizard->spellAttack(barbarian,"magicHit10");
    barbarian->attack(wizard);

    std::cout << *wizard << std::endl;
    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    std::cout << *knight << std::endl;

    return 0;
}

