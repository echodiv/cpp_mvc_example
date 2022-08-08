/*
* Представление для консоли
*/
#ifndef _CONSOLE_VIEW_H
#define _CONSOLE_VIEW_H

#include "Observer.h"
#include "TemperatureModel.h"

class ConsoleView: public Observer
{
    public:
        ConsoleView(TemperatureModel *tModel);
        virtual void update();

    private:
        TemperatureModel *model;
};

#endif