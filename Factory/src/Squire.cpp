#include "Squire.hpp"
#include <iostream>
Squire::Squire()
{
    this->name = "Squire";
    return;
}

Squire::~Squire()
{
    std::cout << "exit the squires..." << std::endl;
    return;
}

void Squire::draw()
{
    std::cout << "The shape is: " << this->name << std::endl;
}