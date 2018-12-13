#ifndef __SHENZHOU_AIRSHIP_DIRECTOR_H__
#define __SHENZHOU_AIRSHIP_DIRECTOR_H__
#include <airship.h>
#include <airshipDirector.h>
#include <airshipBuilder.h>
class ShenzhouAirshipDirector : public AirshipDirector
{
  public:
	virtual AirShip *create_airship();
	ShenzhouAirshipDirector(AirshipBuilder *builder);

  private:
	AirshipBuilder *builder_;
};

#endif