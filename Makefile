compile:
	g++ -std=c++20 attacks/BaseAttack.cpp -c
	g++ -std=c++20 attacks/MagicAttack.cpp -c
	g++ -std=c++20 attacks/VampireAttack.cpp -c
	g++ -std=c++20 spellBook/SpellBook.cpp -c
	g++ -std=c++20 states/interfaces/ITransformState.cpp -c
	g++ -std=c++20 states/State.cpp -c
	g++ -std=c++20 states/NoMagicState.cpp -c
	g++ -std=c++20 states/TransformState.cpp -c
	g++ -std=c++20 units/Unit.cpp -c
	g++ -std=c++20 units/Soldier.cpp -c
	g++ -std=c++20 units/Rogue.cpp -c
	g++ -std=c++20 units/Berserker.cpp -c
	g++ -std=c++20 units/Vampire.cpp -c
	g++ -std=c++20 spellCasters/SpellCaster.cpp -c

all: compile
	g++ -std=c++20 run.cpp *.o