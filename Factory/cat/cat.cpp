#include "cat.hpp"
#include "iostream"
cat::cat(std::string name) : animal(name)
{
    this->name = name;
    this->born();
}

cat::~cat()
{
    this->die();
}

void cat::born()
{
    std::cout << this->get_name() << " borns in cat layer" << std::endl;
}
void cat::die()
{
    std::cout << this->get_name() << " dies in cat layer" << std::endl;
}

std::string cat::get_name()
{
    return this->name;
}