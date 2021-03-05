//
// Created by Admin on 22.02.2021.
//

#ifndef ARMY_I_OBSERVER_SERVER_H
#define ARMY_I_OBSERVER_SERVER_H

#include <map>
#include <string>

class Unit;

class IObserverServer {
    public:
        IObserverServer();
        virtual ~IObserverServer();

        virtual void attach(Unit* observer) = 0;
        virtual void detach(Unit* observer) = 0;
        virtual void clear() = 0;

        virtual std::map<std::string,Unit*>& getList() = 0;
};

#endif //ARMY_I_OBSERVER_SERVER_H
