#include <bits/types/time_t.h>
#include <iostream>

using namespace std;

int main(){
    time_t now = time(0);
    
    // convert
    char * date_time = ctime(&now);

    // print
    cout << "The current date and time is: " << date_time << endl;

    // get current month
    tm *ltm = localtime(&now);
    const char* month_names[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char* dayOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << "The current month is: " << month_names[ltm->tm_mon] << endl;
    cout << "The current day of the month is: " << ltm->tm_mday << endl;
    cout << "The current year is: " << ltm->tm_year + 1900 << endl;
    cout << "The current day of the year is: " << ltm -> tm_yday << endl;
    cout << "Current day of the week: " << dayOfWeek[ltm->tm_wday - 1] << endl;
    cout << "The current second is: " << ltm->tm_sec << endl;
    cout << "The current minute is: " << ltm->tm_min << endl;
    cout << "The current hour is: " << ltm-> tm_hour - 12 << endl;

}