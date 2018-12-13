#include <shenzhou_airshipDirector.h>

ShenzhouAirshipDirector::ShenzhouAirshipDirector(AirshipBuilder *builder)
{
	this->builder_ = builder;
}
AirShip *ShenzhouAirshipDirector::create_airship()
{
	Engine *eg = builder_->build_engine();
	OrbitModule *ob = builder_->build_orbitModule();
	EscapeTower *et = builder_->build_escapeTower();
	AirShip *ship = new AirShip();
	ship->set_engine(eg);
	ship->set_escape_tower(et);
	ship->set_orbit_module(ob);
	return ship;
}