#include <iostream>
/*
 * Binary Search Algorithm
 * ------------------------
 * Binary Search is an efficient algorithm for finding the position of a target element
 * in a sorted array. It works by repeatedly dividing the search interval in half.
 *
 * Characteristics:
 * - Time Complexity: O(log N), where N is the number of elements in the array.
 * - Space Complexity: O(1) for the iterative approach (in-place search).
 * - Requires the array to be sorted beforehand.
 *
 * Approach:
 * - Start with two pointers: one at the beginning (left) and one at the end (right) of the array.
 * - Calculate the middle index and compare the middle element with the target.
 * - If the middle element matches the target, the search is complete.
 * - If the target is smaller, narrow the search to the left half by moving the right pointer.
 * - If the target is larger, narrow the search to the right half by moving the left pointer.
 * - Repeat until the target is found or the search interval becomes empty.
 *
 * Binary Search is widely used due to its efficiency, especially for large datasets.
 */

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
            left = mid - 1; //will set left to array element to the left of last checked value
            found = false;
        }
        else{
            right = mid + 1;
            found = false;
        }
    }
    return 0;
}