#include <iostream>
using namespace std;
int main(){
	string toolA, toolB, toolC;
	int total, numA, numB, numC;
	cout<<"Enter the name of tool A: ";
	cin>>toolA;
	cout<<"Enter number of tools A used: ";
	cin>>numA;
	cout<<"Enter the name of tool B: ";
	cin>>toolB;
	cout<<"Enter number of tools B used: ";
	cin>>numB;
	cout<<"Enter the name of tool C: ";
	cin>>toolC;
	cout<<"Enter number of tools C used: ";
	cin>>numC;
	
	cout<<"The tools used were: "<<toolA,toolB,toolC;
	total = numA + numB + numC;
	cout<<"The total tools used were:"<<total;
	
	int unusedtools;
	unusedtools = 250 - total;
	cout<<"The number of unused tools was:"<<unusedtools;
	return 0;
}