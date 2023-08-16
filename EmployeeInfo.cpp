#include "EmployeeInfo.h"

void EmployeeInfo::setId(int i)
{
	id = i;
}

void EmployeeInfo::setHireDate(Date h)
{
	hireDate = h;
}

int EmployeeInfo::getId()
{
	return id;
}

void EmployeeInfo::getHireDate()
{
	hireDate.printDate();
}

EmployeeInfo::EmployeeInfo(string name, string address, string city, string state, string phone, int id, Date hireDate) 
{
	this->name = name;
	this->address = address;
	this->city = city;
	this->state = state;
	this->phone = phone;
	this->id = id;
	this->hireDate = hireDate;
}