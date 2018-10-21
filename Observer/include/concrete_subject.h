#ifndef __CONCRETE_SUBJECT_H__
#define __CONCRETE_SUBJECT_H__

#include "subject.h"
#include "observer.h"
#include <list>

// concrete subject
class ConcreteSubject : public ISubject
{
  public:
    ConcreteSubject();

    void SetPrice(float price);

    virtual void Attach(IObserver *observer) override;

    virtual void Detach(IObserver *observer) override;

    virtual void Notify() override;

  private:
    std::list<IObserver *> m_observers; // observer list
    float m_fPrice;                     // price
};
#endif