//============================================================================
// Name        : classes_w2.cpp
// Author      : Roberto Reynoso
// Version     :
// Copyright   : Your copyright notice
// Description : Bank with classes C++, Ansi-style
//============================================================================

#include <iostream>
#include "account.h"
#include <list>
#include <string>
using namespace std;

int Account::next_id = 1;

void add_account(list<Account>& account_list);
void display_all_accounts(list<Account>& account_list);
list<Account>::iterator choose_by_id(list<Account>& account_list, int id);


int main() {

	Account app;

	app.start_info();
	app.option_choice_action();

	return 0;
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
