#ifndef __SQUIRE__
#define __SQUIRE__
#include <iostream>
#include <string>
#include "BaseShape.hpp"

class Squire : public BaseShape
{
  public:
    Squire();
    ~Squire();

  public:
    virtual void draw() override;

  private:
    std::string name;
};

#endif