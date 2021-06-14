//
// Created by Admin on 14.12.2020.
//

#include <iostream>
#include "Config.h"
#include "units/Soldier.h"
#include "units/Rogue.h"
#include "units/Berserker.h"
#include "units/Vampire.h"
#include "units/Werewolf.h"
#include "spellCasters/SpellCaster.h"
#include "spellCasters/Necromancer.h"


int main() {
	std::map <std::string, int> book;
	book["magicHit10"] = (int)SPELLBOOK::MAGICHIT10;
	book["magicHit5"] = (int)SPELLBOOK::MAGICHIT5;

	auto* wizard = new SpellCaster ("Wizard",
										   new State((int)HP::SPELLCASTER,(int)DMG::SPELLCASTER,(int)MHP::SPELLCASTER),
										   new BaseAttack(),
										   new MagicAttack(),
										   new SpellBook(book)
										   );
	auto* necro = new Necromancer ("Necro",
										  new State((int)HP::SPELLCASTER,(int)DMG::SPELLCASTER,(int)MHP::SPELLCASTER),
										  new NecromancerAttack(),
										  new MagicAttack(),
										  new SpellBook(book));
	auto* pety = new Soldier("Pety");

	auto* knight = new Rogue ("Knight");

	auto* barbarian = new Berserker ("Barbarian");

	auto* goga = new Vampire ("Goga");

	auto* tuze = new Berserker("Tuze");

	auto* vasy = new Werewolf("Vasy");

	std::cout << *wizard << std::endl;
	std::cout << *barbarian << std::endl;
	std::cout << *goga << std::endl;
	std::cout << *vasy << std::endl;
	std::cout << *knight << std::endl;
	std::cout << *tuze << std::endl;
	std::cout << *pety << std::endl;

	std::cout << "----Fight----" << std::endl;

	goga->attack(barbarian);
	knight->attack(goga);
	wizard->spellAttack(barbarian,"magicHit10");
	barbarian->attack(knight);
	wizard->spellAttack(tuze,"magicHit10");
	wizard->spellAttack(barbarian,"magicHit10");
	knight->attack(tuze);
	knight->attack(vasy);
	necro->attack(pety);

	std::cout << "after attack" <<std::endl;
	std::cout <<std::endl;
	std::cout << *pety << std::endl;
	std::cout <<std::endl;
	std::cout << "++++++++++++" <<std::endl;
	vasy->getMultiState()->transform(vasy);

	knight->attack(pety);
	knight->attack(pety);
	knight->attack(pety);
	knight->attack(pety);
	knight->attack(pety);
	knight->attack(pety);

	std::cout << "after dead Pety" << std::endl;
	std::cout << "---------------" << std::endl;

	std::cout << *wizard << std::endl;
	std::cout << *barbarian << std::endl;
	std::cout << *goga << std::endl;
	std::cout << *knight << std::endl;

	std::cout << *pety << std::endl;


	std::cout << *vasy << std::endl;
	std::cout << *tuze << std::endl;

	pety->getState().getHitPoints();

	delete(barbarian);
	delete(goga);
	delete(knight);
	delete(tuze);
	delete(wizard);
	delete(vasy);
	delete(pety);

	return 0;
}
