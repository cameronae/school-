#include <iostream>

int main(){
    int x = 5; 
    int* ptr = &x; //asigns the pointer ptr with the memory address of x
    *ptr = 10; //asigns the memory address with the value of 10, this overides x = 5 to x = 10
    std::cout << ptr << std::endl; //this will cout the address
    std::cout << *ptr << std::endl; //this will cout the variable stored at the address

    int numbers[5] = {1,2,3,4,5};
    std::cout << numbers << std::endl; //this will cout the address of the first element in numbers

    for(int i = 0; i < 5; ++i){
        std::cout << *(numbers + i) << ' '; //this will cout the actual numbers in the array rather than the addresses for them
    }

    double* dynamic;
    int arrayNum = 5;
    dynamic = new double [arrayNum]; //assigns a pointer to a "new" array which is used for a dynamic array

    int* pointer = nullptr; // nullptr indicates that the pointer is pointing to nothing
    return 0;
}