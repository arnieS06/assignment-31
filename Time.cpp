#include "Time.h"
#include <iostream>
using namespace std;

Time::Time(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

int Time::getHour()const {
	return hour;
}

int Time::getMinute()const {
	return minute;
}

int Time::getSecond()const {
	return second;
}

