#pragma once
#include "stdafx.h"
using namespace std;
class Customer
{
public:
	string name;

	Customer()
	{
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

