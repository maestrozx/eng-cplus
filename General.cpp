#include <iostream>
using namespace std;
class Pupils{
    public:
    int boys;
    int girls;
    int total;

    int sum(){
        total = boys + girls;
        cout<<"The total number of pupils in the class is: "<<total;
        return 0;
    }
};
int main(){
    cout<<"Mwembeni Primary Mixed Class 6\n";
    Pupils class6;
    class6.boys = 46;
    cout<<"The boys in class 6 are: "<<class6.boys;
    class6.girls = 36;
    cout<<"\nThe girls in class 6 are: "<<class6.girls;
    cout<<"\n";
    class6.sum();

    cout<<"\n\nMwembeni Primary Mixed Class 7\n";
    Pupils class7;
    class7.boys = 50;
    cout<<"The boys in class 7 are: "<<class7.boys;
    class7.girls = 46;
    cout<<"\nThe girls in class 7 are: "<<class7.girls;
    cout<<"\n";
    class7.sum();

    cout<<"\n\nMwembeni Primary Mixed Class 8\n";
    Pupils class8;
    class8.boys = 40;
    cout<<"The boys in class 8 are: "<<class8.boys;
    class8.girls = 36;
    cout<<"\nThe girls in class 8 are: "<<class8.girls;
    cout<<"\n";
    class8.sum();

    return 0;
}