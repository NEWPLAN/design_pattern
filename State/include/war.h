#ifndef __WAR_H__
#define __WAR_H__

#include "state.h"

class War
{
private:
  State *m_state; //current state
  int m_days;     //war durations
public:
  War(State *state);
  virtual ~War();
  int GetDays();
  void SetDays(int days);
  void SetState(State *state);
  void GetState();
};
#endif // __WAR_H__