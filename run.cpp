//
// Created by Admin on 14.12.2020.
//

#include <iostream>

#include "units/Unit.h"
#include "units/Soldier.h"
#include "units/Rogue.h"

int main() {

    Unit* barbarian = new Unit ("Barbarian rogue", new State(50,20), new BaseAttack());
    Soldier* goga = new Soldier ("Goga", new State(40,16), new BaseAttack());
    Rogue* knight = new Rogue ("Knight", new State(50,20), new BaseAttack());

    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    std::cout << *knight << std::endl;

    std::cout << "----Fight----" << std::endl;

    goga->attack(barbarian);
    knight->attack(goga);

    std::cout << *barbarian << std::endl;
    std::cout << *goga << std::endl;
    std::cout << *knight << std::endl;

    return 0;
}

