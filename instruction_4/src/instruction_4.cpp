//============================================================================
// Name        : instruction_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

using std::cout;
using std::endl;
using std::string;
using std::vector;


int main() {
	// The Logical Loop
	/*
	 * A bunch of code in your app here
	 */
//	long number_of_names = //code to get the number from some database response
//	string names[number_of_names];
	/*
	 *
	 * Code her to fill the array with the names from some database, and so forth
	 */
//	long index = 0;
//	while (index < number_of_names)
//	{
//		cout << "index: " << index << " name: " << names[index] << endl;
//		index++;
//	}
//
//	for (int i = 0; i < 7) {
//		//
//	}
//
//	//	long number_of_names = //code to get the number from some database response
//	//	string names[number_of_names];
//	// print out the names
//	for (int i = 0; i < number_of_names; i++){
//		cout << "name: " << names[i] << endl;
//	}
//	//count down loop
//	//	long number_of_names = //code to get the number from some database response
//	//	string names[number_of_names];
//	// print out the names
//	for (int i = numer_of_names-1; i >= 0; i--){
//		cout << "name: " << names[i] << endl;
//	}

	// A Better Way

	/*
	 *
	 *A bunch of code in your app here
	 */
	vector<string> names;
	/*
	 * Code here to fill the vector with the names from some database, and so forth
	 */
	for (long index = 0; index < names.size(); ++index) {
		cout << "index: " << index << " name: " << names[index] << endl;
	}

	// Ranged for loop
	vector<string> names;
	// Code here to fill the vector with the names from some database, and so forth

	for (auto& name : names)
	{
		cout << "name: " << name << endl;
	}

	// using list
	list<string> namez;

	for (auto& name : namez)
	{
		cout << "name: " << name << endl;
	}

	/*
	 * Using the built in
	 * filter(selcet some)
	 * reduce(average, sum, product, and so forth)
	 * map(covert all)
	 */

	/*
	 * A bunch of code in your app here
	 */
	list<int> likes;
	// some code here to fill the array with values from the database

	/*
	 * Suppose you were told to write code that filitered out likes that are less than 10. What's a good
	 * way to approach solving the problem?
	 *
	 * The answer is to use filter functionality. In C++, this is in the remove_if function of the standard
	 * algorithm library.
	 * Did you notice the #include statement in the code snippet above?
	 */

	auto likes_end = remove_if(likes.begin(), likes.end(), [](auto a_likes_amount){
		return a_likes_amount < 10;
	});

	// transform function
	auto likes_end = transform(likes.begin(), likes.end(), likes.begin(), [](auto a_likes_amount){
		return a_likes_amount + 5;
	});
	likes.erase(likes_end, likes.end()); //remove untransformed elements in container

	// accumulate
	auto total = accumulate(likes.begin(), likes.end(), 0, [](auto accumulator, auto a_likes_amount){
		return accumulator + a_likes_amount;
	});

	/*
	 * But what if you are asked to do something more real? For example, imagine that you are to give five bonus 'likes'
	 * only for those that already have 10 'likes' and then sum the result. The solution for this would use map, filter, and
	 * reduce behaviors together
	 */

	likes_end = remove_if(likes.begin(), likes.end(), [](auto a_like_count){
		return a_like_count < 10;
	});

	likes_end = transform(likes.begin(), likes_end, likes.begin(), [](int a_likes_amount){
		return a_likes_amount + 5;
	});

	auto total = accumulate(likes.begin(), likes_end, 0, [](auto accumulator, auto a_likes_amount){
		return accumulator + a_likes_amount;
	});

	// for_each
	for_each(likes.begin(), likes.end(), [](auto a_likes_amount){
		cout << a_likes_amount << endl;
	});










	return 0;
}
