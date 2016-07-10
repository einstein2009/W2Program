//Program to test class employee.h

#include <iostream>
#include <iomanip>
#include <string>
#include "employee.h"

using namespace std;

int main()
{
	employee employeeInfo;
	
	string employeeName;
	int yearsWorked;
	double yearlySalary;
	
	cout << "Enter the employees name. ";
	getline(cin, employeeName);
	cout << endl;
	
	cout << "Enter the years worked. ";
	cin  >> yearsWorked;
	cout << endl;
	
	cout << "Enter the employees salary. ";
	cin  >> yearlySalary;
	cout << endl;
	
	employeeInfo.setData(employeeName, yearsWorked, yearlySalary);

	cout << "Enter the updated salary. ";
	cin  >> yearlySalary;
	cout << endl;
	
	employeeInfo.updateSalary(yearlySalary);
	cout << "Employee new salary: " << employeeInfo.getSalary() << endl;
	cout << endl;
	
	cout << "Enter the updated years worked. ";
	cin  >> yearsWorked;
	cout << endl;
	
	employeeInfo.setData(employeeName, yearsWorked, yearlySalary);
	
	employeeInfo.getNumOfServiceYears();
	cout << "Employee new years worked: " << employeeInfo.getNumOfServiceYears() << endl;
	cout << endl;
	
	employeeInfo.print();
	

return 0;
}
