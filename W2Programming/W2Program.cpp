//W2 Program
//Roman numeral conversion program
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

int main()
{
	char rNum[10];
	romanType myRomanNum;
	
	cout << "Enter the Roman numeral you want to convert to a positive integer. " << endl;
	cin  >> rNum[10];
	
	myRomanNum.setRomanNum(rNum);
	myRomanNum.convertNum();
	myRomanNum.pickInt();
	myRomanNum.print();
	
	
	//A. Store the number as a Roman numeral.
	//B. Convert and store the number as a positive integer
	//C. Print the number as a Roman numberal or positive integer as requested by the user.
	//D. Test your program using the following Roman numerals: MCXIV, CCCLIX, MDCLXVI.
	/*
		M --- 1000
		D --- 500
		C --- 100
		L --- 50
		X --- 10
		V --- 5
		I --- 1
	*/
	
return 0;
}
