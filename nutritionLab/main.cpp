#include <iostream>
#include <iomanip> 
#include "FoodItem.h"

int main() {
   std::string itemName;
   double amountFat, amountCarbs, amountProtein;
   double numServings;
   std::cout << std::fixed << std::setprecision(2);
   
   std::cin >> itemName;

   if(itemName == "Water" || itemName == "water") {
      FoodItem foodItem;
      foodItem.PrintInfo();
      std::cout << std::fixed << std::setprecision(2);
      std::cout << "Number of calories for " << 1.0 << " serving(s): " << foodItem.GetCalories(1.0) << std::endl;
   }
   
   else {
      std::cin >> amountFat;
      std::cin >> amountCarbs;
      std::cin >> amountProtein;
      std::cin >> numServings;
      
      FoodItem foodItem = FoodItem(itemName, amountFat, amountCarbs, amountProtein);
      foodItem.PrintInfo();
      std::cout << "Number of calories for " << 1.0 << " serving(s): " 
           << foodItem.GetCalories(1.0) << std::endl;
      std::cout << "Number of calories for " << numServings << " serving(s): " 
           << foodItem.GetCalories(numServings) << std::endl;
   }

   return 0;
}