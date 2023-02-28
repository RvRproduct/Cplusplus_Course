/*
 * account.cpp
 *
 *  Created on: Nov 11, 2022
 *      Author: Roberto Reynoso
 */
#include <iostream>
#include "account.h"
#include <list>
#include <string>

using namespace std;

int Account::next_id = 1;

void add_account(list<Account>& account_list);
void display_all_accounts(list<Account>& account_list);
list<Account>::iterator choose_by_id(list<Account>& account_list, int id);

Account::Account(): id(0), name(""), balance(0){

}

void add_account(list<Account>& account_list){

	string aname;
	string abalance;
	string aid;

	cout << "Enter your name: ";
	cin >> aname;
	cout << "Enter your balance: ";
	cin >> abalance;


	}

void choose_by_id(){
	list<Account> members;

	string input;

	cout << "Enter an account ID: ";
		cin >> input;
		list<Account>::iterator it;
		it = choose_by_id(members, stoi(input));

		if (it != members.end()) {
			// we found a member with that id
			cout << "Found that ID!" << endl;
			it->display();
		}
		else {
			cout << "that ID was not found!" << endl;
		}


	}


int Account::get_id() const
{
	return id_number;
}



void display_all_accounts(list<Account>& account_list){

	list<Account>::iterator it;
			for(it = account_list.begin(); it != account_list.end(); it++)
			{
				it->display_info();

			}

}

list<Account>::iterator choose_by_id(list<Account>& account_list, int id)
{
	list<Account>::iterator it;
	for(it = account_list.begin(); it != account_list.end(); it++)
	{
		if (it->get_id() == id)
		{
			return it;
		}
	}

	return it;
}


void Account::change_balance_add(float change_balance) {

	balance += change_balance;

	}

void Account::change_balance_sub(float change_balance) {

	balance -= change_balance;

	}

void Account::display_info() {
	cout << "\nAccount ID: " << id << " Name: " << name << " Balance: " << balance << "\n";
}

void Account::option_choice_action() {
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
			<< "6. Display all Accounts\n"
			<< "Your choice: ";
	cin >> option_choice;

	if (option_choice == 1) {
		display_info();
	}

	if (option_choice == 2) {
		cout << "\nAmount to deposit: ";
		cin >> change;
		change_balance_add(change);
	}

	if (option_choice == 3) {
		cout << "\nAmount to withdraw: ";
		cin >> change;
		change_balance_sub(change);
	}

	if (option_choice == 4) {

	}

	if (option_choice == 5) {

	}

	if (option_choice == 6) {

	}

	}

}

