/*
 * contact.h
 *
 *  Created on: Dec 4, 2022
 *      Author: segan
 */

#include <string>
#include <iostream>

using namespace std;

class Contact {
private:
	string street_address;
	string city;
	string state;
	string zip_code;
	string phone_number;
	list <>
public:
	Contact() : street_address(""), city(""), state(""), zip_code(""), phone_number("") {};

	void get_contact_info();

	void display_contact_info() const;
};
