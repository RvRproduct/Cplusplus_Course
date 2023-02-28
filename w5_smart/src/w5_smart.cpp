//============================================================================
// Name        : w4_alg.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "account.h"
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
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
			<< "6. Remove account\n"
			<< "7. Show total balance for all accounts\n"
			<< "8. Add a dividend to all accounts\n"
			<< "9. Add contact information to an account\n"
			<< "Your choice: ";
	cin >> option_choice;

	if (option_choice == 1) {
		for_each(accounts.begin(), accounts.end(), [](auto display)
				{
					display.display_info();
				});

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

	} else if (option_choice == 6) {
		auto id = find_account(accounts);
		if (id == accounts.end())
		{
			cout << "\nAccount not found\n";
		} else {
		auto end = remove_if(accounts.begin(), accounts.end(), [id](auto& account){
			return id->get_id() == account.get_id();
		});
		accounts.erase(end, accounts.end());

		cout << "Account Deleted\n";
		}

	} else if (option_choice == 7) {
		auto total = accumulate(accounts.begin(), accounts.end(), 0.0f,
				[](auto accumulator, auto& account) {
			return accumulator + account.get_balance();
		});
		cout << "Total in all accounts: $" << total << endl;
	} else if (option_choice == 8) {

		string input;
		cout << "Enter the dividend as a percentage: ";
		cin >> input;
		change = (stof(input) * 0.01);
		transform(accounts.begin(), accounts.end(), accounts.begin(), [change](auto& account){
			account.change_balance_add((account.get_balance() * change));
			return account;
		});
	} else if (option_choice == 9) {
		list<Account>::iterator it = find_account(accounts);
		if (it == accounts.end())
		{
			cout << "Account not found\n";

		} else {
			cout << "Account Found: ";
			it->display_info();
			it->add_contact();

		}
	}
	else {
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
