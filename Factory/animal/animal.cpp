#include "animal.hpp"
#include "iostream"
animal::animal(std::string name)
{
    this->name = "animal";
    //this->born();
}

animal::~animal()
{
    //this->die();
}

void animal::born()
{
    std::cout << this->get_name() << " borns in animal layer" << std::endl;
}
void animal::die()
{
    std::cout << this->get_name() << " dies in animal layer" << std::endl;
}
