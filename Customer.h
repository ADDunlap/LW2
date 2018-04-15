#pragma once
using namespace std;
#include<string>
class Customer
{
public:
	string name;

	Customer(string cust)
	{
		name = cust;
	}

	string toString()
	{
		return name;
	}
};

