//One way to reverse an array is to swap the first and last and repeat

#include <iostream>
using namespace std;

int main()
{
    int userInts[5];
    int n = sizeof(userInts) / sizeof(userInts[0]);
    int temp;

    for (int i = 0; i < 5; i++)
    {
        cin >> userInts[i];
    }
    
    for (int i = 0; i < (5/2); i++)
    {
        int temp = userInts[i];
        userInts[i] = userInts[n - 1 - i]; //swap first and last
        userInts[n - 1 - i] = temp; //swap last and first
        
    }
    
    for (int i = 0; i < 5; i++)
        cout << userInts[i] << " ";

    cout << endl;
    
}