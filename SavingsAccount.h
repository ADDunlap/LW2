#pragma once
#include<string>
#include "Customer.h"
#include "Account.h"
using namespace std;

class SavingsAccount:public Account
{
private:
	double interest = 0;
public:
	void accrue(double rate)
	{
		double balance = this->balance;
		balance += balance * rate;
		interest += balance * interest;
	}
};

