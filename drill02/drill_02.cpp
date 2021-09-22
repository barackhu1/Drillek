#include "std_lib_facilities.h"

int main(){

	cout << "Enter the name of the person you want to write to: ";
	
	string first_name;
	
	cin >> first_name;
	
	cout << "Dear " << first_name << ",\n";
	
	cout << "\t How is it going for you? Are you all alright? \n\tI miss you all, and I wish a good healt!\n";
	
	cout << "Enter the name of a friend: ";
	
	string friend_name;
	
	cin >> friend_name;
	
	cout << "Have you seen " << friend_name << " lately?\n";
	
	char friend_sex = 0;
	
	cout << "Enter the friends gender (m if male, f if femeale): ";
	
	cin >> friend_sex;
	
	if(friend_sex == 'm'){
	
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	
	}
	else if(friend_sex == 'f'){
	
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	}
	
	cout << "Please enter your friends age!\n";
	
	int age;
	
	cin >> age;
	
	cout << "I hear you just had a birthday and you are " << age << " years old!\n";
	
	if(age < 0 || age > 110){
	
		simple_error("you're kidding!\n");
	
	}
	
	if(age < 12){
	
		cout << "Next year you will be " << age+1 << ".\n\n";	
		
	}
	else if(age == 17){
	
		cout << "Next year you will be able to vote.\n\n";
	
	}
	else if(age > 70){
	
		cout << "I hope you are enjoying retirement.\n\n";
	
	}
	
	cout << "Yours sincerely," << first_name << ".\n";
	
	return 0;

}
