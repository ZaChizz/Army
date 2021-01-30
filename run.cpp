//
// Created by Admin on 14.12.2020.
//

#include <iostream>
#include <typeinfo>
#include "units/Soldier.h"
#include "units/Rogue.h"
#include "units/Berserker.h"
#include "units/Vampire.h"
#include "spellCasters/SpellCaster.h"
#include "Config.h"

int main() {
    std::map <std::string, int> book;
    book["magicHit10"] = (int)SPELLBOOK::MAGICHIT10;
    book["magicHit5"] = (int)SPELLBOOK::MAGICHIT5;

    SpellCaster* wizard = new SpellCaster ("Wizard",
                                           new State((int)HP::SPELLCASTER,(int)DMG::SPELLCASTER,(int)MHP::SPELLCASTER),
                                           new BaseAttack(),
                                           new MagicAttack(),
                                           new SpellBook(book)
                                           );
    Berserker* barbarian = new Berserker ("Barbarian berserker",
                                new NoMagicState((int)HP::SOLDIER,(int)DMG::SOLDIER,(int)MHP::SOLDIER),
                                new BaseAttack());
    Vampire* goga = new Vampire ("Goga",
                                 new State((int)HP::VAMPIRE,(int)DMG::VAMPIRE,(int)MHP::VAMPIRE,(int)TYPEUNIT::UNDEAD),
                                 new VampireAttack());
    Rogue* knight = new Rogue ("Knight",
                               new State((int)HP::ROGUE,(int)DMG::ROGUE,(int)MHP::ROGUE),
                               new BaseAttack());

    Berserker* tuze = new Berserker("Tuze",
                                    new NoMagicState((int)HP::BERSERKER,(int)DMG::BERSERKER,(int)MHP::BERSERKER),
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
    barbarian->attack(knight);
    wizard->spellAttack(tuze,"magicHit10");
    wizard->spellAttack(barbarian,"magicHit10");
    //knight->attack(tuze);

    //std::cout << *wizard << std::endl;
    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    std::cout << *knight << std::endl;
    std::cout << *tuze << std::endl;

    return 0;
}

