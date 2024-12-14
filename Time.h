#pragma once

#include <iostream>
using namespace std;

class Time {
public:
	Time(int hour, int minute, int second);
	int getHour()const;
	int getMinute()const;
	int getSecond()const;
	void addSeconds(int seconds);
	void addMinutes(int minutes);
	void addHours(int hours);

private:
	int hour;
	int minute;
	int second;
};