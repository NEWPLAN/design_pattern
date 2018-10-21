#include <decorator.h>
#include <phone.h>

int main(int argc, char const *argv[])
{
	Phone *nokia = new Nokia("6300");
	Phone *iphone = new Nokia("4s");
	Phone *dpa = new DecoratorPhoneA(nokia); //adding paintings
	Phone *dpb = new DecoratorPhoneB(dpa);   //adding battery
	dpb->ShowDecorate();
	delete dpa;
	delete dpb;
	delete iphone;
	delete nokia;
	return 0;
}
