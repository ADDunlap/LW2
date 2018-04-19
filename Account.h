#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "stdafx.h"
#include "Customer.h"

class Account
{
public:

	Account(std::string, Customer, double);
	
	virtual void accrue(double);

	void setBalance(double);

	void setCustomer(Customer);

	void setNumber(std::string);

	double getBalance();

	void withdraw(double);
	
	void deposit(double);

	std::string toString();

};
#endif
