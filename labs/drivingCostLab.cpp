#include <iostream>
#include <iomanip>
using namespace std;
//create program that takes in mpg dollarspergallon and miles driven and calculate the cost of driving

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven);

int main()
{
    double mpg, dpg, miles;

    cin >> mpg;
    cin >> dpg;

    cout << fixed << setprecision(2);
    cout << DrivingCost(mpg, dpg, 10) << " ";
    cout << DrivingCost(mpg, dpg, 50) << " ";
    cout << DrivingCost(mpg, dpg, 400) << endl;
    
return 0;
}

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven)
{
    double cost;

    cost = (milesDriven / milesPerGallon) * dollarsPerGallon;
    return cost;
}