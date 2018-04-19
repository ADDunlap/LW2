#ifndef BANK_H
#define BANK_H
#include "stdafx.h"
#include "Account.h"
#include "Customer.h"
#include "SavingsAccount.h"
using std::string;
class Bank
{
	public:
	
	void addAcount(Account);
	void accrue(double);
	string toString();
	int main();	
};
#endif
