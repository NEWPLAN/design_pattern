#ifndef __AIRSHIP_H__
#define __AIRSHIP_H__
#include <iostream>
#include <string>
#include <orbitModule.h>
#include <engine.h>
#include <escapeTower.h>

class AirShip
{
private:
	OrbitModule *orbital_module;
	Engine *engine;
	EscapeTower *escape_tower;

public:
	void set_orbit_module(OrbitModule *orbm)
	{
		this->orbital_module = orbm;
	}
	OrbitModule *get_orbit_module()
	{
		return this->orbital_module;
	}

	void set_engine(Engine *eng)
	{
		this->engine = eng;
	}
	Engine *get_engine()
	{
		return this->engine;
	}

	void set_escape_tower(EscapeTower *est)
	{
		this->escape_tower = est;
	}
	EscapeTower *get_escape_tower()
	{
		return this->escape_tower;
	}
};

#endif