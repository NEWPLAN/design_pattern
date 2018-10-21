#ifndef __MEMENTO_H__
#define __MEMENTO_H__
class Memento
{
public:
  Memento(int vitality, int attack, int defense);
  Memento &operator=(const Memento &memento);

public:
  //property
  int m_vitality; //vitality
  int m_attack;   //attack
  int m_defense;  //defense
};
#endif