//Program used to roll a pair of dice.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "diceRoll.h"

using namespace std;

int main()
{
	die die1;
	die die2;
	
	cout << "Line 5: die1: " << die1.getNum() << endl;
	cout << "Line 6: die2: " << die2.getNum() << endl;
	
	die1.roll();
	cout << "Line 8: After rolling die1: " << die1.getNum() << endl;
	
	die2.roll();
	cout << "Line 10: After rolling die2: " << die2.getNum() << endl;
	
	cout << "Line 11: The sum of the numbers rolled by the dice is: "
		  << die1.getNum() + die2.getNum() << endl;
	
	die1.roll();
	die2.roll();
	
	cout << "Line 14: After again rolling, the sum of the numbers rolled by the dice is: "
		  << die1.getNum() + die2.getNum() << endl;
		  
	return 0;
}
