#include "std_lib_facilities.h"

struct Point{
	double x;
	double y;
};
void is_equal(vector<Point> original_points, vector<Point>processed_points){
	if (original_points.size()!=processed_points.size())
	{
		cout << "Something's wrong!";
	}
	for (int i = 0; i < original_points.size(); ++i)
	{
		if (original_points[i].x != original_points[i].x)
		{
			cout << "Something's wrong! The 2 vetor x value are not the same!" << original_points[i].x << "!=" << original_points[i].x << endl;
		}
		if (original_points[i].y != original_points[i].y)
		{
			cout << "Something's wrong! The 2 vetor y value are not the same!" << original_points[i].y << "!=" << original_points[i].y << endl;
		}
	}
}
int main()
{
	cout << "Plese add vector points in this format: x y" << endl;
	double x, y;
	vector<Point> original_points;
	for (int i = 0; i < 7; ++i)
	{
		cin >> x >> y;
		original_points.push_back(Point{x,y});
	}
	cout << "original ponts:" << endl; 
	for (auto point:original_points)
	{
		cout << point.x << " " << point.y << endl;
	}
	string ofname = "mydata.txt";
	ofstream ost {ofname};
	for (auto point:original_points)
	{
		ost << point.x << " " << point.y << endl;
	}
	ost.close();
	vector<Point> processed_points;
	string ifname = "mydata.txt";
	ifstream ist {ifname};
	while(ist >> x >> y){
		processed_points.push_back(Point{x,y});
	}
	cout << "processed_points:" << endl;
	for (auto point:processed_points)
	{
		cout << point.x << " " << point.y << endl;
	}
	is_equal(original_points,processed_points);
	return 0;
}