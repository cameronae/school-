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
    bool sort;
    int pass = 1;
    std::cout << "Now performing the bubble sort\n";
	std::cout << "------------------------------\n";\
    do{
    sort = false;
    for(int i = 0; i < size - 1; i++){
            if(array[i] > array[i + 1]){
               std::swap(array[i], array[i + 1]);
                sort = true;
            }
        }
    } while (sort);
    for (int i = 0; i < size; i++){
        std:: cout << array[i] << ' ';
    }

}