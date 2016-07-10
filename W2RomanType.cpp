//W2 Program
//Roman numeral conversion program Implementation file
//Nick Ackors
//7/3/2016

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "W2RomanType.h"

using namespace std;


void romanType::setRomanNum(char rNum)
{
// need to figure out.
}

char romanType::getRomanNum()
{
	for (int i = 0; i <= 10; i++)
	{
	return romanNum[10];
	}
}

int romanType::convertNum(char rNum)
{
	map <char, int> roman;
	roman['M'] = 1000;
	roman['D'] = 500;
	roman['C'] = 100;
	roman['L'] = 50;
	roman['X'] = 10;
	roman['V'] = 5;
	roman['I'] = 1;
	
	int posInt = 0;
	
	for (int i = 0; i <= 10; i++)
	{
		if (roman[rNum[i]] < roman[rNum[i]])
			posInt -= romanrNum[i]];
		else
			posInt += roman[rNum[i]];
	}
	posInt += roman[rNum[i] -1];
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
			return true;
		else
			return false;
}
	
void romanType::print()
{
	if (pickInt(1))
		cout << "The positive integer of " << for (int i = 0; i <= 10; i++){romanNum[10]} << " is " << posInt << endl;
	else
		cout << "The roman numeral entered is " << for (int i = 0; i <= 10; i++){romanNum[10]} << endl;
	
}
/*
romanType::romanType()
{
	convertNum(
*/




