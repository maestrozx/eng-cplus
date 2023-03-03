#include <iostream>
using namespace std;

int main()
{
	double area, circum, radius = 1.5;
	area = pi * radius * radius;
	circum = 2 * pi * radius;
	cout<<"Rdius:"<<radius<<endl;
	cout<<"Circumference:"<<circum<<endl;
	cout<<"Area:"<<area<<endl;
	return 0;
}