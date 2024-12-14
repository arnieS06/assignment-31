#include "DateTime.h"
#include <sstream>
#include <iomanip>

DateTime::DateTime(Date date, Time time) : date(date), time(time) {}

std::string DateTime::format(const std::string& formatString) const {
    std::ostringstream formatted;
    for (size_t i = 0; i < formatString.length(); ++i) {
        if (formatString[i] == 'Y' && formatString.substr(i, 4) == "YYYY") {
            formatted << date.getYear();
            i += 3;
        }
        else if (formatString[i] == 'M' && formatString.substr(i, 2) == "MM") {
            formatted << std::setw(2) << std::setfill('0') << date.getMonth();
            i++;
        }
        else if (formatString[i] == 'D' && formatString.substr(i, 2) == "DD") {
            formatted << std::setw(2) << std::setfill('0') << date.getDay();
            i++;
        }
        else if (formatString[i] == 'H' && formatString.substr(i, 2) == "HH") {
            formatted << std::setw(2) << std::setfill('0') << time.getHour();
            i++;
        }
        else if (formatString[i] == 'M' && formatString.substr(i, 2) == "MM") {
            formatted << std::setw(2) << std::setfill('0') << time.getMinute();
            i++;
        }
        else if (formatString[i] == 'S' && formatString.substr(i, 2) == "SS") {
            formatted << std::setw(2) << std::setfill('0') << time.getSecond();
            i++;
        }
        else {
            formatted << formatString[i];
        }
    }
    return formatted.str();
}
