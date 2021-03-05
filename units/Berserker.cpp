//
// Created by Admin on 22.01.2021.
//

#include "Berserker.h"

Berserker::Berserker(const std::string& name, State* uState, BaseAttack* uAttack, const std::string& form)
    :Soldier(name, uState, uAttack, form) {
}

Berserker::~Berserker() {}

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
    out << berserker.getName() << " - " << berserker.getForm() << ": " <<std::endl;
    out << berserker.getState() << std::endl;
    out << berserker.getObserverRef() << std::endl;
    return out;
}
