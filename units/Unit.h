//
// Created by Admin on 14.12.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>
#include "../states/interfaces/IUnitState.h"
#include "../states/interfaces/IUnitTransformState.h"
#include "../attacks/BaseAttack.h"

class BaseAttack;

class Unit : public IUnitState, public IUnitTransformState {
    public:
        Unit();
        virtual ~Unit();

        virtual std::string& getName()=0;

        virtual std::string& getForm()=0;

        virtual BaseAttack& getAttack()=0;

        virtual void setAttack(BaseAttack* uAttack)=0;

        virtual void attack(Unit* enemy)=0;

};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif //ARMY_UNIT_H
