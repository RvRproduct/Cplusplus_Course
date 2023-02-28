//============================================================================
// Name        : demo_header_files.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "person.h"
#include <string>
#include <list>
using namespace std;


void add_member(list<Person>& member_list);
void display_members(list<Person>& member_list);
list<Person>::iterator find_by_id(list<Person>& member_list, int id);

int main() {

	list<Person> members;

	string input = "y";
	while (input == "y")
	{
		cout << "Add another member (y/n)? ";
		getline(cin, input);
		if (input == "y")
		{
			add_member(members);
		}
	}

	display_members(members);

	cout << "Enter an ID to search for: ";
	cin >> input;
	list<Person>::iterator it;
	it = find_by_id(members, stoi(input));

	if (it != members.end()) {
		// we found a member with that id
		cout << "Found that ID!" << endl;
		it->display();
	}
	else {
		cout << "that ID was not found!" << endl;
	}


}

void add_member(list<Person>& member_list)
{
	string fname;
	string lname;
	string age;

	cout << "First name: ";
	getline(cin, fname);

	cout << "Last name: ";
	getline(cin, lname);

	cout << "Age: ";
	getline(cin, age);

	Person person{fname, lname, stoi(age) };

	member_list.push_back(person);
}

void display_members(list<Person>& member_list)
{
	list<Person>::iterator it;
		for(it = member_list.begin(); it != member_list.end(); it++)
		{
			it->display();

		}
}

list<Person>::iterator find_by_id(list<Person>& member_list, int id)
{
	list<Person>::iterator it;
	for(it = member_list.begin(); it != member_list.end(); it++)
	{
		if (it->get_id() == id)
		{
			return it;
		}
	}

	return it;
}
