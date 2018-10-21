#include "decorator.h"
#include <iostream>

DecoratorPhone::DecoratorPhone(Phone *phone) : m_phone(phone)
{
}
void DecoratorPhone::ShowDecorate()
{
  m_phone->ShowDecorate();
}

DecoratorPhoneA::DecoratorPhoneA(Phone *phone) : DecoratorPhone(phone)
{
}
void DecoratorPhoneA::ShowDecorate()
{
  DecoratorPhone::ShowDecorate();
  AddDecorate();
}

void DecoratorPhoneA::AddDecorate()
{
  std::cout << "Adding new paintings..." << std::endl;
}

DecoratorPhoneB::DecoratorPhoneB(Phone *phone) : DecoratorPhone(phone)
{
}
void DecoratorPhoneB::ShowDecorate()
{
  DecoratorPhone::ShowDecorate();
  AddDecorate();
}

void DecoratorPhoneB::AddDecorate()
{
  std::cout << "Adding new battery..." << std::endl;
}
