#include "war.h"

War::War(State *state)
    : m_state(state), m_days(0)
{
}

War::~War()
{
  delete m_state;
}

int War::GetDays()
{
  return m_days;
}
void War::SetDays(int days)
{
  m_days = days;
}
void War::SetState(State *state)
{
  delete m_state;
  m_state = state;
}
void War::GetState()
{
  m_state->CurrentState(this);
}
