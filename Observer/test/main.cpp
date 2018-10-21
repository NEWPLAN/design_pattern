#include "concrete_subject.h"
#include "concrete_observer.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)     \
    {                      \
        if (p)             \
        {                  \
            delete (p);    \
            (p) = nullptr; \
        }                  \
    }
#endif

int main(int argc, char **argv)
{
    // create subject and observer
    ConcreteSubject *pSubject = new ConcreteSubject();
    IObserver *pObserver1 = new ConcreteObserver("Jack Ma");
    IObserver *pObserver2 = new ConcreteObserver("Pony");

    // register observer
    pSubject->Attach(pObserver1);
    pSubject->Attach(pObserver2);
    std::cout << "register observer and update price" << std::endl;
    // update price and notify observer
    pSubject->SetPrice(12.5);
    pSubject->Notify();
    std::cout << "unregister observer" << std::endl;
    // unregister observer
    pSubject->Detach(pObserver2);
    pSubject->Notify();
    std::cout << "update status and notify observer" << std::endl;
    // update status and notify observer
    pSubject->SetPrice(15.0);
    pSubject->Notify();

    SAFE_DELETE(pObserver1);
    SAFE_DELETE(pObserver2);
    SAFE_DELETE(pSubject);

    return 0;
}