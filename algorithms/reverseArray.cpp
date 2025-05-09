//One way to reverse an array is to swap the first and last and repeat

#include <iostream>
/*
 * Array Reversal Algorithm
 * -------------------------
 * Reversing an array involves rearranging its elements such that the first element 
 * becomes the last, the second becomes the second-to-last, and so on.
 *
 * Characteristics:
 * - Time Complexity: O(n), where n is the number of elements in the array.
 * - Space Complexity: O(1), as the reversal is performed in-place without using extra memory.
 * - Simple and efficient for reversing arrays of any size.
 *
 * Approach:
 * - Use two pointers: one starting at the beginning of the array and the other at the end.
 * - Swap the elements at these pointers and move the pointers toward each other.
 * - Repeat the process until the pointers meet or cross.
 */

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int *left = array; //for arrays in c/c++ the name itself is a pointer to the first element in the array
    int *right = array + size - 1; //points to last element
    
    while (left < right){
        std::swap(*left, *right);

        //move the pointers inward
        left++;
        right--;
    }
    for (int i = 0; i < size; i++){
        std::cout << array[i] << ' ';
    }
}