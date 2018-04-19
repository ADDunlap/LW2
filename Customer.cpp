#pragma once
#include "stdafx.h"
using namespace std;

class Customer
{
public:
	std::string name;

	Customer()
	{
	}

	Customer(std::string cust)
	{
		name = cust;
	}

	std::string toString()
	{
		return name;
	}
};

