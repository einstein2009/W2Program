//W2 Program
//Roman numeral conversion program Implementation file
//Nick Ackors
//7/3/2016

#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "W2RomanType.h"

using namespace std;


void romanType::setRomanNum(char rNum)
{
	strncpy (romanNum, rNum, sizeof(rNum));
}

char romanType::getRomanNum()
{
	return for (int i = 0; i <= 10; i++){romanNum[10]};
}

int romanType::convertNum()
{
	for (int i = 0; i <= 10; i++)
	{	
		if (romanNum[i] = 'M')
			posInt += 1000;
		else if (romanNum[i] = 'D')
			posInt += 500;
		else if (romanNum[i] = 'C')
			posInt += 100;
		else if (romanNum[i] = 'L')
			posInt += 50;
		else if (romanNum[i] = 'X')
			posInt += 10;
		else if (romanNum[i] = 'V')
			posInt += 5;
		else if (romanNum[i] = 'I')
			posInt += 1;
		else
			cout << "Invalid entry: " << romanNum[i] << endl;
	}

	return posInt;
}

void romanType::setPosInt(int pInt)
{
	posInt = pInt;
}

int romanType::getPosInt()
{
	return posInt;
}

bool romanType::pickInt()
{
	char format;
	
		cout << "Pick the format to print. (I,i) (R,r)";
		cin  >> format;
		cout << endl;
	
		if (format == 'I' || format == 'i')
			return 1;		//true
		else
			return 0;		//false
}
	
void romanType::print()
{
	if (pickInt(1))
		cout << "The positive integer of " << for (int i = 0; i <= 10; i++){romanNum[10]} << " is " << posInt << endl;
	else
		cout << "The roman numeral entered is " << for (int i = 0; i <= 10; i++){romanNum[10]} << endl;
	
}

