//
// Created by Admin on 14.12.2020.
//

#include <iostream>

#include "units/Soldier.h"
#include "units/Rogue.h"
#include "units/Berserker.h"
#include "units/Vampire.h"
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
    Berserker* barbarian = new Berserker ("Barbarian rogue",
                                new NoMagicState(50,20,30),
                                new BaseAttack());
    Vampire* goga = new Vampire ("Goga",
                                 new State(40,16,20),
                                 new VampireAttack());
    Rogue* knight = new Rogue ("Knight",
                               new State(50,20,30),
                               new BaseAttack());

    Berserker* tuze = new Berserker("Tuze",
                                    new NoMagicState(50,20,20),
                                    new BaseAttack());

    //std::cout << *wizard << std::endl;
    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    //std::cout << *knight << std::endl;
    //std::cout << *tuze << std::endl;

    std::cout << "----Fight----" << std::endl;

    goga->attack(barbarian);
    //knight->attack(goga);
    //wizard->spellAttack(barbarian,"magicHit10");
    //barbarian->attack(wizard);
    wizard->spellAttack(tuze,"magicHit10");
    //knight->attack(tuze);

    //std::cout << *wizard << std::endl;
    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    //std::cout << *knight << std::endl;
    //std::cout << *tuze << std::endl;

    return 0;
}

