#include "Date.h"

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date()
{
}

void Date::setDay(int d)
{
	if (d < 0 || d > 31) {
		cout << "invalid day!" << endl;
	}
	else
	{
		day = d;
	}
}

void Date::setMonth(int m)
{
	if (m < 0 || m > 12) {
		cout << "invalid month!" << endl;
	}
	else
	{
		month = m;
	}
}

void Date::setYear(int y)
{
	year = y;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::printDate()
{
	string mes = "";
	if (month == 1) {
		mes = "January";
	}
	else if(month == 2){
		mes = "February";
	}
	else if (month == 3) {
		mes = "March";
	}
	else if (month == 4) {
		mes = "April";
	}
	else if (month == 5) {
		mes = "May";
	}
	else if (month == 6) {
		mes = "June";
	}
	else if (month == 7) {
		mes = "July";
	}
	else if (month == 8) {
		mes = "August";
	}
	else if (month == 9) {
		mes = "September";
	}
	else if (month == 10) {
		mes = "October";
	}
	else if (month == 11) {
		mes = "November";
	}
	else if (month == 12) {
		mes = "December";
	}
	cout << mes << " " << day << ", " << year << endl;
}
