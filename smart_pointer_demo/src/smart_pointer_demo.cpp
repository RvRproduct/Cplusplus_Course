//============================================================================
// Name        : smart_pointer_demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// smart_pointer_demo.cpp : This file contains the 'main' function.
//
// Demonstrate shared_ptr

#include "person.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Person p1("Bob", "Jones", 18);
    p1.display();
    p1.add_membership();
    p1.display();

    Person p2("Sue", "Smith", 19);
    p2.display();
    p2.add_membership();
    p2.display();
}
