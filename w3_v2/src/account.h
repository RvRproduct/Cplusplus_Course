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
	int option_choice;
public:
	Account();

	void start_info();

	void change_balance_add(float change_balance);

	void change_balance_sub(float change_balance);

	void display_info();

	void option_choice_action();
};

#endif /* ACCOUNT_H_ */
