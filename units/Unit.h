//
// Created by Admin on 14.12.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>
#include "../states/interfaces/IUnitState.h"
#include "../states/interfaces/IUnitTransformState.h"
#include "../observer/interfaces/IUnitObserver.h"
#include "../observer/interfaces/IUnitObserverClient.h"
#include "../attacks/BaseAttack.h"

class BaseAttack;

class Unit : public IUnitState, public IUnitTransformState, public IUnitObserver, public IUnitObserverClient {
    public:
        Unit();
        virtual ~Unit();

        virtual std::string& getName()=0;

        virtual std::string& getForm()=0;

        virtual BaseAttack& getAttack()=0;

        virtual void setAttack(BaseAttack* uAttack)=0;

        virtual void attack(Unit* enemy)=0;

        virtual void onEventAction()=0;

        virtual void gestalt()=0;

};

#endif //ARMY_UNIT_H
