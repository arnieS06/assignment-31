#pragma once
#include "Date.h"
#include "Time.h"
#include <string>

class DateTime {
public:
    DateTime(Date date, Time time);
    std::string format(const std::string& formatString) const;
private:
    Date date;
    Time time;
};
