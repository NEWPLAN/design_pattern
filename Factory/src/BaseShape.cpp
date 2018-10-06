#include "BaseShape.hpp"

BaseShape::BaseShape()
{
  this->name = "BaseShape";
  return;
}

BaseShape::~BaseShape()
{
  std::cout << "exit the baseshape..." << std::endl;
  return;
}