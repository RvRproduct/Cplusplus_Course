/*
 * parent.h
 *
 *  Created on: Dec 11, 2022
 *      Author: segan
 */

#include <string>
#include <iostream>
#include <memory>
#include <map>
#include <list>
#include "spouse.h"

using namespace std;

class You {
private:
	int id_number;
	string name;
	string task;
	int day;
	int month;
	int year;
	list<string> tasks;
	bool tasks_s = false;

	static int next_id;

	std::shared_ptr<Spouse> spouse;
public:
	You();

	void you_info();

	void add_task();

	void display() const;

	int get_id() const;

	void add_spouse();

	void add_task_spouse();

	void spouse_task_added();

	bool get_spouse_truth();

};
