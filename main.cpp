#include <iostream>
#include "Date.h"
#include "Time.h"
using namespace std;

int main() {
   Time time(23, 50, 45); 
   cout << "Initial Time: " << time.getHour() << ":" << time.getMinute() << ":" << time.getSecond() << endl;


   time.addSeconds(30); 
   cout << "After adding 30 seconds: " << time.getHour() << ":" << time.getMinute() << ":" << time.getSecond() << endl;
   
   time.addMinutes(15); 
   cout << "After adding 15 minutes: " << time.getHour() << ":" << time.getMinute() << ":" << time.getSecond() << endl;

   time.addHours(2);
   cout << "After adding 2 hours: " << time.getHour() << ":" << time.getMinute() << ":" << time.getSecond() << endl;

   return 0;
}
