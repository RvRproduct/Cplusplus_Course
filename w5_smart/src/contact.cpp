/*
 * contact.cpp
 *
 *  Created on: Dec 4, 2022
 *      Author: segan
 */

#include "contact.h"
#include <iostream>
using namespace std;

//	string street_address;
//	string city;
//	string state;
//	string zip_code;
//	string phone_number;
void Contact::get_contact_info() {

	cout << "Enter Street Address: ";
	cin.ignore();
	getline(cin, street_address);
	cout << "Enter City: ";
	getline(cin, city);
	cout << "Enter State: ";
	std::getline(cin, state);
	cout << "Enter ZipCode: ";
	std::getline(cin, zip_code);
	cout << "Enter Phone Number: ";
	std::getline(cin, phone_number);

}

void Contact::display_contact_info() const {
	cout << "+ Contact Information: " << endl
			<< "Street Address: " << street_address << endl
			<< "City: " << city << endl
			<< "State: " << state << endl
			<< "ZipCode: " << zip_code << endl
			<< "Phone Number: " << phone_number << endl;
}

