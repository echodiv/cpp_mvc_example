#include "TemperatureModel.h"

float TemperatureModel::getF(){
    /* Получение значения температуры в фаренгейтах */
    return temperatureF;
}

float TemperatureModel::getC(){
    /* Получение значения температуры в цельсиях */
    return (temperatureF - 32.0) * 5.0 / 9.0;
}

void TemperatureModel::setF(float tempF){
    /* Задать значение температуры. Входные данные в фаренгейтах */
    temperatureF = tempF;
    notifyUpdate();
}

void TemperatureModel::setC(float tempC){
    /* Задать значение температуры. Входные данные в цельсиях */
    temperatureF = tempC * 9.0 / 5.0 + 32.0;
    notifyUpdate();
}
