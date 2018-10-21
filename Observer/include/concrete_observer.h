#ifndef __CONCRETE_OBSERVER_H__
#define __CONCRETE_OBSERVER_H__

#include "observer.h"
#include <string>

// concrete observer
class ConcreteObserver : public IObserver
{
  public:
    ConcreteObserver(std::string name);
    virtual ~ConcreteObserver(){};

    virtual void Update(float price) override;

  private:
    std::string m_strName; // name
};

#endif // CONCRETE_OBSERVER_H