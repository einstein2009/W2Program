//personType.h class file

class personType
{
public:
	void print() const;
		//Function to output the first name and the last name
		//in the form firstName lastName.
	
	void setName(string first, string last);
		//Function to set firstName and lastName according to the parameters.
		//Postcondition: firstName = first; lastName = last;
	
	string getFirstName() const;
		//Function to return the first name.
		//Postcondition: The value of the first name is returned.
	
	string getLastName() const;
		//Function to return the last name.
		//Postcondition: The value of the last name is returned.
	
	personType(string first = "", string last = "");
		//Constructor
		//Sets firstName and lastName according to the parameters.
		//The default values of the parameters are null strings.
		//Postcondition: firstName = first; lastName = last;
		
private:
	string fistName;	//variable to store the first name
	string lastName;	//variable to store the last name
};
