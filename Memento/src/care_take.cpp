#include "care_take.h"

Caretake::Caretake() {}
void Caretake::Save(Memento menento)
{
  m_vecMemento.push_back(menento);
}

Memento Caretake::Load(int state)
{
  return m_vecMemento[state];
}