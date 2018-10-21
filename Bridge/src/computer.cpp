#include "os.h"
#include "computer.h"
#include <iostream>

void DellComputer::InstallOS(OS *os)
{
	this->name = "Dell";
	std::cout << os->InstallOS_Imp() << " in your " << this->name << std::endl;
}

void HPComputer::InstallOS(OS *os)
{
	this->name = "HP";
	std::cout << os->InstallOS_Imp() << " in your " << this->name << std::endl;
}

void AppleComputer::InstallOS(OS *os)
{
	this->name = "Apple";
	std::cout << os->InstallOS_Imp() << " in your " << this->name << std::endl;
}