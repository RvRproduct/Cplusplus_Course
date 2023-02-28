/*
 * membership.cpp
 *
 *  Created on: Dec 4, 2022
 *      Author: segan
 */

#include "membership.h"
#include <iostream>

int Membership::next_id = 100;

void Membership::initialize()
{
	std::cout << "Enter membership level: ";
	std::getline(std::cin, membership_level);

	membership_number = ++next_id;
}

void Membership::display() const
{
	std::cout << "Membership number: " << membership_number << std::endl
			<< "Membership level: " << membership_level << std::endl;
}
