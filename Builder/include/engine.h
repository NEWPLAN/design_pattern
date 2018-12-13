#ifndef __ENGINE_H__
#define __ENGINE_H__
#include <string>

class Engine
{
  private:
    std::string name;

  public:
    Engine(std::string nm)
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