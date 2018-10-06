#ifndef __RECT__
#define __RECT__
#include <iostream>
#include <string>
#include "BaseShape.hpp"

class Rect : public BaseShape
{
  public:
    Rect();
    ~Rect();

  public:
    virtual void draw() override;

  private:
    std::string name;
};

#endif