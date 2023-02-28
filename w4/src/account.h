/*
 * account.h
 *
 *  Created on: Nov 11, 2022
 *      Author: Roberto Reynoso
 */

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Account {
private:
	int id_number;
	string name;
	float balance;
	static int next_id;
public:
	Account();

		void start_info();

		void change_balance_add(float change_balance);

		void change_balance_sub(float change_balance);

		void display_info() const;

		int get_id() const;
	};

