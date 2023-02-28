// person.h - Header file to declare the Person class

#pragma once

#include "membership.h"
#include <string>
#include <memory>

class Person
{
private:
    std::string fname;
    std::string lname;
    int age;
    int id_number;
    static int next_id;

    std::shared_ptr<Membership> member_info;

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
    void add_membership();

};
