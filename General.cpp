#include<iostream>
using namespace std;
double calculateFuelcost
(string vehicleMake,double fuelconsumptionperkm)
{
int numberoftrips=3;
double distancepertrip=540.0;
double fuelconsumed = fuelconsumptionperkm*distancepertrip*numberoftrips;
double fuelcost = fuelconsumed * 177.0;
cout<<vehicleMake<<"fuel cost for the month: "<<fuelcost<<" Ksh"<<endl;
return fuelcost;
}
int main()
{
double Toyotafuelconsumptionperkm=0.5;
double BMWfuelconsumptionperkm=0.4;
double Jeepfuelconsumptionperkm=0.3;
double totalfuelcost=calculateFuelcost("Toyota ",Toyotafuelconsumptionperkm)+
calculateFuelcost("BMW ",BMWfuelconsumptionperkm)+calculateFuelcost("Jeep",Jeepfuelconsumptionperkm);
cout<<"Total fuel cost for the month: "<<totalfuelcost<<" Ksh"<<endl;
return 0;
}