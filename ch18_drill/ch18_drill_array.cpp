#include "std_lib_facilities.h"

int ga [10] = {1,2,4,8,16,32,64,128,256,512};

void f(int a[],int sz){
	int la[sz];
	cout << "Elements of la: ";
	for (int i = 0; i < sz; ++i)
	{
		la[i] = ga[i];
		cout << la[i] << " ";
	}
	cout << endl;
	int* p = new int[sz];
	cout << "Elements of free store array: ";
	for (int i = 0; i < sz; ++i)
	{
		p[i] = a[i];
		cout << p[i] << " ";
	}
	cout << endl;
	delete[] p;
}

int main(){
	f(ga,10);
	int aa [10];
	for (int i = 0; i < 10; ++i)
	{
		aa[i] = 1;
		for (int j = i + 1; j > 0; --j)
		{
			if (j > 1)
			{
				aa[i] = aa[i] * j;
			}
		}
	}
	f(aa,10);
	return 0;
}