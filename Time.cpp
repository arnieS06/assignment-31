#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

void Time::addSeconds(int seconds) {
    second += seconds;
    while (second >= 60) {
        second -= 60;
        minute++;
    }
    addMinutes(0); 
}

void Time::addMinutes(int minutes) {
    minute += minutes;
    while (minute >= 60) {
        minute -= 60;
        hour++;
    }
    addHours(0); 
}

void Time::addHours(int hours) {
    hour += hours;
    while (hour >= 24) {
        hour -= 24;
    }
}
