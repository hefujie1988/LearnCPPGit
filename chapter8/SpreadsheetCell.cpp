#include "SpreadsheetCell.h"

SpreadsheetCell::SpreadsheetCell(double initialValue)
{
	setValue(initialValue);
}

SpreadsheetCell::SpreadsheetCell(string_view initialValue)
{
	setString(initialValue);
}

SpreadsheetCell::SpreadsheetCell()
{
	mValue = 0;
}

void SpreadsheetCell::setValue(double inValue)
{
	mValue = inValue;
}

double SpreadsheetCell::getValue() const
{
	return mValue;
}

void SpreadsheetCell::setString(std::string_view inString)
{
	mValue = stringToDouble(inString);
}

string SpreadsheetCell::getString() const
{
	return doubleToString(mValue);
}

string SpreadsheetCell::doubleToString(double inValue) const
{
	return to_string(inValue);
}

double SpreadsheetCell::stringToDouble(string_view inString) const
{
	return strtod(inString.data(), nullptr);
}
