#ifndef __OS_H_
#define __OS_H_
#include <string>
class OS
{
public:
	virtual std::string InstallOS_Imp() = 0;
};

class Windows : public OS
{
public:
	virtual std::string InstallOS_Imp() override;
};

class Linux : public OS
{
public:
	virtual std::string InstallOS_Imp() override;
};

class UNIX : public OS
{
public:
	virtual std::string InstallOS_Imp() override;
};

#endif