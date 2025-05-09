#include "FoodItem.h"
#include <iostream>
#include <iomanip> 



// Define default constructor\
//if foodItem object is defined with no parameters these are the default values. Instead of name = "noName" use initializaition form just need a colon :
FoodItem::FoodItem(): name("Water"), fat(0), carbs(0), protein(0){}

FoodItem::FoodItem(std::string foodName, double foodFat, double foodCarbs, double foodProteins): name(foodName), fat(foodFat), carbs(foodCarbs), protein(foodProteins){}


std::string FoodItem::GetName() {
   return name;
}

double FoodItem::GetFat() {
   return fat;
}

double FoodItem::GetCarbs() {
   return carbs;
}

double FoodItem::GetProtein() {
   return protein;
}

double FoodItem::GetCalories(double numServings) {
   // Calorie formula
   double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
   return calories;
}

void FoodItem::PrintInfo() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nutritional information per serving of " << name  << ":" << std::endl;
    std::cout << "  Fat: " << fat << " g" << std::endl;
    std::cout << "  Carbohydrates: " << carbs << " g" << std::endl;
    std::cout << "  Protein: " << protein << " g" << std::endl;
}