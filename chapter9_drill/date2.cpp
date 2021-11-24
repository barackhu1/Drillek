#include "std_lib_facilities.h"

struct Date{
    int year, month, day;
    Date(int y, int m, int d);
    void add_day(int n);

};

Date::Date(int y, int m, int d){
    if (y > 0){
        year = y;
    }
    else{
        error("Invalid year.");
    }
    if (m <= 12 && m > 0){
        month = m;
    }
    else{
        error("Invalid month.");
    }
    if (d <= 31 && d > 0){
        day = d;
    }
    else{
        error("Invalid day.");
    }
}
void Date::add_day(int n){
    day += 1;
    while (day > 31){
        month++;
        day -= 31;
        if (month > 12){
            year++;
            month -= 12;
        }
    }
}
int main(){
    try{
        Date today1 {1978, 6, 25};
        cout << "Date: " << today1.year << ". " << today1.month << ". " << today1.day << ".\n";
        today1.add_day(1);
        cout << "Date: " << today1.year << ". " << today1.month << ". " << today1.day << ".\n";
        Date today2 {2004, 13, -5};
        cout << "Date: " << today2.year << ". " << today2.month << ". " << today2.day << ".\n";
        today2.add_day(1);
        cout << "Date: " << today2.year << ". " << today2.month << ". " << today2.day << ".\n";
        return 0;
    }
    catch (exception &e){
        cerr << e.what() << endl;
        return 1;
    }
}