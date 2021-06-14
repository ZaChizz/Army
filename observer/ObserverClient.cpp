//
// Created by Admin on 22.02.2021.
//

#include "ObserverClient.h"

ObserverClient::ObserverClient() : IObserverClient() {}
ObserverClient::~ObserverClient() {}

void ObserverClient::subscribeMe(Unit* me, Unit* enemy) {
    enemy->getObserver()->attach(me);
}

void ObserverClient::onEventSubscriber() {
    std::cout << "on Death event" << std::endl;
}
