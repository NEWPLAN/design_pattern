#include "dove.hpp"
#include <iostream>
dove::dove(std::string name) : animal(name)
{
    this->name = name;
    this->born();
}

dove::~dove()
{
    this->die();
}

void dove::born()
{
    std::cout << this->get_name() << " borns" << std::endl;
}
void dove::die()
{
    std::cout << this->get_name() << " dies" << std::endl;
}
std::string dove::get_name()
{
    return this->name;
}