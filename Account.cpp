#pragma once
using namespace std;
#include "stdafx.h"
//#include "Account.h"
#include "Customer.h"
class Account
{
protected:
	std::string number;
	double balance = 0;
	Customer customer;
public:

	Account(std::string AccountNumber, Customer cust, double CurrentBalance)
	{
		number = AccountNumber;
		balance = CurrentBalance;
		customer = cust;
	}

	virtual void accrue(double d)
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

	void setNumber(std::string n)
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

	std::string toString()
	{
		std::string s;
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

