/*
* Класс с помощью которого наблюдаемый объект
* оповещает наблюдателя
*/
#ifndef _OBSERVER_H
#define _OBSERVER_H

class Observer 
{
    public:
        virtual void update();
};

#endif