#include <iostream>
using namespace std;
int main()
{
	string unit1, unit2, unit3;
	int score1, score2,score3;
	
	cout<<"Enter your first unit: ";
	cin>>unit1;
	cout<<"Enter your first unit score: ";
	cin>>score1;
	
	cout<<"Enter your second unit: ";
	cin>>unit2;
	cout<<"Enter your second unit score: ";
	cin>>score2;
	
	cout<<"Enter your third unit: ";
	cin>>unit3;
	cout<<"Enter your third unit score: ";
	cin>>score3;
	
	cout<<" \n"<<unit1<<score1;
	cout<<" \n"<<unit2<<score2;
	cout<<" \n"<<unit3<<score3;
	
	
		int average;
		int sum;
		sum = score1 + score2 + score3;
		average = sum/4;
		cout<<"Average is:"<<average;
	
	return 0;
}