#include "Player.h"

Player::Player()
{
}

int Player::GetGold(int MonsterState)
{
	if (MonsterState == 3)
	{
		Gold++;
	}

	return Gold ;
}
