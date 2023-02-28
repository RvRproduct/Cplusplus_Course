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
	std::string fname;
	std::string lname;
	int age;
	static int id_number;
	static int next_id;

public:
	Person();

	Person(std::string firstname, std::string lastname, int age);

	std::string get_full_name() const;
	void display() const;

	int get_age() const;
	int get_id() const;

	void update_age(int new_age);
	void update_name(std::string fname, std::string lname);
};

#endif /* PERSON_H_ */
