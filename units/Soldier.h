//
// Created by Admin on 13.01.2021.
//

#ifndef ARMY_SOLDIER_H
#define ARMY_SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    private:
        State* uState;
        BaseAttack* uAttack;
    public:
        Soldier(const std::string& name, State* uState, BaseAttack* uAttack);
        ~Soldier();

        State& getState();
        BaseAttack& getAttack();
        void setAttack(BaseAttack* uAttack);
};

std::ostream& operator<<(std::ostream& out, Soldier& soldier);

#endif //ARMY_SOLDIER_H
