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
	string Movement; //����,����,����,����,�̵���������

	vector<Status> PlayerStatus;
	vector<Status> MonsterStatus;

};

