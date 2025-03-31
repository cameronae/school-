#include <iostream>
/*
 * Bubble Sort Algorithm
 * ----------------------
 * Bubble Sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements, and swaps them if they are in the wrong order.
 * This process is repeated until the list is sorted.
 *
 * Characteristics:
 * - Time Complexity: O(n^2) in the worst and average cases, O(n) in the best case (already sorted array).
 * - Space Complexity: O(1) (in-place sorting).
 * - Stable: Maintains the relative order of equal elements.
 * - Simple to implement but inefficient for large datasets.
 *
 * The algorithm gets its name because smaller elements "bubble" to the top of the list
 * (or larger elements sink to the bottom) with each iteration.
 */

int main()
{
    int size = 10;
    int array[10] = {1, 4, 23, 2, 8, 10, 14, 5, 19, 20};
    for (int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] > array[j]){
                std::swap(array[i], array[j]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        std:: cout << array[i] << ' ';
    }

}