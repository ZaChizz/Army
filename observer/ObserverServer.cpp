//
// Created by Admin on 22.02.2021.
//

#include "ObserverServer.h"
#include "../Templates/Templates.cpp"

ObserverServer::ObserverServer(): IObserverServer() {
    this->observerList = new std::map<std::string,Unit*>();
}
ObserverServer::~ObserverServer() {
    delete(observerList);
}

void ObserverServer::attach(Unit* observer) {

    this->observerList->insert(std::pair<std::string, Unit*>(observer->getName(), observer));
}

void ObserverServer::detach(Unit *observer) {
    this->observerList->erase(observer->getName());
}


std::map<std::string,Unit*>& ObserverServer::getSet() {
    return *observerList;
}

std::ostream& operator << (std::ostream& out, ObserverServer& observerServer) {
    std::cout << "----Observers----" << std::endl;
    std::cout << observerServer.getSet() << std::endl;
    std::cout << "-----------------" << std::endl;
    return out;
}