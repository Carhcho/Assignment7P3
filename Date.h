#pragma once
#include <string>
#include <iostream>
using namespace std;

class Date
{
public:
	int day = 0;
	int month = 0;
	int year= 0;
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay();
	int getMonth();
	int getYear();
	void printDate();
	Date(int day, int month, int year);
	Date();
};

