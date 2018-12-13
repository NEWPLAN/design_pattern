#include <airshipDirector.h>
#include <airshipBuilder.h>
#include <shenzhou_airshipBuilder.h>
#include <shenzhou_airshipDirector.h>

int main(int argc, char const *argv[])
{
	AirshipDirector *director = new ShenzhouAirshipDirector(new ShenzhouAirshipBuilder());
	AirShip *ship = director->create_airship();
	std::cout << ship->get_engine()->get_name() << std::endl
			  << ship->get_escape_tower()->get_name() << std::endl
			  << ship->get_orbit_module()->get_name() << std::endl;

	return 0;
}
