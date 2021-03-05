//
// Created by Admin on 22.02.2021.
//

#ifndef ARMY_IUNIT_OBSERVER_CLIENT_H
#define ARMY_IUNIT_OBSERVER_CLIENT_H

#include "IObserverClient.h"

class IUnitObserverClient {
public:
    IUnitObserverClient();
    virtual ~IUnitObserverClient();

    virtual IObserverClient* getObserverClient()=0;
};

#endif //ARMY_IUNIT_OBSERVER_CLIENT_H
