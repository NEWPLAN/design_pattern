#include "Cycle.hpp"
#include <iostream>
#include "Factory.hpp"
Cycle::Cycle()
{
    this->name = "Cycle";
    return;
}

Cycle::~Cycle()
{
    std::cout << "exit the cycles..." << std::endl;
    return;
}

void Cycle::draw()
{
    std::cout << "The shape is: " << this->name << std::endl;
}

SHAPE_REGISTER("Cycle", Cycle);