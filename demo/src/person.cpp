// person.cpp - Implements the Person class

#include "person.h"
#include <iostream>

int Person::next_id = 1; // Set the static next_id to an initial value

// Default contructor
Person::Person(): fname(""), lname(""), age(0), id_number(next_id++)
{
}

// Non-default constructor
Person::Person(std::string firstname, std::string lastname, int age) :
    fname(firstname), lname(lastname), age(age), id_number(next_id++)
{
}

// Return a Person object's full name
std::string Person::get_full_name() const
{
    return fname + " " + lname;
}

std::string Person::get_first_name() const
{
    return fname;
}

std::string Person::get_last_name() const
{
    return lname;
}

// Display a Person
void Person::display() const
{
    std::cout << "ID: " << id_number
        << " Name: " << fname << " " << lname
        << ", age: " << age << std::endl;

}

// Return a Person object's age
int Person::get_age() const
{
    return age;
}

// Return a Person object's ID
int Person::get_id() const
{
    return id_number;
}

// Update a Person object's age
void Person::update_age(int new_age)
{
    // Check to make sure age is reasonable
    if (new_age > 0 && new_age < 125)
        age = new_age;
}


// Update a Person object's name
void Person::update_name(std::string fname, std::string lname)
{
    this->fname = fname;
    this->lname = lname;
}
