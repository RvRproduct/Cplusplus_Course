//============================================================================
// Name        : w6_myproject.cpp
// Author      : Roberto Reynoso
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>

#include "you.h"
using namespace std;

list<You>::iterator find_you(list<You>& yous);

int main() {
	list<You> yous;
	int choice = -1;

	while (choice != 0) {
		cout << "\nAccount Menu:\n"
					<< "0. Quit Program\n"
					<< "1. Display All Information\n"
					<< "2. Add Person\n"
					<< "3. Add New Task\n"
					<< "4. Find Person by ID and Display Personal Info/Tasks\n"
					<< "5. Remove Person\n"
					<< "6. Add Spouse\n"
					<< "7. Add New Task for Spouse\n"
					<< "Your choice: ";
		cin >> choice;

		if (choice == 1) {
			for_each(yous.begin(), yous.end(), [](auto display)
				{
					display.display();
				});
		} else if (choice == 2) {
			You you;
			you.you_info();
			yous.push_back(you);
			cout << "Added Person\n";

		} else if (choice == 3) {
			list<You>::iterator it = find_you(yous);
			if (it == yous.end())
			{
				cout << "Person not found\n";

			} else {
				it->add_task();

			}
		}


		else if (choice == 4) {
			list<You>::iterator it = find_you(yous);
			if (it != yous.end())
			{
				it->display();
			} else {
				cout << "Person not found\n";
			}
		} else if (choice == 5) {
			auto id = find_you(yous);
			if (id == yous.end())
			{
				cout << "\nPerson not found\n";
			} else {
			auto end = remove_if(yous.begin(), yous.end(), [id](auto& you){
				return id->get_id() == you.get_id();
			});
			yous.erase(end, yous.end());

			cout << "Person Deleted\n";
			}
		} else if (choice == 6) {
			list<You>::iterator it = find_you(yous);
			if (it == yous.end())
			{
				cout << "Person not found\n";

			} else {
				cout << "Person Found: \n";
				it->display();
				it->add_spouse();
				it->spouse_task_added();

			}
		} else if (choice == 7) {
			list<You>::iterator it = find_you(yous);
			if (it == yous.end())
			{
				cout << "Person not found\n";

			} else {
				if (it->get_spouse_truth()){
				cout << "Person Found: \n";
				it->add_task_spouse();
				} else {
					cout << "\nYou need a spouse FIRST...\n";
				}

			}
		} else {
			cout << "Choose a real option, try again\n";
		}
	}

}

list<You>::iterator find_you(list<You>& yous)
{
	string input;
	cout << "\nID for the Person: ";
	cin >> input;
	int id = stoi(input);

	list<You>::iterator it;
	for(it = yous.begin(); it != yous.end(); it++)
	{
		if (it->get_id() == id)
		{
			return it;
		}
	}

	return it;
}
