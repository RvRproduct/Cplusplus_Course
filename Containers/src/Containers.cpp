//============================================================================
// Name        : Containers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

int main() {

//	int a[10]; // Stack
//	int* b = new int[10]; // Heap
//
//	delete [] b;

//	std::array<int, 10> b;
//	b[17] = 6;
//
//	b.size();
//	b.data();

	std::array<int, 10> b;

	for (int i = 0; i < b.size(); i++)
	{
		b[i] = something();
	}

	for (std::array<int, 10>::iterator i = b.begin(); i!= b.end(); ++i)
	{
		*i = something();
	}

	for (auto i = b.begin(); i!= b.end(); ++i)
		{
			*i = something();
		}

	for (auto& i : b)
	{
		i = something();
	}

	std::fill(b.begin(), b.end(), something());

	b = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };



	return 0;
}
