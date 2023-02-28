/*
 * account.h
 *
 *  Created on: Nov 11, 2022
 *      Author: Roberto Reynoso
 */

#include "contact.h"

#include <string>
#include <iostream>
#include <list>
#include <memory>

using namespace std;

class Account {
private:
	int id_number;
	string name;
	float balance;
	static int next_id;

	std::shared_ptr<Contact> contact_info;
public:
	Account();

		void start_info();

		void change_balance_add(float change_balance);

		void change_balance_sub(float change_balance);

		void display_info() const;

		float get_balance() const;

		int get_id() const;

		void add_contact();
	};

