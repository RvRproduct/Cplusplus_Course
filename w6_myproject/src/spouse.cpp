/*
 * child.cpp
 *
 *  Created on: Dec 11, 2022
 *      Author: segan
 */

#include "spouse.h"

#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

void Spouse::get_spouse(){
	cout << "\nname: ";
	cin.ignore();
	getline(cin, name);
	while(1){
		cout << "Task Name: ";
		cin.ignore();
		getline(cin, task);
		cout << "Day: ";
		cin >> day;
		cout << "Month: ";
		cin >> month;
		cout << "Year: ";
		cin >> year;
		if (day >= 1 and day <= 31 and month >= 1 and month <= 12 and year >= 2022 and year <= 2100){
		tasks.push_back("\nTask: " + task + "\n" + "Date Due: "+ to_string(month) + "/" + to_string(day) + "/" + to_string(year) + "\n");
		break;
		}
		cout << "\nEntered Date Information wrong ->\nExampe: day:5, month:10, year:2022\n";
		}
}

void Spouse::display() {
	cout << "\n+ Spouse: " << endl << "Name: " << name << endl;
	for (string task : tasks) {
		cout << task;
	}
}

void Spouse::add_task() {
	string input;
	cout << "Would you like to enter another task?(y/n) ";
	cin >> input;
	if (input == "y") {
		cout << "Task Name: ";
		cin.ignore();
		getline(cin, task);
		cout << "Day: ";
		cin >> day;
		cout << "Month: ";
		cin >> month;
		cout << "Year: ";
		cin >> year;
		tasks.push_back("\nTask: " + task + "\n" + "Date Due: "+ to_string(month) + "/" + to_string(day) + "/" + to_string(year) + "\n");
	}

}
