#include "Database.h"
#include<iostream>

Employee& Records::Database::addEmployee(const string& firstName, const string& lastName)
{
	Employee theEmployee(firstName, lastName);	//创建一个Employee对象并调用构造函数初始化类成员
	theEmployee.setEmployeeNumber(mNextEmployeeNumber);
	theEmployee.hire();
	mEmployees.push_back(theEmployee);	//注意vector的元素添加
	return mEmployees[mEmployees.size() - 1];
}

Employee& Records::Database::getEmployee(int employeeNumber)
{
	for (auto& employee : mEmployees)	//类似foreach
	{
		if (employee.getEmployeeNumber() == employeeNumber) {
			return employee;
		}
	}
	throw logic_error("No employee found");
}

Employee& Records::Database::getEmployee(const string& firstName, const string& lastName)
{
	for (auto& employee : mEmployees) {
		if (employee.getFirstName() == firstName &&
			employee.getLastName() == lastName) {
			return employee;
		}
	}
	throw logic_error("No employee found.");
}

void Records::Database::displayAll() const
{
	for (const auto& employee : mEmployees) {
		employee.display();
	}
}

void Records::Database::displayCurrent() const
{
	for (const auto& employee : mEmployees) {
		if (employee.isHired())
			employee.display();
	}
}

void Records::Database::displayFormer() const
{
	for (const auto& employee : mEmployees) {
		if (!employee.isHired())
			employee.display();
	}
}
