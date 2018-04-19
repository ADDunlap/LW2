#pragma once
#include "stdafx.h"
#include "Account.h"
using namespace std;

class SavingsAccount :public Account
{
private:
	double interest = 0;
public:

	SavingsAccount(string number, Customer customer, double balance) : Account(number, customer, balance)
	{
		setBalance(balance);
		setNumber(number);
		setCustomer(customer);
	}
	void accrue(double rate)
	{
		double Curbalance = getBalance();
		Curbalance += Curbalance * rate;
		interest += Curbalance * interest;
		setBalance(Curbalance);
	}
};