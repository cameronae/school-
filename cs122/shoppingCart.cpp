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


int main()
{
    cart item1, item2;
    std::string name;
    int price, quantity;

    getline(std::cin, name);
    std::cin.ignore();

    std::cin >> quantity;
    std::cin >> price;
    



    return 0;
}