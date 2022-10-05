#include "Monster.h"
#include <string>
using namespace std;

Monster::Monster()
{
	
}

Monster::Monster(int InType)
{
	Type = InType;
}

string Monster::GetTypeName(int Type)
{
	string TypeName;

	if (Type == 0)
	{
		TypeName = "∞Ì∫Ì∏∞";
	}
	else if(Type ==1)
	{
		TypeName = "ΩΩ∂Û¿”";
	}
	else
	{
		TypeName = "∏‰µ≈¡ˆ";
	}

	return TypeName;
}
