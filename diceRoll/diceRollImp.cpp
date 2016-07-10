//Implementation file for class diceRoll.h

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "diceRoll.h"

using namespace std;

die::die()
{
	num = 1;
	srand(time(0));
}

void die::roll()
{
	num = rand() % 6 + 1;
}

int die::getNum() const
{
	return num;
}
