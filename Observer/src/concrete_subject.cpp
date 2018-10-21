#include "concrete_subject.h"

ConcreteSubject::ConcreteSubject()
{
    m_fPrice = 10.0;
}

void ConcreteSubject::SetPrice(float price)
{
    m_fPrice = price;
}

void ConcreteSubject::Attach(IObserver *observer)
{
    m_observers.push_back(observer);
}

void ConcreteSubject::Detach(IObserver *observer)
{
    m_observers.remove(observer);
}

void ConcreteSubject::Notify()
{
    std::list<IObserver *>::iterator it = m_observers.begin();
    while (it != m_observers.end())
    {
        (*it)->Update(m_fPrice);
        ++it;
    }
}
