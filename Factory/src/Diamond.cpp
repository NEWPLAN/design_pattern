#include "Diamond.hpp"
#include <iostream>
Diamond::Diamond()
{
    this->name = "Diamond";
    return;
}

Diamond::~Diamond()
{
    std::cout << "exit the diamond..." << std::endl;
    return;
}

void Diamond::draw()
{
    std::cout << "The shape is: " << this->name << std::endl;
}