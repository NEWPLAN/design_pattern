#ifndef __ORBIT_MODULE_H__
#define __ORBIT_MODULE_H__
#include <string>

class OrbitModule
{
  private:
    std::string name;

  public:
    OrbitModule(std::string nm)
    {
        this->name = nm;
    }

    void set_name(std::string &nm)
    {
        this->name = nm;
    }

    std::string &get_name(void)
    {
        return this->name;
    }
};
#endif