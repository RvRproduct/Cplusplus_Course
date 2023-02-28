//============================================================================
// Name        : w3.cpp
// Author      : Roberto Reynoso
// Version     :
// Copyright   : Your copyright notice
// Description : Bank with classes C++, Ansi-style
//============================================================================

#include <iostream>
#include "account.h"
#include <string>
#include <list>
using namespace std;


list<Account>::iterator find_account(list<Account>& accounts);

int main() {
	list<Account> accounts;
	float change;
	int option_choice = -1;
	while (option_choice != 0) {

	cout << "\nAccount Menu:\n"
			<< "0. Quit Program\n"
			<< "1. Display Account Information\n"
			<< "2. Add a deposit to an account\n"
			<< "3. Withdraw from an account\n"
			<< "4. Add new account\n"
			<< "5. Find account by ID\n"
			<< "Your choice: ";
	cin >> option_choice;

	if (option_choice == 1) {
		for(auto it = accounts.begin(); it != accounts.end(); it++)
		{
			it->display_info();

		}

	} else if (option_choice == 2) {

		list<Account>::iterator it = find_account(accounts);
		if (it == accounts.end())
		{
			cout << "\nAccount not found\n";
		} else {
			it->display_info();
			string input;
			cout << "\nAmount to deposit: ";
			cin >> input;
			change = stof(input);
			it->change_balance_add(change);
		}
	} else if (option_choice == 3) {

		list<Account>::iterator it = find_account(accounts);
		if (it == accounts.end())
		{
			cout << "\nAccount not found\n";
		} else {
			it->display_info();
			string input;
			cout << "\nAmount to withdraw: ";
			cin >> input;
			change = stof(input);
			it->change_balance_sub(change);
	}

	} else if (option_choice == 4) {

		Account account;
		account.start_info();
		accounts.push_back(account);
		cout << "Added account\n";

	} else if (option_choice == 5) {

		list<Account>::iterator it = find_account(accounts);
		if (it != accounts.end())
		{
			it->display_info();
		} else {
			cout << "Account not found\n";
		}

	} else {
		cout << "That is not a valid menu option, try again\n";
	}


	}

}


list<Account>::iterator find_account(list<Account>& accounts)
{
	string input;
	cout << "Enter an ID if the account to search for: ";
	cin >> input;
	int id = stoi(input);

	list<Account>::iterator it;
	for(it = accounts.begin(); it != accounts.end(); it++)
	{
		if (it->get_id() == id)
		{
			return it;
		}
	}

	return it;
}








