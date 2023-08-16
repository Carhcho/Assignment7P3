#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	string address;
	string city;
	string state;
	string phone;
	void setName(string n);
	void setAddress(string a);
	void setCity(string c);
	void setState(string s);
	void setPhone(string p);
	string getName();
	string getAddress();
	string getCity();
	string getState();
	string getPhone();
	Person(string name, string address, string city, string state, string phone);
	Person();
};

