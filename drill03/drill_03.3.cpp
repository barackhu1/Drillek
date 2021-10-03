#include "std_lib_facilities.h"

int main(){
	
	vector<double>num;

    vector<double>value;

    const double m = 1;

    const double cm = m/100;

    const double in = 2.54 * cm;

    const double ft = 12 * in;

	char s;
	
    int i = 0;
    double sum = 0;

	while(s != '|'){
		
        cout << "Please enter a value and it's unit (acceptable units: m, cm, in, ft)!" << endl;

		double a;
		
        string unit;
		
		cin >> a >> unit;

        cout << "a = " << a << unit << endl;

        if(unit == "m" || unit == "cm" || unit == "in" || unit == "ft"){
        
        if(unit == "m"){

            value.push_back(a);

        }
        else if(unit == "cm"){

            value.push_back(a*cm);

        }
        else if(unit == "in"){

            value.push_back(a*in);

        }
        else if(unit == "ft"){

            value.push_back(a*ft);

        }

		num.push_back(a);

		double max = 0;

		for(int j = 0; j < num.size(); j++){

			if(num[j] > max) max = num[j];

		}

		double min = max;

		for(int j = 0; j < num.size(); j++){

			if(num[j] < min) min = num[j];

		}
		
		cout << "the smallest so far: " << min << "\nthe largest so far: " << max << endl;

        }
        else{

            cout << "The unit is not acceptable, plese try again!" << endl;

        }

        sum = sum + value[i];

        i++;

        cout << "The sum of the converted values are: " << sum << endl;

		cout << "If you want to exit please enter '|', but if ou don't want to exit, enter a random charater!" << endl;
		
		cin >> s;
	
	}

    cout << "The values in meter: ";
    
    sort(value);

    for(int j = 0; j < value.size();j++){
        
        cout << value[j] << "m  ";

    }

    cout << "\n";

	return 0;

}