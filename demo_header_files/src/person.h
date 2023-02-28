/*
 * person.h
 *
 *  Created on: Nov 11, 2022
 *      Author: segan
 */
#include <string>
#ifndef PERSON_H_
#define PERSON_H_

class Person {
private:
	std::string first_name;
	std::string last_name;
	int age;

public:
	Person();

	Person(std::string fname, std::string lname, int age);

	void display_full_name() const;

	void have_birthday();
};

#endif /* PERSON_H_ */
