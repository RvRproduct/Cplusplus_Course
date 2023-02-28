//============================================================================
// Name        : demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "person.h"
#include <iostream>
#include <string>
#include <list>
#include <algorithm> // for_each, transform, remove_if
#include <numeric> // accumulate

using namespace std;

void display_members(list<Person>& member_list);

int main() {

	list<Person> members; // Create a list to hold Person objects

	// Create some instances of Person
	Person p1("bob", "jones", 18);
	Person p2("sue", "smith", 19);
	Person p3("bill", "jones", 22);
	Person p4("jill", "smith", 24);

	// Add them to the list
	members.push_back(p1);
	members.push_back(p2);
	members.push_back(p3);
	members.push_back(p4);


	// Display all members using for_each
	for_each(members.begin(), members.end(),
	[](auto& member){
		member.display();
	});



	cout << "Update each member's age by 5 years" << endl;
	// Use transform to update each member's age by 5 years
	// similar to map
	int increment_by = 5;
	transform(members.begin(), members.end(), members.begin(),
	[increment_by](auto& member) {
		member.update_age(member.get_age() + increment_by);
		return member;
	}
	);

	display_members(members);


	cout << "Get an average age" << endl;
	// Use accumulate to get an average age
	// similar to reduce
	int size = members.size();
	float total = accumulate(members.begin(), members.end(), 0.0f,
	[](auto accumulator, auto& member) {
		return accumulator + member.get_age();

	});

	float average = total / size;

	cout << "Average age: " << average << endl;



	cout << "Remove all younger than 25" << endl;
	// Use remove_if to remove all members younger than 25
	auto new_end = remove_if(members.begin(), members.end(),
	[](auto& member) { // this is a predicate...it returns true or false
		return member.get_age() < 25;
	}
	);

	members.erase(new_end, members.end());

	display_members(members);




	while (1) {}
	return 0;
}


void display_members(list<Person>& member_list) {
	for_each(member_list.begin(), member_list.end(),
		[](auto& member){
			member.display();
		});
}


​​​​​​​

