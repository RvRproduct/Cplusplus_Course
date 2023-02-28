//============================================================================
// Name        : instruction_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#ifndef date_hpp
#define date_hpp
using namespace std;

namespace pharmaceutical_tracker {
	class Date {
	private:
		int day;
		int month;
		int year;
	public:
		Date();
		Date(int a_day, int a_month, int a_year);
		void set_day(int aDay);
		int get_day()const;
		void set_month(int aMonth);
		int get_month()const;
		void set_year(int aYear);
		int get_year()const;
		bool operator==(const Date& other_date)const;
	};

}

#endif /* date_hpp */

// if(birthday.year < 2020)

// using protected keyword when needed

#include "date.hpp"

using pharmaceutical_tracker::Date;

Date::Date():day{-1}, month{-1}, year{-1} {}

Date::Date(int aDay, int aMonth, int aYear):day{aDay},month{aMonth},year{aYear} {
	//todo: check to make sure day, month, and year are a valid combination for a date
}

void Date::set_day(int aDay) {
	//todo: check to make sure is valid day
	day = aDay;
}

int Date::get_day()const {
	return day;
}

void Date::set_month(int aMonth) {
	//todo: check to make sure is valid month
	month = aMonth;
}

int Date::get_month()const {
	return month;
}

void Date::set_year(int aYear) {
	//todo: check to make sure is valid year
	year = aYear;
}

int Date::get_year()const {
	return year;
}

bool Date::operator ==(const Date& other_date)const {
	return day == other_date.day
		&& month == other date.month
		&& year == other_date.year;
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
