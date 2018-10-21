#ifndef __PHONE_H_
#define __PHONE_H_
#include <string>
class Phone
{
  public:
	Phone(){};
	virtual ~Phone(){};
	virtual void ShowDecorate() = 0;

  protected:
	std::string m_name;
};

class iPhone : public Phone
{
  public:
	iPhone(std::string name);
	virtual ~iPhone(){};
	virtual void ShowDecorate() override;
};

class Nokia : public Phone
{
  public:
	Nokia(std::string name);
	virtual ~Nokia(){};
	virtual void ShowDecorate() override;
};

#endif