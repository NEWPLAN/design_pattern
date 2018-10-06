#ifndef __BASE_SHAPE__
#define __BASE_SHAPE__
#include <iostream>
#include <string>

class BaseShape
{
  public:
    BaseShape();
    //required for delete function....
    virtual ~BaseShape();

  public:
    virtual void draw() = 0;

  private:
    std::string name;
};

#endif