#pragma once
#include<string>
#include<string_view>

using namespace std;

class SpreadsheetCell
{
public:
	SpreadsheetCell(double initialValue);
	SpreadsheetCell(string_view initialValue);
	SpreadsheetCell();
	void setValue(double inValue);
	double getValue() const;
	void setString(std::string_view inString);	//string_view需要在项目设置里设置支持C++17
	string getString() const;
private:
	double mValue;
	string doubleToString(double inValue) const;
	double stringToDouble(string_view inString) const;
};

