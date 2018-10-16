#ifndef __ANIMAL__
#define __ANIMAL__
#include <string>
class animal
{
public:
  animal(std::string name);
  ~animal();
  virtual std::string get_name()
  {
    return this->name;
  }

protected:
  virtual void die();
  virtual void born();

private:
  std::string name;
};

#endif
