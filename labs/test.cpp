#include <iostream>

int main()
{
    const int size = 12;
    char letters[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 , 12};
    char reverse[size];
    int temp  = 0;
    int right = size - 1;
    for (int left = 0; left < size/2; left++){
        temp = letters[left];
        letters[left] = letters[right];
        letters[right] = letters[temp];
    }
    
    for (int i = 0; i < size; i++){
        reverse[i] = letters[i];
    }

    for (int i = 0; i < size; i++){
        std::cout << reverse[i];
    }
}