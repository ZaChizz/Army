//
// Created by Admin on 22.02.2021.
//

#ifndef ARMY_OBSERVER_CLIENT_H
#define ARMY_OBSERVER_CLIENT_H

#include "interfaces/IObserverClient.h"
#include "../units/Unit.h"

class ObserverClient : public IObserverClient {
    public:
        ObserverClient();
        virtual ~ObserverClient();

        virtual void subscribeMe(Unit* me, Unit* enemy);
        virtual void onEventSubscriber();
};

#endif //ARMY_OBSERVER_CLIENT_H
