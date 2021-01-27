compile:
	g++ attacks/BaseAttack.cpp -c
	g++ attacks/MagicAttack.cpp -c
	g++ attacks/VampireAttack.cpp -c
	g++ spellBook/SpellBook.cpp -c
	g++ states/State.cpp -c
	g++ states/NoMagicState.cpp -c
	g++ units/Unit.cpp -c
	g++ units/Soldier.cpp -c
	g++ units/Rogue.cpp -c
	g++ units/Berserker.cpp -c
	g++ units/Vampire.cpp -c
	g++ spellCasters/SpellCaster.cpp -c

all: compile
	g++ run.cpp *.o