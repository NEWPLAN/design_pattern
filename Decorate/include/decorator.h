#ifndef __DECORATE_H__
#define __DECORATE_H__
#include "phone.h"
//Decorator
class DecoratorPhone : public Phone
{
private:
  Phone *m_phone; //phone to be decorated
public:
  DecoratorPhone(Phone *phone);
  virtual void ShowDecorate();
};

//speficied decorators
class DecoratorPhoneA : public DecoratorPhone
{
public:
  DecoratorPhoneA(Phone *phone);
  void ShowDecorate();

private:
  void AddDecorate(); //add decorators
};
//speficied decorators
class DecoratorPhoneB : public DecoratorPhone
{
public:
  DecoratorPhoneB(Phone *phone);
  void ShowDecorate();

private:
  void AddDecorate(); //add decorators
};

#endif