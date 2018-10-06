#ifndef __DIAMOND__
#define __DIAMOND__
#include <iostream>
#include <string>
#include "BaseShape.hpp"

class Diamond : public BaseShape
{
  public:
    Diamond();
    ~Diamond();

  public:
    virtual void draw() override;

  private:
    std::string name;
};

#endif