//
// Created by Admin on 03.04.2021.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "lib/catch.hpp"
#include "Config.h"
#include "units/Soldier.h"
#include "units/Rogue.h"
#include "units/Berserker.h"
#include "units/Vampire.h"
#include "units/Werewolf.h"
#include "spellCasters/SpellCaster.h"
#include "spellCasters/Necromancer.h"

//------Soldier tests------//
#include "units/tests/soldier/State.cpp"

//------Rogue tests------//
#include "units/tests/rogue/State.cpp"
#include "units/tests/rogue/ProtectedCounterAttack.cpp"

//------Berserker tests------//
#include "units/tests/berserker/State.cpp"
//#include "units/tests/berserker/ProtectedMagicAttack.cpp"

//------Vampire tests------//
#include "units/tests/vampire/State.cpp"

//------Werewolf tests------//
#include "units/tests/werewolf/State.cpp"
#include "units/tests/werewolf/Transform.cpp"
