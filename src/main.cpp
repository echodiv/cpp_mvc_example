/*
* Простой пример MVC архитектуры на языке программирования C++
* Реализация конвертера температур цельсий-фаренгейт
*/

#include "TemperatureModel.h"
#include "ConsoleView.h"
#include "Controller.h"

int main()
{
    TemperatureModel model;
    ConsoleView view(&model);
    Controller controller(&model);
    controller.start();

    return 0;
}