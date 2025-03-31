#include <iostream>
/*
 * Selection Sort Algorithm
 * -------------------------
 * Selection Sort is a simple comparison-based sorting algorithm. It works by dividing
 * the array into two parts: the sorted part and the unsorted part. The algorithm repeatedly
 * selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.
 *
 * Characteristics:
 * - Time Complexity: O(n^2) for all cases (best, average, and worst).
 * - Space Complexity: O(1) (in-place sorting).
 * - Not Stable: May not maintain the relative order of equal elements.
 * - Simple to implement but inefficient for large datasets.
 *
 * Approach:
 * - Iterate through the array and assume the current element is the minimum.
 * - Compare it with the remaining elements in the unsorted part of the array.
 * - If a smaller element is found, update the minimum index.
 * - Swap the minimum element with the current element.
 * - Repeat the process for all elements until the array is sorted.
 *
 * Selection Sort is useful for small datasets or when memory usage is a concern.
 */
int main()
{
    int minIndex, minValue, i;
    int arr[] = {5, 2, 8, 3, 1, 10, 34, 4, 19, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++){
        minIndex = i;
        minValue = arr[minIndex];
        for (int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
                minValue = arr[j];
        }
        std::swap(arr[i], arr[minIndex]);
    }
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << ' ';
    }
    return 0;
}