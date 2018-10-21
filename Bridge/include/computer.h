#ifndef __COMPUTER_H__
#define __COMPUTER_H__
#include "os.h"
#include <string>
class Computer
{
  public:
    virtual void InstallOS(OS *os) = 0;

  protected:
    std::string name;
};
class DellComputer : public Computer
{
  public:
    virtual void InstallOS(OS *os) override;
};
class AppleComputer : public Computer
{
  public:
    virtual void InstallOS(OS *os) override;
};
class HPComputer : public Computer
{
  public:
    virtual void InstallOS(OS *os) override;
};
#endif