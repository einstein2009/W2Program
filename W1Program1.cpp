//W1 Program
//Capitalization of input.
//Nick Ackors
//6/28/2016

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>

using namespace std;

int main()
{	

	int i = 0;
	char *str;
	char c;
	
	//input the string
	str = new char[50];
	cout << "Please enter the desired string to be converted to capitals. ";
	cin.get(str, 50);
	//cout << str;
	//output the string in CAPS

		while (str[i])
		{
			c=str[i];
			putchar (toupper(c));
			i++;
		} 

	cout << endl;

return 0;
}
