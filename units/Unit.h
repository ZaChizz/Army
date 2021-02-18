//
// Created by Admin on 14.12.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>
#include "../states/State.h"
#include "../states/interfaces/ITransformState.h"
#include "../states/TransformState.h"
#include "../attacks/BaseAttack.h"

class BaseAttack;

class Unit {
    private:
        std::string name;
    public:
        Unit(const std::string& name);
        virtual ~Unit();

        std::string type;

        virtual State& getState()=0;

        virtual BaseAttack& getAttack()=0;

        virtual State* getStateP()=0;

        virtual ITransformState* getMultiState()=0;

        virtual void setAttack(BaseAttack* uAttack)=0;

        virtual void setState(State* uState)=0;

        virtual void setMultiState(ITransformState* iTransformState)=0;

        void attack(Unit* enemy);

        const std::string& getName() const;

};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif //ARMY_UNIT_H
