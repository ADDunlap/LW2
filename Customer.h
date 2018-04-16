#pragma once
using namespace std;
#include<string>
class Customer
{
public:
	string name;
	Customer()
	{
		name = "Customer";
	}
	Customer(string cust)
	{
		name = cust;
	}

	string toString()
	{
		return name;
	}
};

