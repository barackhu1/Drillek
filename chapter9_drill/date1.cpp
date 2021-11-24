#include "std_lib_facilities.h"

struct Date{                
    int y, m, d;
};
void init_date(Date &date, int y, int m, int d){
    if (y > 0){
        date.y = y;
    }
    else{
        error("Invalid year.");
    }
    if (m <= 12 && m > 0){
        date.m = m;
    }
    else{
        error("Invalid month.");
    }
    if (d <= 31 && d > 0){
        date.d = d;
    }
    else{
        error("Invalid day.");
    }
}
void add_day(Date &date){

    date.d += 1;
    while (date.d > 31){
        date.m++;
        date.d -= 31;
        if (date.m > 12){
            date.y++;
            date.m -= 12;
        }
    }
}
int main(){
    try{

        Date today1;
        today1.y = 1978;
        today1.m = 6;
        today1.d = 25;
        init_date(today1, today1.y, today1.m,today1.d);
        cout << "Date: " << today1.y << ". " << today1.m << ". " << today1.d << ".\n";
        Date tomorrow1{today1.y, today1.m, today1.d};
        add_day(tomorrow1);
        cout << "Tomorrow: " << tomorrow1.y << ". " << tomorrow1.m << ". " << tomorrow1.d << ".\n";
        Date today2;
        today2.y = 2004;
        today2.m = 13;
        today2.d = -5;
        init_date(today2, today2.y, today2.m,today2.d);
        cout << "Date: " << today2.y << ". " << today2.m << ". " << today2.d << ".\n";
        Date tomorrow2{today2.y, today2.m, today2.d};
        add_day(tomorrow2);
        cout << "Tomorrow: " << tomorrow2.y << ". " << tomorrow2.m << ". " << tomorrow2.d << ".\n";
        return 0;
    }
    catch (exception &e){
        cerr << e.what() << endl;
        return 1;
    }
}