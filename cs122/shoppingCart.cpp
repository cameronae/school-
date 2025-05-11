/*Default constructor
Public class functions (mutators & accessors)
SetName() & GetName()(2 pts)
SetPrice() & GetPrice()(2 pts)
SetQuantity() & GetQuantity()(2 pts)
Private data members
string itemName - Initialized in default constructor to "none"
int itemPrice - Initialized in default constructor to 0
int itemQuantity - Initialized in default constructor to 0
*/
#include <iostream>
#include <string>


class cart{
    public:
        cart():itemPrice(0), itemQuantity(0), itemName("none"){}
        void SetName(std::string itemName);
        std::string GetName() const;
        void SetPrice(int itemPrice);
        int GetPrice() const;
        void SetQuantity(int itemQuantity);
        int GetQuantity() const;
        int CalcCost();
        void GetInfo(cart& item);
        void PrintInfo();
    private:
        int itemPrice;
        int itemQuantity;
        std::string itemName;
};

void cart::SetName(std::string itemName){
    this->itemName = itemName;
}

std::string cart::GetName() const{
    return itemName;
}

void cart::SetPrice(int itemPrice){
    this->itemPrice = itemPrice;
}

int cart::GetPrice() const{
    return itemPrice;
}

void cart::SetQuantity(int itemQuantity){
    this->itemQuantity = itemQuantity;
}

int cart::GetQuantity() const{
    return itemQuantity;
}
int cart::CalcCost(){
    return itemPrice * itemQuantity;
}

void cart::GetInfo(cart& item){
    std::string name;
    int price, quantity;
    std::cout << "Item 1\nEnter the item name:\n";
    getline(std::cin, name);
    item.SetName(name);
    std::cout << "Enter the item quantity:\n";
    std::cin >> price;
    item.SetPrice(price);
    std::cout << "Enter the item price:\n";
    std::cin >> quantity;
    item.SetQuantity(quantity);
}

void cart::PrintInfo(){
    std::cout << "TOTAL COST\n" << GetName() << ' ' << GetQuantity() << " @ $" << GetPrice() << '=' << '$' << CalcCost() << std::endl;
}


int main()
{
    cart item1, item2;
   
    GetInfo(item1);
    item1.PrintInfo();



    return 0;
}