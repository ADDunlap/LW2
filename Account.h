#pragma once
using namespace std;
#include<string>
#include "Customer.h"
class Account
{
public:
	string number;
	double balance;
	Customer customer;

	virtual void accrue(double rate)
	{
	}

	double balance()
	{
		return balance;
	}

	void deposit(double amount)
	{
		balance += amount;
	}

	void withdraw(double amount)
	{
		balance -= amount;
	}

	string toString()
	{
		string s;
		s = "Account number: " + number + " Customer: " + customer + " Balance: " + balance;
		return s;
	}
};

