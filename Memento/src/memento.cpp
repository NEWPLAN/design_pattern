#include "memento.h"
#include <iostream>

Memento::Memento(int vitality, int attack, int defense)
    : m_vitality(vitality), m_attack(attack), m_defense(defense)
{
  std::cout << "Create Memento..." << std::endl;
}

Memento &Memento::operator=(const Memento &memento)
{
  this->m_vitality = memento.m_vitality;
  this->m_attack = memento.m_attack;
  this->m_defense = memento.m_defense;
  return *this;
}
