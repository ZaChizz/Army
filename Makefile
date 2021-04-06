compile:
	g++ -std=c++20 -o tmp/IObserverClient.o observer/interfaces/IObserverClient.cpp -c
	g++ -std=c++20 -o tmp/IObserverServer.o observer/interfaces/IObserverServer.cpp -c
	g++ -std=c++20 -o tmp/IUnitObserver.o observer/interfaces/IUnitObserver.cpp -c
	g++ -std=c++20 -o tmp/IUnitObserverClient.o observer/interfaces/IUnitObserverClient.cpp -c
	g++ -std=c++20 -o tmp/ObserverClient.o observer/ObserverClient.cpp -c
	g++ -std=c++20 -o tmp/ObserverServer.o observer/ObserverServer.cpp -c
	g++ -std=c++20 -o tmp/BaseAttack.o attacks/BaseAttack.cpp -c
	g++ -std=c++20 -o tmp/MagicAttack.o attacks/MagicAttack.cpp -c
	g++ -std=c++20 -o tmp/VampireAttack.o attacks/VampireAttack.cpp -c
	g++ -std=c++20 -o tmp/NecromancerAttack.o attacks/NecromancerAttack.cpp -c
	g++ -std=c++20 -o tmp/WerewolfAttack.o attacks/WerewolfAttack.cpp -c
	g++ -std=c++20 -o tmp/SpellBook.o spellBook/SpellBook.cpp -c
	g++ -std=c++20 -o tmp/IUnitState.o states/interfaces/IUnitState.cpp -c
	g++ -std=c++20 -o tmp/IUnitTransformState.o states/interfaces/IUnitTransformState.cpp -c
	g++ -std=c++20 -o tmp/ITransformState.o states/interfaces/ITransformState.cpp -c
	g++ -std=c++20 -o tmp/State.o states/State.cpp -c
	g++ -std=c++20 -o tmp/UnitIsDead.o states/UnitIsDead.cpp -c
	g++ -std=c++20 -o tmp/NoMagicState.o states/NoMagicState.cpp -c
	g++ -std=c++20 -o tmp/TransformState.o states/TransformState.cpp -c
	g++ -std=c++20 -o tmp/Unit.o units/Unit.cpp -c
	g++ -std=c++20 -o tmp/Soldier.o units/Soldier.cpp -c
	g++ -std=c++20 -o tmp/Rogue.o  units/Rogue.cpp -c
	g++ -std=c++20 -o tmp/Berserker.o units/Berserker.cpp -c
	g++ -std=c++20 -o tmp/Vampire.o units/Vampire.cpp -c
	g++ -std=c++20 -o tmp/Werewolf.o units/Werewolf.cpp -c
	g++ -std=c++20 -o tmp/SpellCaster.o spellCasters/SpellCaster.cpp -c
	g++ -std=c++20 -o tmp/Necromancer.o spellCasters/Necromancer.cpp -c

test:
	g++ -std=c++20 -o mainTest.exe MainTest.cpp *.o && ./mainTest.exe
	rm ./mainTest.exe

clear:
	rm ./tmp/*.o

all: compile
	g++ -std=c++20 run.cpp tmp/*.o && ./a.exe