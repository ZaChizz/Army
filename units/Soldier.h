//
// Created by Admin on 13.01.2021.
//

#ifndef ARMY_SOLDIER_H
#define ARMY_SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier : public Unit {
    protected:
        std::string name;
        State* uState;
        BaseAttack* uAttack;
        ITransformState* uMultiState;
    public:
        Soldier(const std::string& name, State* uState, BaseAttack* uAttack, const std::string& form = "Soldier");
        virtual ~Soldier();

        void attack(Unit* enemy);

        virtual std::string& getName();
        virtual std::string& getForm();
        virtual State& getState();
        virtual BaseAttack& getAttack();
        virtual State* getStateP();
        virtual ITransformState* getMultiState();

        virtual void setState(State* uState);
        virtual void setAttack(BaseAttack* uAttack);
        virtual void setMultiState(ITransformState* uMultiState);

        std::string form;
};

std::ostream& operator<<(std::ostream& out, Soldier& soldier);

#endif //ARMY_SOLDIER_H
