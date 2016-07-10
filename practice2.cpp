#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>

using namespace std;

int main()
{	
	char arraySize;
	char *charArray;
	int i =0;
	
	//input the string
	cout << "Please enter the desired string to be converted to capitals, and the number of characters used.";
	cin  >> charArray, arraySize;
	cout << endl;
	
	//output the string in CAPS
	
	charArray = new char[arraySize];
	
	while (charArray[i])
	{
		arraySize=charArray[i];
		putchar (toupper(c));
		i++;
	}		

return 0;
}


