#ifndef __DOVE__
#define __DOVE__
#include <string>
#include "animal.hpp"
class dove : public animal
{
public:
  dove(std::string name);
  ~dove();
  virtual std::string get_name();

protected:
  virtual void die();
  virtual void born();

private:
  std::string name;
};

#endif
