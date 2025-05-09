#include <iostream>
//ctrl alt N runs code in terminal
//Simple calculator app using switch 
int main()
{
    double x, y;
    char op;
    std::cout << "insert first number: ";
    std::cin >> x;

    std::cout << "insert second number: ";
    std:: cin >> y;
    
    std::cout << "what operation do you want to use? ";
    std::cin >> op;

    /*switch is like an if statement
    put the var that you want to be used in ( )
    case is like if/else if
    use break after each case
    default is same as else 
    */
    switch(op){

    case '+':
    std::cout << x << "+" << y << "=" << x+y;
    break;

    case '-':
    std::cout << x << "-" << y << "=" << x-y;
    break;

    case '*':
    std::cout << x << "*" << y << "=" << x*y;
    break;

    case '/':
    std::cout << x << "/" << y << "=" << x/y;
    break;

    default:
    std::cout << "Please use an appropiate operation";
    break;
    }
    return 0;
}
