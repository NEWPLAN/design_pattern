#include "Rect.hpp"
#include <iostream>
Rect::Rect()
{
    this->name = "Rect";
    return;
}

Rect::~Rect()
{
    std::cout << "exit the rects..." << std::endl;
    return;
}

void Rect::draw()
{
    std::cout << "The shape is: " << this->name << std::endl;
}

#include "Factory.hpp"
SHAPE_REGISTER("Rect", Rect);