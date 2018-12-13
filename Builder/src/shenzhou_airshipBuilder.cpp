#include <shenzhou_airshipBuilder.h>
#include <iostream>

Engine *ShenzhouAirshipBuilder::build_engine()
{
	std::cout << "Shenzhou engine builder" << std::endl;
	return new Engine("shenzhou engine");
}

EscapeTower *ShenzhouAirshipBuilder::build_escapeTower()
{
	std::cout << "Shenzhou EscapeTower builder" << std::endl;
	return new EscapeTower("shenzhou escape");
}

OrbitModule *ShenzhouAirshipBuilder::build_orbitModule()
{
	std::cout << "Shenzhou OrbitModule builder" << std::endl;
	return new OrbitModule("shenzhou OrbitModule");
}