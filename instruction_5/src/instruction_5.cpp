//============================================================================
// Name        : instruction_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory> // for unique_ptr
using namespace std;

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;
using std::shared_ptr;

int main() {

	std::string namess[] = {"sally", "bob", "jorge", "brunhilda"};
	std::string namez[4];
	namez[0] = "sally";
	namez[1] = "bob";
	namez[2] = "jorge";
	namez[3] = "brunhilda";

	long number_of_names = 5;//code to get the number from some database response
	std::string* names = new std::string[number_of_names];
	/*
	 *
	 * Code here to fill the array with the names from some database, and so forth
	 *
	 */

	//print out the names
	std::cout << "name: " << names[0] << std::endl;
	std::cout << "name: " << names[1] << std::endl;
	std::cout << "name: " << names[2] << std::endl;
	std::cout << "name: " << names[3] << std::endl;
	std::cout << "name: " << names[4] << std::endl;

	// Clean Up Your Mess!
	delete[] names;
	names = nullptr;


// smart pointers

	/*
	 *
	 * A bunch of code here
	 *
	 */

	long number_of_namezz = 5; //code to get the names number from some database response
	unique_ptr<string[]> namezz(new string[number_of_namezz]);
	/*
	 *
	 * Code here to fill the array with the names from some database, and so forth.
	 *
	 */

	//print out the names
	cout << "name: " << namezz[0] << endl;
	cout << "name: " << namezz[1] << endl;
	cout << "name: " << namezz[2] << endl;
	cout << "name: " << namezz[3] << endl;
	cout << "name: " << namezz[4] << endl;

	// dangerous
	/*
	 .
	 .A bunch of code in your app here
	 .
	 */
	long number_of_namex = 5;//code to get the number from some database response
	unique_ptr<string> namex(new string[number_of_namex]);
	/*
	 .
	 .Code here to fill the array with the names from some database, etc.
	 .
	 */

	//print out the names
	string* names_ptr = namex.get(); // Get raw pointer from smart pointer
	cout << "name: " << *names_ptr << endl;
	names_ptr++;
	cout << "name: " << *names_ptr << endl;
	names_ptr++;
	cout << "name: " << *names_ptr << endl;
	names_ptr++;
	cout << "name: " << *names_ptr << endl;
	names_ptr++;
	cout << "name: " << *names_ptr << endl;
	names_ptr -= 4;//reset the pointer to the beginning of the array

	//Clean Up Your Mess!
	names_ptr = nullptr;

	// We don't need to clean up names; since it's smart pointer it will clean itself up.


	// using traditional pointers with classes and structures
	class some_class
	{
	protected:
	    int some_value;
	    float some_other_value;
	public:
	    void some_function(void);
	    // other methods, constructors, destructor, etc would be added to the class as needed
	};

	...

	some_class* obj = new some_class;
	// do stuff with obj
	delete obj;   // must deallocate memory or memory leaks happen!




	// using smart pointers
	class some_class
	{
	protected:
	    int some_value;
	    float some_other_value;
	public:
	    void some_function(void);
	    // other methods, constructors, destructor, etc would be added to the class as needed
	};

	...

	unique_ptr<some_class> obj(new some_class);
	// do stuff with obj
	// no need to deallocate memory; this is done automatically!

	//traditional
	some_class* obj = new some_class;
	obj->some_function();

	// smart pointers
	uniqe_ptr<some_class> obj(new some_class);
	obj->some_function();

	// smart pointers and raw pointers
	std::unique_ptr<some_class> obj(new some_class);
	some_class* unsafe_ptr = obj.get();

	// shared pointers
	class some_class
	{
	protected:
	    int some_value;
	    float some_other_value;
	public:
	    void some_function(void);
	    // other methods, constructors, destructor, etc would be added to the class as needed
	};

	...

	shared_ptr<some_class> obj = make_shared<some_class>();  // default constructor used
	obj->some_function();
	// do stuff with obj
	// no need to deallocate memory; this is done automatically!

	// shared pointers are sage to return from functions
	std::shared_ptr<some_class> some_function(void)
	{
	    return make_shared<some_class>();  // default constructor used
	}

	std::shared_ptr<some_class> some_ptr = some_function();


	return 0;
}
