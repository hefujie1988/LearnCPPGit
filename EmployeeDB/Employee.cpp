#include "Employee.h"
#include <string>
#include <iostream>
Records::Employee::Employee(const string& firstName, const string& lastName):mFirstName(firstName), mLastName(lastName)
{
}

void Records::Employee::promote(int raiseAmount)
{
	setSalary(getSalary() + raiseAmount);
}

void Records::Employee::demote(int demeritAmount)
{
	setSalary(getSalary() - demeritAmount);
}

void Records::Employee::hire()
{
	mHired = true;
}

void Records::Employee::fire()
{
	mHired = false;
}

void Records::Employee::display() const
{
	cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
	cout << "-------------------------" << endl;
	cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
	cout << "Employee Number: " << getEmployeeNumber() << endl;
	cout << "Salary: $" << getSalary() << endl;
	cout << endl;
}

void Records::Employee::setFirstName(const string& firstName)
{
	mFirstName = firstName;
}

const string& Records::Employee::getFirstName() const
{
	return mFirstName;
}

void Records::Employee::setLastName(const string& lastName)
{
}

const string& Records::Employee::getLastName() const
{
	return mLastName;
}

void Records::Employee::setEmployeeNumber(int employeeNumber)
{
}

int Records::Employee::getEmployeeNumber() const
{
	return 0;
}

void Records::Employee::setSalary(int newSalary)
{
}

int Records::Employee::getSalary() const
{
	return 0;
}

bool Records::Employee::isHired() const
{
	return false;
}
