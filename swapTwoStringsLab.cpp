#include <iostream>
using namespace std;
//write a program that takes two strings and flips them and adds a comma after the new first string

void SwapValue(string& userStr1, string& userStr2);

int main()
{
    string userStr1, userStr2;

    cin >> userStr1;
    cin >> userStr2;

    SwapValue(userStr1, userStr2);
    return 0;

}

void SwapValue(string& userStr1, string& userStr2)
{
    //need a temp string to hold str1 so strings dont equal eachother

    string temp = userStr1;
    userStr1 = userStr2;
    userStr2 = temp;
    
    cout << userStr1 << ", " << userStr2 << endl;
}