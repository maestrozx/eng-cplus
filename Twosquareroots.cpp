#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double number1, number2, squareRoot1, squareRoot2;
cout<<"Enter first number: ";
cin>>number1;
cout<<"Enter second number: ";
cin>>number2;
squareRoot1 = sqrt(number1);
squareRoot2 = sqrt(number2);
cout<<"Square root of first number"<<number1<<" = " <<squareRoot1;
cout<<"Square root of second number"<<number2<<" = " <<squareRoot2;
	return 0;
}