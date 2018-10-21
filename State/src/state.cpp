#include "state.h"
#include "war.h"
#include <iostream>

void EndState::End(War *war)
{
  std::cout << "War is over" << std::endl;
}

void EndState::CurrentState(War *war)
{
  End(war);
}

void AnaphaseState::Anaphase(War *war)
{
  if (war->GetDays() < 30)
  {
    std::cout << "The " << war->GetDays()
              << " day: In the final state, two sides will try their best."
              << std::endl;
  }
  else
  {
    war->SetState(new EndState());
    war->GetState();
  }
}
void AnaphaseState::CurrentState(War *war)
{
  Anaphase(war);
}

void MetaphaseState::Metaphase(War *war)
{
  if (war->GetDays() < 20)
  {
    std::cout << "The " << war->GetDays()
              << " day: In the meta state, two sides have lost a lot"
              << std::endl;
  }
  else
  {
    war->SetState(new AnaphaseState());
    war->GetState();
  }
}
void MetaphaseState::CurrentState(War *war)
{
  Metaphase(war);
}

void ProphaseState::Prophase(War *war)
{
  if (war->GetDays() < 10)
  {
    std::cout << "The " << war->GetDays()
              << " day: In the initial state, two sides will give a try"
              << std::endl;
  }
  else
  {
    war->SetState(new MetaphaseState());
    war->GetState();
  }
}
void ProphaseState::CurrentState(War *war)
{
  Prophase(war);
}