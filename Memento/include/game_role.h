#ifndef __GAME_ROLE_H__
#define __GAME_ROLE_H__

#include "memento.h"
class GameRole
{
private:
	int m_vitality;
	int m_attack;
	int m_defense;

public:
	GameRole();
	Memento Save();							//saving status, interact with Memento instead of Caretake
	void Load(Memento memento); //loading status, interact with Memento instead of Caretake
	void Show();
	void Attack();
};

#endif