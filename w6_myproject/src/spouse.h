/*
 * child.h
 *
 *  Created on: Dec 11, 2022
 *      Author: segan
 */

#include <string>
#include <iostream>
#include <list>
#include <map>

using namespace std;

class Spouse {
private:
	string name;
	string task;
	int day;
	int month;
	int year;
	list<string> tasks;
//	map<string, string> task;
//	list<map<string, string>> tasks {};
public:
	Spouse() : name(""), task(""), day(0), month(0), year(0), tasks() {};

	void get_spouse();

	void display();

	void add_task();
};
