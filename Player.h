#pragma once
#include <string>
#include "Status.h"
#include <vector>

using namespace std;

class Player : public Status
{
public:
	Player();

	int Gold;

	int GetGold(int MonsterState);

};

