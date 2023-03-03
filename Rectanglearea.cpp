#include <iostream>
using namespace std;
int main()
{
	int x, y;
	int rectangle_area;
	cout << "Type the length:";
	cin >> x;
	cout << "Type the width:";
	cin >> y;
	rectangle_area = x * y;
	cout << "Area of Rectangle is:" << rectangle_area;
	
	const double pi = 3.141593;
	double circle_area, circum, radius;
	cout<<"Type the radius: ";
	cin>>radius;
	circle_area = pi * radius * radius;
	circum = 2 * pi * radius;
	cout<<"Rdius:"<<radius<<endl;
	cout<<"Circumference:"<<circum<<endl;
	cout<<"Area:"<<circle_area<<endl;
	
	return 0;
}
