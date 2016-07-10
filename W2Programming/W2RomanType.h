//W2 Program
//Roman numeral conversion program class W2RomanType.h file
//Nick Ackors
//7/3/2016

class romanType
{
public:

//A. Store the number as a Roman numeral.

	void setRomanNum(char rNum);
		//Function to set romanNun.
		//Postcondition: romanNum = rNum;

	char getRomanNum();
		//Function to get romanNuneral.
		//Postcondition: The value of romanNumeral will be returned.

//B. Convert and store the number as a positive integer
	
	int convertNum();
		//Function to convert romanNum to, and return posInt.
		//Postcondition: posInt = romanNum; return posInt;

	void setPosInt(int pInt);
		//Function to set posInt;
		//Postcondition: posInt = pInt;
	
	int getPosInt();
		//Function to return posInt.
		//Postcondition: The value of posInt is returned. 
	
//C. Print the number as a Roman numberal or positive integer as requested by the user.
	
	bool pickInt();
		//Function to return the format to print
		//Postcondition: if true, return 1;	if false, return 0;
	
	void print();
		//Function to output posInt.
	
private:
	char romanNum[10];
	int posInt;
};
