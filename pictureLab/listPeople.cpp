#include "listPeople.h"
#include <iostream>
#include <string>


void list::GetList(){
    std::string name;
    std::cout << "Enter person's name, type end to end";

    while(name != "end"){
        std::cin >> name;
    }
    
}
