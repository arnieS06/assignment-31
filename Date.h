#pragma once

#include <iostream>
using namespace std;

class Date {
public:
	Date(int year, int month, int day);
	int getYear()const;
	int getMonth()const;
	int getDay()const;
	void addDays(int days);
	void addMonths(int months);
	void addYears(int years);

private:
	int year;
	int month;
	int day;
};