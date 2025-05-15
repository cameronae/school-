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

    //This is an example of appending a new array to a dynamic array when there are too many data members added to the array and the capacity needs increased
    int* appendArray = new int[arrayNum];
    int appendArrayCapacity = 5;
    int nextInput;
    std::cin >> nextInput;
    if(appendArrayCapacity == arrayNum){
        appendArrayCapacity *= 2; //increases the arrays capacity by double to make more room when too many ints in array
        int* newArray = new int[appendArrayCapacity];

        for(int i = 0; i < arrayNum; ++i){
            newArray[i] = appendArray[i]; //copy the data in the array into the tempary array
        }
        
        delete[] appendArray;

        appendArray = newArray;
    }
    appendArray[arrayNum] = nextInput; //this appends the next inpuit to the end of the array 
    ++arrayNum;


    return 0;
}