#include "os.h"
#include "computer.h"
int main(int argc, char const *argv[])
{
	OS *os1 = new Windows();
	OS *os2 = new Linux();
	OS *os3 = new UNIX();
	Computer *computer1 = new AppleComputer();
	Computer *computer2 = new HPComputer();
	computer1->InstallOS(os1);
	computer1->InstallOS(os2);
	computer2->InstallOS(os3);
	return 0;
}
