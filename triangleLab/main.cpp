#include <iostream>
#include "Triangle.h"

//complete main() to read and set the base and height of triangle1 and of triangle2, 
//determine which triangle's area is smaller, and output that triangle's info, making use of Triangle's relevant member functions.
int main() {
    Triangle triangle1;
    Triangle triangle2;
    double userBase;
    double userHeight;

    
   
   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
    std::cin >> userBase;
    triangle1.SetBase(userBase);
    std::cin >> userHeight;
    triangle1.SetHeight(userHeight);
   // triangle1.PrintInfo();  
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
    std::cin >> userBase;
    std::cin >> userHeight;   
    triangle2.SetBase(userBase);
    triangle2.SetHeight(userHeight);
   // triangle2.PrintInfo();
    std::cout << "Triangle with smaller area:" << std::endl;
   
   // TODO: Determine smaller triangle (use GetArea())  
   //       and output smaller triangle's info (use PrintInfo())
    if(triangle1.GetArea() < triangle2.GetArea())
        triangle1.PrintInfo();
    else
        triangle2.PrintInfo();
    
   return 0;
}