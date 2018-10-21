#include "concrete_observer.h"
#include <iostream>

ConcreteObserver::ConcreteObserver(std::string name)
{
  this->m_strName = name;
}

void ConcreteObserver::Update(float price)
{
  std::cout << m_strName << " - price: " << price << std::endl;
}
