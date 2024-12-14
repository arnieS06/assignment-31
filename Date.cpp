#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

int Date::getYear()const {
	return year;
}

int Date::getMonth()const {
	return month;
}

int Date::getDay()const {
	return day;
}

bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int year, int month) {
	if (month == 2) return isLeapYear(year) ? 29 : 28;
	if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
	return 31;
}

void Date::addDays(int days) {
	day += days;
	while (day > daysInMonth(year, month)) {
		day -= daysInMonth(year, month);
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
}

void Date::addMonths(int months) {
	month += months;
	while (month > 12) {
		month -= 12;
		year++;
	}
}

void Date::addYears(int years) {
	year += years;
}

