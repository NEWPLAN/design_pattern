#include "dog.hpp"
#include "iostream"
dog::dog(std::string name) : animal(name)
{
    this->name = name;
    this->born();
}

dog::~dog()
{
    this->die();
}

void dog::born()
{
    std::cout << this->get_name() << " borns" << std::endl;
}
void dog::die()
{
    std::cout << this->get_name() << " dies" << std::endl;
}

std::string dog::get_name()
{
    return this->name;
}