#pragma once
#include "Account.h"
#include "Customer.h"
#include "SavingsAccount.h"
#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

class Bank
{
public:
	std::unordered_multiset<Account> accounts;
	
	void addAccount(Account account)
	{
		accounts.insert(account);
	}
	
	void accrue(double rate)
	{
		for (auto a = accounts.begin(); a != accounts.end(); ++a) 
		{
			a.accrue(rate);
		}
	}
	
	string toString() 
	{
		string r = "";
		for (auto a = accounts.begin(); a != accounts.end(); ++a) 
		{
			r.append(a.toString());
			r.append("\n");
		}
		return r;
	}
	
	int main()
	{
		Bank bank;
		Customer c = new Customer("Ann");
		bank.addAccount(new SavingsAccount("01002",c,200.00));
		bank.accrue(0.02);
		cout << bank.toString();
		return 0;
	}
	
};
