#include "std_lib_facilities.h"

const vector<string> months = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};
enum class Month {
    jan, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec
};
Month operator++(Month& m){
    m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m){
    return os << months[int(m)];
}
class Date{
private:
    int year, day;
    Month month;
public:
    class Invalid{};
    Date(int y, Month m, int d): year(y), month(m), day(d){ if(!is_valid()) throw Invalid{}; }
    void add_day(int n);
    bool is_valid();
    int get_year() {return year;}
    Month get_month() {return month;}
    int get_day() {return day;}
    void set_year(int y){
        if (y > 0){
            year = y;
        }
        else{
            error("Invalid year in set_year().");
        }
    }
    void set_month(Month m){

        month = m;

    }
    void set_day(int d){
        if (d > 0 && d <=31){
            day = d;
        }
        else{
            error("Invalid day in set_day().");
        }
    }

};
bool Date::is_valid(){
    if (year <1 || day <1 || day > 31) return false;
    return true;
}
void Date::add_day(int n){
    day += n;
    while (day > 31){
        ++month;
        day -= 31;
        if (month == Month::jan){
            ++year;
        }
    }
}
ostream& operator<<(ostream& os, Date& d){
    return os << d.get_year() << ". " << d.get_month() << " " << d.get_day() << "." << endl;
}
int main()
    try{
        Date today1 {1978, Month::jun, 23};
        cout << "Date: " << today1;
        Date tomorrow1(today1);
        tomorrow1.add_day(1);
        cout << "Tomorrow: " << tomorrow1;
        Date today2 {2004, Month::dec, -5};
        cout << "Date: " << today2;
        Date tomorrow2(today2);
        tomorrow2.add_day(1);
        cout << "Tomorrow: " << tomorrow2;
        return 0;
    }
    catch (exception &e){
        cerr << e.what() << endl;
        return 1;
    }catch (Date::Invalid){
        cerr << "Exception: Invalid date." << endl;
        return 2;
    }