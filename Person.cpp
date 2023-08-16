#include "Person.h"

Person::Person(string name, string address, string city, string state, string phone)
{
	this->name = name;
	this->address = address;
	this->city = city;
	this->state = state;
	this->phone = phone;
}

Person::Person()
{
}

void Person::setName(string n)
{
	name = n;
}

void Person::setAddress(string a)
{
	address = a;
}

void Person::setCity(string c)
{
	city = c;
}

void Person::setState(string s)
{
	state = s;
}

void Person::setPhone(string p)
{
	if (p.length() > 10) {
		cout << "invalid phone number!" << endl;
	}
	else
	{
		phone = p;
	}
}

string Person::getName()
{
	return name;
}

string Person::getAddress()
{
	return address;
}

string Person::getCity()
{
	return city;
}

string Person::getState()
{
	return state;
}

string Person::getPhone()
{
	return phone;
}
