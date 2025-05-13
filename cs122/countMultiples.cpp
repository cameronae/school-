#include <iostream>
//given a low high and x int find how many multiples of x there are in the range 

int main() 
{
    int low, high, x;
    int count = 0;

    std::cin >> low >> high >> x;

    for(int i = low; i < high + 1; ++i){
        if(i % x == 0){
            std::cout << i << " is a mulitple\n";
            count++;
        }
    } 
    int v;
    std::cout << count;
    
    return 0;
}