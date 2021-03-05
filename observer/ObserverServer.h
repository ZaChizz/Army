//
// Created by Admin on 22.02.2021.
//

#ifndef ARMY_OBSERVERSERVER_H
#define ARMY_OBSERVERSERVER_H

#include <iostream>
#include <map>
#include "interfaces/IObserverServer.h"
#include "../units/Unit.h"


class ObserverServer : public IObserverServer {
    protected:
        std::map<std::string,Unit*>* observerList;
    public:
        ObserverServer();
        virtual ~ObserverServer();

        virtual void attach(Unit* observer);
        virtual void detach(Unit* observer);

        virtual std::map<std::string,Unit*>& getSet();

};

std::ostream& operator << (std::ostream& out, ObserverServer& observerServer);

#endif //ARMY_OBSERVERSERVER_H
