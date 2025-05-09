#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

void Car::SetPurchasePrice(int userPrice){
    purchasePrice = userPrice;
}

int Car::GetPurchasePrice() const{
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

void Car::PrintInfo() const{
    cout << fixed << setprecision(0);
    cout << "Car's information:\n  " << "Model year: " <<  modelYear << "\n  " << "Purchase price: $" << purchasePrice << "\n  " << "Current value: $" <<  currentValue << endl;
} 