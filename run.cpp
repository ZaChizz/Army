//
// Created by Admin on 14.12.2020.
//

#include <iostream>

#include "units/Unit.h"
#include "units/Soldier.h"

int main() {

    Unit* barbarian = new Unit ("Barbarian", new State(50,20), new BaseAttack());
    Unit* knight = new Soldier ("Knight", new State(40,16), new BaseAttack());

    std::cout << *barbarian << std::endl;
    std::cout << *knight << std::endl;

    barbarian->attack(knight);

    std::cout << *barbarian << std::endl;
    std::cout << *knight << std::endl;

    return 0;
}

