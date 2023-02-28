/*
 * person.h
 *
 *  Created on: Nov 23, 2022
 *      Author: segan
 */

#include <string>

class Person {

private:
	std::string fname;
	std::string lname;
	int age;
	int id_number;
	static int next_id;

public:
	Person();
	Person(std::string firstname, std::string lastname, int age);

	std::string get_full_name() const;
	std::string get_first_name() const;
	std::string get_last_name() const;
	int get_age() const;
	int get_id() const;
	void display() const;

	void update_age(int new_age);
	void update_name(std::string fname, std::string lname);


};

