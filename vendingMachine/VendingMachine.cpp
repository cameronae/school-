#include "VendingMachine.h"
#include <iostream>

//have to initialize a static variable outside of the class scope
int vending::inv = 20;

vending::vending(): buy(-1), restock(-1){}

vending::vending(int buy, int restock){
    this->buy = buy;
    this-> restock = restock;
    //update the inventory everytime a correct object is initialized
    inv -= this->buy;
    inv += this->restock;

}

int vending::GetBuy() const{
    return buy;
}

int vending::GetRestock() const{
    return restock;
}

void vending::PrintInfo() const{
    std::cout << "Inventory: " << inv << std::endl;
}