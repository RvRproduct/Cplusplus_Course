/*
 * person.cpp
 *
 *  Created on: Nov 11, 2022
 *      Author: segan
 */

#include "person.h"
#include <iostream>

Person::Person(): first_name(""), last_name(""), age(0) {
	// TODO Auto-generated constructor stub

}

Person::Person(std::string fname, std::string lname, int age): first_name(fname), last_name(lname), age(age){

}

void Person::display_full_name() const {
	std::cout << first_name << " " << last_name << std::endl;
}

void Person::have_birthday() {
	age++;
}
