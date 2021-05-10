#pragma once
#include "TheGame.h"

class Computer : public TheGame
{
public:
	Computer(){}
	char ChooseComputerLevel();
	void LessSpaces(general* f);

};