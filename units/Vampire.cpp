//
// Created by Admin on 23.01.2021.
//

#include "Vampire.h"

Vampire::Vampire(const std::string& name, State* uState, BaseAttack* uAttack, const std::string& form)
        : Soldier(name, uState, uAttack, form) {
}

Vampire::~Vampire() {}

std::ostream& operator<<(std::ostream& out, Vampire& vampire) {
    out << vampire.getName() << " - " << vampire.getForm() << ": " <<std::endl;
    out << vampire.getState() << std::endl;

    return out;
}
