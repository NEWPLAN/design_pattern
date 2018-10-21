#include "phone.h"
#include <iostream>

iPhone::iPhone(std::string name)
{
	this->m_name = name;
}

void iPhone::ShowDecorate()
{
	std::cout << this->m_name << " decotared" << std::endl;
}

Nokia::Nokia(std::string name)
{
	this->m_name = name;
}

void Nokia::ShowDecorate()
{
	std::cout << this->m_name << " decotared" << std::endl;
}