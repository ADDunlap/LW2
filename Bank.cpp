#pragma once
#include "stdafx.h"
#include "SavingsAccount.h"
#include <iostream>
#include <unordered_set>
#include <list>


using namespace std;

class Bank
{
public:
	std::list<Account> accounts;
	
	void addAccount(Account account)
	{
		accounts.insert(accounts.begin(),account);
	}
	
	void accrue(double rate)
	{
		for (std::list<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it)
		{
			it->accrue(rate);
		}
	}
	
	string toString() 
	{
		string r = "";
		for (std::list<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it)
		{
			r.append(it->toString());
			r.append("\n");
		}
		return r;
	}
	
	int main()
	{
		Bank bank;
		Customer c =  Customer("Ann");
		SavingsAccount savings = SavingsAccount("01002", c, 200.00);
		bank.addAccount(savings);
		bank.accrue(0.02);
		cout << bank.toString();
		return 0;
	}
	
};