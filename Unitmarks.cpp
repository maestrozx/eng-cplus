#include <iostream>
using namespace std;
int main(){
	int communication, programming, calculus2, marketing, project;
	float total, average, percentage;
	cout<<"Please Enter the marks scored in the five units: \n";
	cin>>communication>>programming>>calculus2>>marketing>>project;
	total = communication + programming + calculus2 + marketing + project;
	average = total/5;
	percentage = (total/(500))*100;
	cout<<"\nTotal Marks = "<<total;
	cout<<"\nAverage marks in % = "<<average;
	if (percentage >= 70){
		cout<<"\nGrade A ";
	}
	else if(percentage >= 60){
		cout<<"\nGrade B ";
	}
	else if(percentage >= 50){
		cout<<"\nGrade C ";
	}
	else if(percentage >= 40){
		cout<<"\nGrade D ";
	}
	else if(percentage >= 40){
		cout<<"\nGrade E ";
	}
	else{
		cout<<"\nFail";
	}
return 0;
	
}