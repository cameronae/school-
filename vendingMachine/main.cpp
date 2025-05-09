//program that takes in two inputs: number of bottles to be bought and then restocked
#include <iostream>
#include "VendingMachine.h"

int main()
{
    int buy = 0, restock = 0;
    std::cout << "Input -1 -1 to stop\n";
    while (buy != -1){
    std::cout << "Enter: ";
    std::cin >> buy >> restock;
    vending machine(buy, restock);
    if(buy == -1 && restock == -1)
        machine.PrintInfo();
    }
    

    return 0;
}
