/*
 * account.cpp
 *
 *  Created on: Nov 11, 2022
 *      Author: Roberto Reynoso
 */
#include <iostream>
#include "account.h"
using namespace std;

Account::Account(): id(0), name(""), balance(0), option_choice(4){ // @suppress("Class members should be properly initialized")

}


void Account::start_info() {

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your balance: ";
	cin >> balance;

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

	while (option_choice != 0) {

	cout << "\nAccount Menu:\n"
			<< "0. Quit Program\n"
			<< "1. Display Account Information\n"
			<< "2. Add a deposit to an account\n"
			<< "3. Withdraw from an account\n"
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

	}

}

