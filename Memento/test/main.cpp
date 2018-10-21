#include "care_take.h"
#include "game_role.h"
#include "memento.h"

int main(int argc, char const *argv[])
{
	Caretake caretake;
	GameRole role;
	role.Show();				//initialize
	caretake.Save(role.Save()); //saving
	role.Attack();
	role.Show();				 //after attacking
	role.Load(caretake.Load(0)); //loading status
	role.Show();				 //reset to 0
	return 0;
}
