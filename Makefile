compile:
	g++ -std=c++0x attacks/BaseAttack.cpp -c
	g++ -std=c++0x attacks/MagicAttack.cpp -c
	g++ -std=c++0x attacks/VampireAttack.cpp -c
	g++ -std=c++0x spellBook/SpellBook.cpp -c
	g++ -std=c++0x states/State.cpp -c
	g++ -std=c++0x states/NoMagicState.cpp -c
	g++ -std=c++0x units/Unit.cpp -c
	g++ -std=c++0x units/Soldier.cpp -c
	g++ -std=c++0x units/Rogue.cpp -c
	g++ -std=c++0x units/Berserker.cpp -c
	g++ -std=c++0x units/Vampire.cpp -c
	g++ -std=c++0x spellCasters/SpellCaster.cpp -c

all: compile
	g++ -std=c++0x run.cpp *.o