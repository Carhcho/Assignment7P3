#pragma once
#include <string>
#include <iostream>
#include "Person.h"
#include "Date.h"
using namespace std;

class EmployeeInfo : public Person
{
private:
	int id;
	Date hireDate;
public:
	void setId(int i);
	void setHireDate(Date h);
	int getId();
	void getHireDate();
	EmployeeInfo(string name, string address, string city, string state, string phone, int id, Date hireDate);
};

