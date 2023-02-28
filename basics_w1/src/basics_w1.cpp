//============================================================================
// Name        : basics_w1.cpp
// Author      : Roberto Reynoso
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

// prompting the user for the name and balance
	string name;
	cout << "Enter your name: ";
	cin >> name;
	float balance;
	cout << "Enter your balance: ";
	cin >> balance;
	int id = 0;

// variables for changes
	float change_balance;
	int option_choice {4};

// Menu Options
	while (option_choice != 0) {

	cout << "\nAccount Menu:\n"
			<< "0. Quit Program\n"
			<< "1. Display Account Information\n"
			<< "2. Add a deposit to an account\n"
			<< "3. Withdraw from an account\n"
			<< "Your choice: ";
	cin >> option_choice;

// logic to add, subtract, and view account balance and info
	if (option_choice == 1) {
		cout << "\nAccount ID: " << id << " Name: " << name << " Balance: " << balance << "\n";
	}

	if (option_choice == 2) {
		cout << "\nAmount to deposit: ";
		cin >> change_balance;
		balance += change_balance;
	}

	if (option_choice == 3) {
			cout << "\nAmount to withdraw: ";
			cin >> change_balance;
			balance -= change_balance;
		}
	}
	return 0;
	}

