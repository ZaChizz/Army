compile:
	g++ -std=c++20 observer/interfaces/IObserverClient.cpp -c
	g++ -std=c++20 observer/interfaces/IObserverServer.cpp -c
	g++ -std=c++20 observer/interfaces/IUnitObserver.cpp -c
	g++ -std=c++20 observer/interfaces/IUnitObserverClient.cpp -c
	g++ -std=c++20 observer/ObserverClient.cpp -c
	g++ -std=c++20 observer/ObserverServer.cpp -c
	g++ -std=c++20 attacks/BaseAttack.cpp -c
	g++ -std=c++20 attacks/MagicAttack.cpp -c
	g++ -std=c++20 attacks/VampireAttack.cpp -c
	g++ -std=c++20 attacks/NecromancerAttack.cpp -c
	g++ -std=c++20 attacks/WerewolfAttack.cpp -c
	g++ -std=c++20 spellBook/SpellBook.cpp -c
	g++ -std=c++20 states/interfaces/IUnitState.cpp -c
	g++ -std=c++20 states/interfaces/IUnitTransformState.cpp -c
	g++ -std=c++20 states/interfaces/ITransformState.cpp -c
	g++ -std=c++20 states/State.cpp -c
	g++ -std=c++20 states/UnitIsDead.cpp -c
	g++ -std=c++20 states/NoMagicState.cpp -c
	g++ -std=c++20 states/TransformState.cpp -c
	g++ -std=c++20 units/Unit.cpp -c
	g++ -std=c++20 units/Soldier.cpp -c
	g++ -std=c++20 units/Rogue.cpp -c
	g++ -std=c++20 units/Berserker.cpp -c
	g++ -std=c++20 units/Vampire.cpp -c
	g++ -std=c++20 units/Werewolf.cpp -c
	g++ -std=c++20 spellCasters/SpellCaster.cpp -c
	g++ -std=c++20 spellCasters/Necromancer.cpp -c

all: compile
	g++ -std=c++20 run.cpp *.o && ./a.exe