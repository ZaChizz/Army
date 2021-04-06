//
// Created by Admin on 13.01.2021.
//

#ifndef ARMY_SOLDIER_H
#define ARMY_SOLDIER_H

#include <iostream>
#include "Unit.h"
#include "../observer/interfaces/IObserverServer.h"
#include "../observer/interfaces/IObserverClient.h"
#include "../observer/ObserverServer.h"
#include "../observer/ObserverClient.h"

class Soldier : public Unit {
    protected:
        std::string name;
        State* uState;
        BaseAttack* uAttack;
        ITransformState* uMultiState;
        IObserverClient* uObserverClient;
        ObserverServer* uObserverServer;

    public:
        Soldier(const std::string& name,
                State* uState = nullptr,
                BaseAttack* uAttack = nullptr,
                const std::string& form = "soldier",
                ITransformState* uMultiState = nullptr);
        virtual ~Soldier();

        void attack(Unit* enemy);

        virtual std::string& getName();
        virtual std::string& getForm();

        virtual BaseAttack& getAttack();

        virtual State& getState();
        virtual State* getStateP();
        virtual ITransformState* getMultiState();

        virtual void setState(State* uState);
        virtual void setAttack(BaseAttack* uAttack);
        virtual void setMultiState(ITransformState* uMultiState);

        virtual IObserverServer* getObserver();
        virtual IObserverClient* getObserverClient();

        virtual ObserverServer& getObserverRef();

        virtual void onEventAction();

        virtual void gestalt();


        std::string form;
};

std::ostream& operator<<(std::ostream& out, Soldier& soldier);

#endif //ARMY_SOLDIER_H
