#include "ConsoleView.h"

#include <stdlib.h>
#include <cstdio>


ConsoleView::ConsoleView(TemperatureModel *tModel)
{
    model = tModel;
    model->addObserver(this);
}

void ConsoleView::update()
{
    const char* clearCommand = "clear";
    
    system(clearCommand);
    printf("Temperature in Celsius: %.2f\n", model->getC());
    printf("Temperature in Farenheit: %.2f\n", model->getF());
    printf("Input temperature in Celsius: ");
}
