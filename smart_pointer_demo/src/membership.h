/*
 * membership.h
 *
 *  Created on: Dec 4, 2022
 *      Author: segan
 */
// membership.h - Header file for Membership class
// Keeps track of a person's gym membership information


#pragma once

#include <string>

class Membership {
private:
	int membership_number;
	std::string membership_level;
	static int next_id;

public:
	Membership() : membership_number(0), membership_level("") {};

	void initialize(); // enter member information
	void display() const;
};

