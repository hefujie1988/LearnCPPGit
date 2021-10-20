#pragma once
#include<iostream>
#include<vector>
#include "Employee.h"
using namespace std;
using namespace Records;

namespace Records
{
	const int kFirstEmployeeNumber = 10000;
	class Database
	{
	public:
		Employee& addEmployee(const string& firstName, const string& lastName);
		Employee& getEmployee(int employeeNumber);
		Employee& getEmployee(const string& firstName, const string& lastName);

		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;
	private:
		vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployeeNumber;
	};
}


