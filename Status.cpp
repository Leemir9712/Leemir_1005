#include "Status.h"

Status::Status()
{
	PlayerStatus.push_back(100, 1, "µ¿ÂÊ");
}

Status::Status(int InHP, int InState, string InMovement)
{
	HP = InHP;
	State = InState;
	Movement = InMovement;
}
