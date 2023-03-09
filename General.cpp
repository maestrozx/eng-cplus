#include <iostream>
using namespace std;
//Class declaration
class Pupils{
    public:
    int boys;
    int girls;
    int total;
    //a function to calculate total students in a class
    int sum(){
        total = boys + girls;
        cout<<"The total number of pupils in the class is: "<<total;
        return 0;
    }
};
//a function for total number of pupils
int num_of_pupils(Pupils class6, Pupils class7, Pupils class8){
    int overall;
    overall = class6.total + class7.total + class8.total;
    cout<<"\n\nOverall students from class 6 to 8 is: "<<overall;
}
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
    
    //function call to calculate overall number
    num_of_pupils(class6, class7, class8);

    return 0;
}