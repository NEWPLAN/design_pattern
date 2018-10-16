#ifndef __DOG__
#define __DOG__
#include <string>
#include "animal.hpp"
class dog : public animal
{
public:
  dog(std::string name);
  ~dog();
  virtual std::string get_name();

protected:
  virtual void die();
  virtual void born();

private:
  std::string name;
};

#endif
