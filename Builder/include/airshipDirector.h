#ifndef __AIRSHIP_DIRECTOR_H__
#define __AIRSHIP_DIRECTOR_H__
#include <engine.h>
#include <escapeTower.h>
#include <orbitModule.h>
#include <airship.h>
class AirshipDirector
{
public:
	virtual AirShip *create_airship() = 0;
};

#endif