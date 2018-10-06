#ifndef __CYCLES__
#define __CYCLES__
#include <iostream>
#include <string>
#include "BaseShape.hpp"

class Cycle : public BaseShape
{
  public:
    Cycle();
    ~Cycle();

  public:
    virtual void draw() override;

  private:
    std::string name;
};

#endif