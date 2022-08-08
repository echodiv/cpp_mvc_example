/*
* Описывает модель данных температуры
* для градусов фаренгейта и цельсия
*/
#ifndef _TEMPERATURE_MODEL_H
#define _TEMPERATURE_MODEL_H

#include "Observable.h"

class TemperatureModel : public Observable
{
    public:
        float getF();
        float getC();
        void setF(float tempF);
        void setC(float tempC);

    private:
        float temperatureF;
};

#endif
