#include "Controller.h"

#include <cstdio>

Controller::Controller(TemperatureModel *tModel)
{
    model = tModel;
}
void Controller::start()
{
    model->setC(0);

    float temp;

    do
    {
        scanf("%f", &temp);
        model->setC(temp);
    }
    while (temp != 0);
}
