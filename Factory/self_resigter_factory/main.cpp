#include "Message.hpp"
#include "Message1.hpp"

int main()
{
	Message *p = factory::produce("message1");
	p->foo(); //Message1
	delete p;
	try
	{
		auto p2 = factory::produce_unique("meseesage1");
		p2->foo();
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "Stop @ " << __FILE__ << " : " << __LINE__ << " for: " << e.what() << std::endl;
	}
}
