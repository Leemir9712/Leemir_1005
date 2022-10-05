#pragma once
#include <string>
#include "Status.h"
#include <vector>
#include <string>

using namespace std;

class Monster : public Status
{
public:
	Monster();
	Monster(int InType);

	int Type;
	
	string GetTypeName(int Type);

};

