#include <iostream>
//pass or fail calculator
int main()
{
    int grade;
    std::cout << "What grade did you get on the test? ";
    std:: cin >> grade;
    //is grade >= 65? if yes then pass : else oop
    grade >= 65 ? std::cout << "You passed! " : std::cout << "oop";
}