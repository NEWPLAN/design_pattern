#ifndef __AIRSHIP_BUILDER_H__
#define __AIRSHIP_BUILDER_H__
#include <engine.h>
#include <escapeTower.h>
#include <orbitModule.h>
class AirshipBuilder
{
  public:
	virtual Engine *build_engine() = 0;
	virtual EscapeTower *build_escapeTower() = 0;
	virtual OrbitModule *build_orbitModule() = 0;
};

#endif