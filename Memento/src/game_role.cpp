#include "game_role.h"
#include <iostream>

GameRole::GameRole()
		: m_vitality(100), m_attack(100), m_defense(100)
{
}

Memento GameRole::Save()
{
	Memento memento(m_vitality, m_attack, m_defense);
	return memento;
}

void GameRole::Load(Memento memento)
{
	m_vitality = memento.m_vitality;
	m_attack = memento.m_attack;
	m_defense = memento.m_defense;
}

void GameRole::Show()
{
	std::cout << "vitality : " << m_vitality
						<< ", attack : " << m_attack
						<< ", defense : " << m_defense
						<< std::endl;
}

void GameRole::Attack()
{
	m_vitality -= 10;
	m_attack -= 10;
	m_defense -= 10;
}
