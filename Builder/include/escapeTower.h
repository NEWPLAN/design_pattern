#ifndef __ESCAPE_TOWER_H__
#define __ESCAPE_TOWER_H__
#include <string>

class EscapeTower
{
  private:
    std::string name;

  public:
    EscapeTower(std::string nm)
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