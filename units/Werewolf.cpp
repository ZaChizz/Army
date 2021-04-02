//
// Created by Admin on 01.04.2021.
//

#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name,
                   State* uState,
                   BaseAttack* uAttack,
                   const std::string& form,
                   ITransformState* uMultiState)
        : Soldier(name, uState, uAttack, form, uMultiState) {
}

Werewolf::~Werewolf() {}

std::ostream& operator<<(std::ostream& out, Werewolf& werewolf) {
    out << werewolf.getName() << " - " << werewolf.getForm() << ": " <<std::endl;
    out << werewolf.getState() << std::endl;
    out << werewolf.getObserverRef() << std::endl;
    return out;
}
