#ifndef __CARE_TAKE_H__
#define __CARE_TAKE_H__
#include "memento.h"
#include <vector>
class Caretake
{
public:
  Caretake();
  void Save(Memento menento);
  Memento Load(int state);

private:
  std::vector<Memento> m_vecMemento;
};

#endif