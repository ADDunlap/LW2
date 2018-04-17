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

	virtual void accrue(double rate)
	{
	}
	Account()
	{
	}
	double getBalance()
	{
		return balance;
	}
	void setBalance(double b)
	{
		balance = b;
	}

	void setCustomer(Customer c)
	{
		customer = c;
	}

	void setNumber(string n)
	{
		number = n;
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
		s.append("Account number: ");
		s.append(number);
		s.append(" Customer: ");
		s.append(customer.toString());
		s.append(" Balance: ");
		std::string balanceAsString = std::to_string(balance);
		s.append(balanceAsString);
		return s;
	}
};

