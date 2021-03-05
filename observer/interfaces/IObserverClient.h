//
// Created by Admin on 22.02.2021.
//

#ifndef ARMY_IOBSERVER_CLIENT_H
#define ARMY_IOBSERVER_CLIENT_H

class Unit;

class IObserverClient {
    public:
        IObserverClient();
        virtual ~IObserverClient();

        virtual void subscribeMe(Unit* me, Unit* enemy)=0;
        virtual void onEventSubscriber()=0;
};

#endif //ARMY_IOBSERVER_CLIENT_H
