//Implementation for class employee.h

#include <iostream>
#include <string>
#include <iomanip>
#include <istream>
#include "employee.h"

using namespace std;

void employee::setData(string employeeName, int yearsWorked, double yearlySalary)	
{
	name = employeeName;
	numOfServiceYears = yearsWorked;
	salary = yearlySalary;
}

void employee::print() const
{
	cout << "Employee Name: " << name << endl;
	cout << "Number of years in Service: " <<  numOfServiceYears << endl;
	cout << "Salary: " << salary << endl;
}

void employee::updateSalary(double x)
{
	salary = x;
}

int employee::getNumOfServiceYears() const
{
	return  numOfServiceYears;
}

double employee::getSalary() const
{
	return salary;
}

employee::employee()
{
	name = " ";
	numOfServiceYears = 0;
	salary = 0.0;
}

employee::employee(string, int, double)
{
	name = "Harry Miller";
	numOfServiceYears = 30;
	salary = 60000.0;
}

employee::employee(int, double)
{
	name = " ";
	numOfServiceYears = 25;
	salary = 55000.0;
}
