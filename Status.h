#pragma once
#include <string>
#include <vector>

using namespace std;

class Status
{
public:
	Status();
	Status(int InHP, int InState, string InMovement);

	int State; //0Attack 1Defence 2Move 3Dead
	int HP; //HP
	string Movement; //동쪽,서쪽,남쪽,북쪽,이동하지않음

	vector<Status> PlayerStatus;
	vector<Status> MonsterStatus;

};

