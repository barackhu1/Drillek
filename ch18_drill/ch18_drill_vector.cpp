#include "std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> a){
	vector<int> lv(10);
	cout << "Elements of lv: ";
	for (int i = 0; i < 10; ++i)
	{
		lv[i] = gv[i];
		cout << lv[i] << " ";
	}
	cout << endl;
	vector<int> lv2(10);
	cout << "Elements of lv2: ";
	for (int i = 0; i < 10; ++i)
	{
		lv2[i] = a[i];
		cout << lv2[i] << " ";
	}
	cout << endl;
}

int main(){
	f(gv);
	vector<int> vv(10);
	for (int i = 0; i < 10; ++i)
	{
		vv[i] = 1;
		for (int j = i + 1; j > 0; --j)
		{
			if (j > 1)
			{
				vv[i] = vv[i] * j;
			}
		}
	}
	f(vv);
	return 0;
}