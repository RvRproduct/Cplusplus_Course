/*
 * person.cpp
 *
 *  Created on: Nov 11, 2022
 *      Author: segan
 */

#include "account.h"

#include <iostream>

int Person::next_id = 1;

Person::Person(): fname(""), lname(""), age(0), id_number(next_id++) {
	// TODO Auto-generated constructor stub

}

Person::Person(std::string firstname, std::string lastname, int age): fname(firstname), lname(lastname), age(age), id_number(next_id++){

}

std::string Person::get_full_name() const
{
	return fname + " " + lname;
}

void Person::display() const
{
	std::cout << "ID:" << id_number
			<< " Name: " << fname << " " << lname
			<< ", age: " << age << std::endl;
}

int Person::get_age() const
{
	return age;
}

int Person::get_id() const
{
	return id_number;
}

void Person::update_age(int new_age)
{
	if(new_age > 0 && new_age < 125)
		age = new_age;
}

void Person::update_name(std::string fname, std::string lname)
{
	this->fname = fname;
	this->lname = lname;
}
