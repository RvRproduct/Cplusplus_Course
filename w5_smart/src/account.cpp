/*
 * account.cpp
 *
 *  Created on: Nov 11, 2022
 *      Author: Roberto Reynoso
 */
#include <iostream>
#include <iomanip>
#include "account.h"
#include <list>
#include <string>
using namespace std;

int Account::next_id = 1;

Account::Account(): id_number(0), balance(0), contact_info(nullptr){
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
	cout << fixed << setprecision(2) << "\nAccount ID: " << id_number << " Name: " << name << " Balance: " << balance << "\n";
	if (contact_info != nullptr)
	    {
	        contact_info->display_contact_info();
	    }
}

void Account::change_balance_add(float change_balance) {

	balance += change_balance;

	}

void Account::change_balance_sub(float change_balance) {
	balance -= change_balance;

	}

float Account::get_balance() const {
	return balance;
}

int Account::get_id() const
{
	return id_number;
}

void Account::add_contact()
{
	contact_info = std::make_shared<Contact>();
	contact_info->get_contact_info();

}
