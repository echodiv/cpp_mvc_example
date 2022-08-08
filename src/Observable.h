/*
* Описывает класс необходимый для добавления,
* удаления и оповещения наблюдателей
*/

#ifndef _OBSERVABLE_H
#define _OBSERVABLE_H

#include <vector>
#include "Observer.h"

class Observable
{
    public:
        void addObserver(Observer *observer);
        void notifyUpdate();

    private:
        std::vector<Observer*> observers;
};

#endif