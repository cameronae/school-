#include <iostream>


int main()
{
    int right = 9;
    int left = 0;
    int mid;
    bool found = false;
    int array[10] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10};
    int target = 5;

    while (left <= right && !found)
    {
        mid = (right + left) / 2;
        if (array[mid] == target){
            found = true;
            std:: cout << "found target at " << mid;
        }
        else if(array[mid] < target){
            left = mid - 1;
            found = false;
        }
        else{
            right = mid + 1;
            found = false;
        }
    }
    return 0;
}