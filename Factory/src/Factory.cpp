#include "Factory.hpp"
#include "Cycle.hpp"
#include "Rect.hpp"
#include "Squire.hpp"
#include "Diamond.hpp"
#include <iostream>

std::unordered_map<std::string, std::function<BaseShape *()>> Factory::Creators;

Factory::Factory()
{
  return;
}

BaseShape *Factory::creator(std::string name)
{
  if (Factory::Creators.find(name) == Factory::Creators.end())
  {
    throw std::invalid_argument("Unknown shape: " + name);
    return nullptr;
  }
  return Factory::Creators[name]();
}

Factory::~Factory()
{
  std::cout << "exit the factory..." << std::endl;
  return;
}

void Factory::resgiter(std::string name, std::function<BaseShape *()> creator)
{
  if (Factory::Creators.find(name) != Factory::Creators.end())
    return;
  Factory::Creators.emplace(std::make_pair(name, creator));
}