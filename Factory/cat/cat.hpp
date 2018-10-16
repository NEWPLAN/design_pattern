#ifndef __CAT__
#define __CAT__
#include <string>
#include "animal.hpp"
class cat : public animal
{
public:
  cat(std::string name);
  ~cat();
  std::string get_name();

protected:
  void die();
  void born();

private:
  std::string name;
};

#endif
