#include <iostream>
using namespace std;
class Cars{
    public:
    double fuelcons;
    double distance;
    double cost;
    double price;
};
int main(){
    
    cout<<"Toyota";
    Cars Toyota;
    Toyota.fuelcons = 18;
    cout<<"\nEnter distance covered by Toyota model: ";
    cin>>Toyota.distance;
    cout<<"\nEnter the price of Toyota's fuel: ";
    cin>>Toyota.price;
    Toyota.cost = Toyota.price * Toyota.distance * Toyota.fuelcons;
    cout<<"\nCost of fuel for the Toyota model was Ksh."<<Toyota.cost;

    cout<<"\nJeep";
    Cars Jeep;
    Jeep.fuelcons = 12;
    cout<<"\nEnter distance covered by Jeep model: ";
    cin>>Jeep.distance;
    cout<<"\nEnter the price of Jeep's fuel: ";
    cin>>Jeep.price;
    Jeep.cost = Jeep.price * Jeep.distance * Jeep.fuelcons;
    cout<<"\nCost of fuel for the Jeep model was Ksh."<<Jeep.cost;

    cout<<"\nBmw";
    Cars Bmw;
    Bmw.fuelcons = 16;
    cout<<"\nEnter distance covered by Bmw model: ";
    cin>>Bmw.distance;
    cout<<"\nEnter the price of Bmw's fuel: ";
    cin>>Bmw.price;
    Bmw.cost = Bmw.price * Toyota.distance * Toyota.fuelcons;
    cout<<"\nCost of fuel for the Bmw model was Ksh."<<Bmw.cost;

    double overall(){
        double overallcost;
        overallcost = Toyota.cost + Jeep.cost + Bmw.cost;
        cout<<"The overall cost of fuel was Ksh."
        return (overallcost);
    }

    return 0;
}