#pragma once
using namespace std;
#include<string>
#include "Customer.h"
class Account
{
public:
	string number;
	double balance = 0;
	Customer customer;

	Account(string AccountNumber, double CurBalance, Customer cust)
	{
		number = AccountNumber;
		balance = CurBalance;
		customer = cust;
	}
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

