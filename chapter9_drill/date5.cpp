#include "std_lib_facilities.h"

class Year{
    static constexpr int min = 1800;
    static constexpr int max = 2200;
public:
    class Invalid{};
    Year(int x): y{x} {if (x < min || x > max ) throw Invalid{};}
    int year() {return y;}
    int increment() {return y++;}
private:
    int y;
};
Year operator++(Year& year){
    year.increment();
    return year;
}
ostream& operator<<(ostream& os, Year year){
    return os << year.year();
}
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
    Year year;
    Month month;
    int day;
public:
    class Invalid{};
    Date(): year(Year{2001}), month(Month::jan), day(1) {}
    Date(Year y, Month m, int d): year(y), month(m), day(d){ if(!is_valid()) throw Invalid{}; }
    void add_day(int n);
    bool is_valid();
    Year get_year() const {return year;}
    Month get_month() const  {return month;}
    int get_day() const  {return day;}
    void set_year(Year y){
        year = y;
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
    if (day <1 || day > 31) return false;
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
ostream& operator<<(ostream& os,  Date& d){
    return os << d.get_year() << ". " << d.get_month() << " " <<d.get_day() << ".\n";
}
int main()
    try{
        Date today1 {Year{1978}, Month::jun, 25};
        cout << "Date: " << today1;
        today1.add_day(1); 
        cout << "Tomorrow: " << today1;
        Date today2 {Year{2004}, Month::dec, -5};
        cout << "Date: " << today2;
        today2.add_day(1);
        cout << "Tomorrow: " << today2;
        return 0;
    }
    catch (exception &e){
        cerr << e.what() << endl;
        return 1;
    }catch (Date::Invalid){
        cerr << "Exception: Invalid date." << endl;
        return 2;
    }catch (Year::Invalid){
        cerr << "Exception: Invalid year." << endl;
        return 3;
    }