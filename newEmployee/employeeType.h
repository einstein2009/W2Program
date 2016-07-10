
#ifndef H_employeeType
#define H_employeeType

#include "personType.h"
#include <iostream>
#include <string>

class employeeType: public personType
{
public:
	virtual void print() const = 0;
		//function to output employee's data.
	virtual double calculatePay() const = 0;
		//function to calculate and return the wages.
		//Postcondition: Pay is calculated and returned
		
	void setId(long id);
		//Function to set the salary.
		//Postcondition: returns personId;
		
	long getId() const;
		//function to retrieve the id.
		//Postcondition: returns personId
		
	employeeType(string first = "", string last = "", long id = 0);
		//Constructor with parameters
		//Sets the first name, last name, payRate, and hoursWorked according to the parameters. If no value is specified, the default values are assumed.
		//Postcondition: firstName = first; lastName = last; personId = id;
	
private:
	long personId;
};

void employeeType::setId(long id)
{
	personId = id;
}

long employeeType::getId() const
{
	return personId;
}

employeeType::employeeType(string first, string last, long id)
				 :personType(first, last)
{
	personId = id;
}
#endif
