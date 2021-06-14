//
// Created by Admin on 22.02.2021.
//

#ifndef ARMY_IUNIT_OBSERVER_H
#define ARMY_IUNIT_OBSERVER_H

#include "IObserverServer.h"

class IUnitObserver {
    public:
        IUnitObserver();
        virtual ~IUnitObserver();

        virtual IObserverServer* getObserver()=0;
        virtual IObserverServer& getObserverRef()=0;
};

#endif //ARMY_IUNIT_OBSERVER_H
