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
  static void resgiter(std::string name, std::function<BaseShape *()> creator);
  BaseShape *creator(std::string name);

private:
  std::string name;
  static std::unordered_map<std::string, std::function<BaseShape *()>> Creators;
};

template <typename T>
class ClassResister
{
public:
  explicit ClassResister(std::string name)
  {
    Factory::resgiter(name, [&] { return new T(); });
  }
};

#define REGISTER_VNAME(unique_type, unique_identify) classResister_##unique_type(unique_identify)
#define SHAPE_REGISTER(name, class_type) static ClassResister<class_type> REGISTER_VNAME(class_type, name)
//classResister_##class_type(name)
#endif