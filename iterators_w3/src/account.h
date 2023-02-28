/*
 * account.h
 *
 *  Created on: Nov 11, 2022
 *      Author: Roberto Reynoso
 */

#include <string>
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

using namespace std;

class Account {
private:
	int id;
	string name;
	float balance;
	static int id_number;
	static int next_id;

public:
	Account();

	void start_info();

	void change_balance_add(float change_balance);

	void change_balance_sub(float change_balance);

	void display_info();

	void display_all();

	void add_new_account();

	void choose_by_id();

	void option_choice_action();

	void get_id() const;
};

#endif /* ACCOUNT_H_ */
