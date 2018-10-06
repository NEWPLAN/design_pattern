#include "Factory.hpp"
#include "Cycle.hpp"
#include "Rect.hpp"
#include "Squire.hpp"
#include "Diamond.hpp"
#include <iostream>

Factory::Factory()
{
  return;
}

BaseShape *Factory::creator(std::string name)
{
  if (name == "Cycle")
    return new Cycle();
  if (name == "Rect")
    return new Rect();
  if (name == "Diamond")
    return new Diamond();
  if (name == "Squire")
    return new Squire();
  throw std::invalid_argument("Unknown shape: " + name);
}

Factory::~Factory()
{
  std::cout << "exit the factory..." << std::endl;
  return;
}

void Factory::resgiter(std::string &name, BaseShape *ctrator)
{
  return;
}