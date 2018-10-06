#ifndef __FACTORY__
#define __FACTORY__
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include "BaseShape.hpp"

class Factory
{
public:
  explicit Factory();
  ~Factory();

public:
  static void resgiter(std::string &name, BaseShape *ctrator);
  BaseShape *creator(std::string name);

private:
  std::string name;
  static std::unordered_map<std::string, BaseShape *> Creators;
};
class ClassResister
{
public:
  explicit ClassResister(std::string &name, BaseShape *shape)
  {
  }
};

#endif