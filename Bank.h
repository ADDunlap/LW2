#ifndef BANK_H
#define BANK_H
#include "stdafx.h"
#include "Account.h"
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
