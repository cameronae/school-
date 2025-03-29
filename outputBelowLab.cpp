#include <iostream>
using namespace std;

int main()
{
    int nums[6];

    for (int i = 0; i < 6; i++)
        cin >> nums[i];
    for (int i = 0; i < 6; i++)
        if(nums[i] < 99)
            cout << nums[i] << " ";
    return 0;
}