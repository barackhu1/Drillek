#include "std_lib_facilities.h"

int main(){
	
	cout << "Please enter a number!" << endl;
	
	vector<double>v;

	char s;
	
	while(s != '|'){
		
		double a;
		
		cout << "a = ";
		
		cin >> a;

		v.push_back(a);

		double max = 0;

		for(int i = 0; i < v.size(); i++){

			if(v[i] > max) max = v[i];

		}

		double min = max;

		for(int i = 0; i < v.size(); i++){

			if(v[i] < min) min = v[i];

		}
		
		cout << "the smallest so far: " << min << "\nthe largest so far: " << max << endl;

		cout << "If you want to exit please enter '|', but if ou don't want to exit, enter a random charater!" << endl;
		
		cin >> s;
	
	}

	return 0;

}
