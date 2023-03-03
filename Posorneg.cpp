#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if (num>=0){
		cout<<num<<" is positive or zero."<<endl;
	}
	else {
		cout<<num<<" is negative."<<endl;
	}
	return 0;
}