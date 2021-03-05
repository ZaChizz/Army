//
// Created by Admin on 05.03.2021.
//

#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name,
                         State* uState,
                         BaseAttack* uAttack,
                         MagicAttack* mAttack,
                         SpellBook* sBook,
                         const std::string& form)
:SpellCaster(name, uState, uAttack, mAttack, sBook, form){}
/*
void Necromancer::attack(Unit* enemy) {
    this->getAttack().attack(this, enemy);
    enemy->onEventAction();
}
 */

std::ostream& operator<<(std::ostream& out, Necromancer& necromancer) {
    out << necromancer.getName() << " - " << necromancer.getForm() << ": " <<std::endl;
    out << necromancer.getState() << std::endl;
    out << necromancer.getObserverRef() << std::endl;

    return out;
}