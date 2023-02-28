/*
 * parent.cpp
 *
 *  Created on: Dec 11, 2022
 *      Author: segan
 */

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

#include "you.h"
using namespace std;

int You::next_id = 1;

You::You(): id_number(0), day(0), month(0), year(0),spouse(nullptr){

}

void You::you_info()
{
	id_number = next_id++;

	while(1){
	cout << "name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Task Name: ";
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

void You::add_task() {
	if (tasks.size() >= 1){
	string input;
	cout << "Would you like to enter another task?(y/n) ";
	cin >> input;
	if (input == "y") {
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
	}
	else {
		cout << "\nNo tasks for the person Exists...\n";
	}

	}


void You::display() const {
	cout << "\nID: " << id_number << " Name:" << name << endl;
	for (string task : tasks) {
			cout << task;
		}

	if (spouse != nullptr)
	{
		spouse->display();
	}
}

int You::get_id() const
{
	return id_number;
}


void You::add_spouse()
{
	spouse = std::make_shared<Spouse>();
	spouse->get_spouse();
}

void You::add_task_spouse()
{
	spouse->add_task();
}

void You::spouse_task_added() {
	tasks_s = true;
}

bool You::get_spouse_truth() {

	return tasks_s;
}



//		cin >> tasks.push_back({{"day", ""}, {"month", ""}, {"year", ""}});
//		cout << "Task Name: ";
//		cin >> tasks[(tasks.size() -1)]["name"];
//		cout << "Day: ";
//		cin >> tasks[(tasks.size() -1)]["day"];
//		cout << "Month: ";
//		cin >> tasks[(tasks.size() -1)]["month"];
//		cout << "Year: ";
//		cin >> tasks[(tasks.size() -1)]["year"];

//	for (int i : tasks) {
//		cout << "Task: " << i["name"] << endl;
//		cout << "Date Due: "
//				<< i["month"] << "/"
//				<< i["day"] << "/"
//				<< i["year"] << endl;
//	}
