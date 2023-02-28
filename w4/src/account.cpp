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

Account::Account(): id_number(0), balance(0){
}


void Account::start_info()
{
	id_number = next_id++;
	string input;

	std::cout << "name: ";
	cin >> name;

	std::cout << "balance: ";
	cin >> input;
	balance = std::stof(input);

}

void Account::display_info() const {
	cout << "\nAccount ID: " << id_number << " Name: " << name << " Balance: " << balance << "\n";
}

void Account::change_balance_add(float change_balance) {

	balance += change_balance;

	}

void Account::change_balance_sub(float change_balance) {
	balance -= change_balance;

	}


int Account::get_id() const
{
	return id_number;
}






