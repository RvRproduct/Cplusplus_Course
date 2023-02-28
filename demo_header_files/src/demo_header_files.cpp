//============================================================================
// Name        : demo_header_files.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "person.h"
using namespace std;

int main() {
	Person p1;
	p1.display_full_name();

	Person p2("Bob", "Jones", 21);
	p2.display_full_name();
	p2.have_birthday();
	return 0;
}
