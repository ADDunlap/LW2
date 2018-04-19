#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "stdafx.h"
#include "Account.h"


class SavingsAccount: public Account
{
public:
	SavingsAccount(std::string, Customer, double);

};
#endif