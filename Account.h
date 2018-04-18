#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "stdafx.h"
#include "Customer.h"
using std::string;
class Account
{
public:

	Account();
	
	virtual void accrue(double);

	void setBalance(double);

	void setCustomer(Customer);

	void setNumber(string);

	double getBalance();

	void withdraw(double);
	
	void deposit(double);


};
#endif
