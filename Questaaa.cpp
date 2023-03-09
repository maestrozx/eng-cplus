#include <iostream>
using namespace std;
//creation of a class
class Car {
public:
    double distance_travelled;
    double distance_per_litre;
    double fuel_price;
    double fuel_cost;
    //function for fuel cost for each model
    double FuelCost(double distance_travelled, double fuel_price) {
        double fuel_consumption = distance_travelled / distance_per_litre;
        double fuel_cost = fuel_consumption * fuel_price;
        return fuel_cost;
    }
};
//function for overall fuel cost
double overall_fuel_cost(Car Toyota, Car Bmw, Car Jeep){
    double overall_cost;
    overall_cost = Toyota.fuel_cost + Bmw.fuel_cost + Jeep.fuel_cost;
    cout<<"The overall cost incurred was Ksh."<<overall_cost;
    return overall_cost;
}

int main(){
    //objects
    Car Toyota;
    cout<<"Toyota\n";
    Toyota.distance_per_litre = 18.5;
    Car Jeep;
    cout<<"Jeep\n";
    Jeep.distance_per_litre = 12.5;
    Car Bmw;
    cout<<"Bmw\n";
    Bmw.distance_per_litre = 16.5;
    
    //user input
    cout<<"Enter distance travelled by Toyota (in km): ";
    cin>> Toyota.distance_travelled;
    cout<<"Enter the price of fuel used by Toyota: ";
    cin>> Toyota.fuel_price;
    cout<<"Enter distance travelled by Jeep (in km): ";
    cin>> Jeep.distance_travelled;
    cout<<"Enter the price of fuel used by Jeep: ";
    cin>> Jeep.fuel_price;
    cout<<"Enter distance travelled by Bmw (in km): ";
    cin>> Bmw.distance_travelled;
    cout<<"Enter the price of fuel used by Bmw: ";
    cin>> Bmw.fuel_price;

    //calling function for fuel cost
    Toyota.fuel_cost = Toyota.FuelCost(Toyota.distance_travelled, Toyota.fuel_price);
    cout << "Fuel cost by the Toyota model for " << Toyota.distance_travelled << " km:" << ": " << Toyota.fuel_cost << endl;
    Jeep.fuel_cost = Jeep.FuelCost(Jeep.distance_travelled, Jeep.fuel_price);
    cout << "Fuel cost by the Jeep model for" << Jeep.distance_travelled << " km:" << ": " << Jeep.fuel_cost << endl;
    Bmw.fuel_cost = Bmw.FuelCost(Bmw.distance_travelled, Bmw.fuel_price);
    cout << "Fuel cost by the Bmw model for " << Bmw.distance_travelled << " km:" << ": " << Bmw.fuel_cost << endl;
    
    //calling function to calculate overall cost
    overall_fuel_cost(Toyota, Bmw, Jeep);

    return 0;
}