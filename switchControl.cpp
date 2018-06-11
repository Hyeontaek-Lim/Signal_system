#include "switchControl.h"



switchControl::switchControl()
{
	this->control = false;
}


switchControl::~switchControl()
{
}

void switchControl::setControl(bool x)
{
	this->control = x;
}

bool switchControl::switchOn()
{
	if (this->control != 0)
		return true;
	else
		return false;
}
