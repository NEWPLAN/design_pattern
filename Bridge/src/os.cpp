#include "os.h"
#include <iostream>
#include <string>
std::string Windows::InstallOS_Imp()
{
	return "Install Windows System...";
}

std::string Linux::InstallOS_Imp()
{
	return "Install Linux System...";
}

std::string UNIX::InstallOS_Imp()
{
	return "Install UNIX System...";
}