#ifndef __SHENZHOU_AIRSHIP_BUILDER_H__
#define __SHENZHOU_AIRSHIP_BUILDER_H__
#include <engine.h>
#include <escapeTower.h>
#include <orbitModule.h>
#include <airshipBuilder.h>

class ShenzhouAirshipBuilder : public AirshipBuilder
{
public:
	virtual Engine *build_engine();
	virtual EscapeTower *build_escapeTower();
	virtual OrbitModule *build_orbitModule();
};

#endif