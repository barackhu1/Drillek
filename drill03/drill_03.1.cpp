#include "std_lib_facilities.h"

int main(){
	
	cout << "Please enter two numbers!" << endl;
	
	char s;
	
	while(s != '|'){
		
		double a, b;
		
		cout << "a = ";
		
		cin >> a;
		
		cout << "b = ";
		
		cin >> b;
		
		if (a < b){
		
			cout << "the smaller value is: " << a << endl;
			
			cout << "the larger value is: " << b << endl;
		
		}
		else if(b < a){
		
			cout << "the smaller value is: " << b << endl;
			
			cout << "the larger value is: " << a << endl;
		
		}
		else if(a == b){
		
			cout << "the numbers are equal" << endl;
		
		}
		
		double c = abs(a - b);
		
		if(c > (1/100)){
		
			cout << "the numbers are almost equal" << endl;
		
		}
		
		cout << "If you want to exit please enter '|', but if ou don't want to exit, enter a random charater!" << endl;
		
		cin >> s;
	
	}

	return 0;

}
