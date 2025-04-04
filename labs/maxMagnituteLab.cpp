//Write a function MaxMagnitude() with two positive integers input parameters that returns the largest  value. Use the function in a program[] that takes two integer inputs, 
//and outputs the largest magnitude value{[].

#include <iostream>
using namespace std;

int MaxMagnitude(int userVal1, int userVal2);

int main()
{
    int x, y;

    cin >> x;
    cin >> y;

    cout << MaxMagnitude(x,y);
}

int MaxMagnitude(int userVal1, int userVal2)
{
    if (userVal1 > userVal2)
        return userVal1;
    else
        return userVal2;
}