#include <iostream>

//create a program that asks for their name and age then responds to them

int main(){
   
   std::string name;
   int age;

    std::cout << "what is your name? ";
    //use getline for a string that includes spaces
    std::getline(std::cin, name);

    std::cout << "How old are you " << name << "?";
    std::cin >> age;

    std::cout << "Nice to meet you " << name << " you look really good for being " << age << " years old!" << '\n';
    return 0;
}