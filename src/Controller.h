/*
* Класс отслеживающий введенные пользователем данные
* и соответственно изменяющий модель
*/

#ifndef _CONTROLLER
#define _CONTROLLER

#include "TemperatureModel.h"

class Controller
{
    public:
        Controller(TemperatureModel *tModel);
        void start();

    private:
        TemperatureModel *model;
};

#endif
