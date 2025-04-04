#include <iostream>
#include <iomanip>
using namespace std;
//create a program that asks the user for an items wholesale price and it's markup percentage and convert it
//do not accept negative values

double calculateRetail(double wholeSale, double markUp);

int main()
{
    double wholeSale, markUp;
   

    cout << "\n Enter the item's wholesale cost: \n";
    
    cin >> wholeSale;
    
    if (wholeSale <= 0)
    {
        cout << "Enter a positive value for the wholesale cost: \n";
        cin >> wholeSale;
    }
    
    cout << "Enter the item's markup percentage: \n";
    cin >> markUp;
    if (markUp <= 0)
    {
        cout << "Enter a positive value for the markup percentage: \n";
        cin >> markUp;
    }
    
        cout << fixed << setprecision(2) <<  "The item's retail price is $" << calculateRetail(wholeSale, markUp) << ".\n";     
    return 0;
}

double calculateRetail(double wholeSale, double markUp)
{
    double retail;
    markUp /= 100;
    retail = (wholeSale * markUp) + wholeSale;

    return retail;
}
