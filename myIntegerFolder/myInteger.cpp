//file that runs intManip.h

#include <iostream>
#include <cmath>
#include "intManip.h"

using namespace std;

int main()
{
	integerManipulation number;
	
	long long num;
	
	cout << "Enter the integer: ";
	cin  >> num;
	cout << endl;
	
	number.setNum(num);
	
	number.classifyDigits();
	
	cout << number.getNum() << "------" << endl << "The number of even digits: " << number.getEvensCount() << endl
		  << "The number of zeros: " << number.getZerosCount() << endl
		  << "The number of odd digits: " << number.getOddsCount() << endl;
	
	return 0;
}
