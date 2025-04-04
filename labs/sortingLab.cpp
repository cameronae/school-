/*Sorting orders.
Write a program that uses two identical arrays of just eight integers. 
Note: The sort functions (bubbleSort and selectionSort) are given in the template
-Then the Program  should display the contents of the first array, 
   -then call a function to sort the array using an ascending order bubble sort
    -  modified the function to print out the array contents after each pass of the sort.
-Next, the program should display the contents of the second Array, 
   -  then call a function to sort the array using an ascending order selection Sort
    -  modified the Selection sort function to print out the array content after each pass of the sort.*/

#include<iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void bubbleSort(int arr1[], int size);
void selectionSort(int arr2[], int size);
void showArray(int value[], int size);

int main()
{
	const int SIZE = 8;
	int arr1[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };
	int arr2[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };

    // call the bubble sort function
    bubbleSort(arr1, SIZE);

    // call the selection sort function
    selectionSort(arr2, SIZE);

	return 0;
}

void showArray(int values[], int size)
{
    for (int count = 0; count < size; count++)
		cout << values[count] << " ";

	cout << endl;
}

//sort in ascending order
void bubbleSort(int arr1[], int size)
{
    bool sort;
    int pass = 1;
    cout << "Now performing the bubble sort\n";
	cout << "------------------------------\n";\
    do{
    sort = false;
    for(int i = 0; i < size - 1; i++){
            if(arr1[i + 1] < arr1[i]){
                swap(arr1[i], arr1[i + 1]);
                sort = true;
            }
            cout << "After pass: " << pass << ' ';
            showArray(arr1, size);
            pass++;
        }
    } while (sort);
}

void selectionSort(int arr2[], int size)
{
    int minIndex, minValue;
    int pass = 1;

    cout << "Now performing the selection sort\n";
	cout << "---------------------------------\n";

    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        minValue = arr2[minIndex];
        for (int j = i + 1; j < size; j++)
        {
            if (arr2[j] < minValue){
                minIndex = j;
                minValue = arr2[j];
            }
        }
        swap(arr2[i], arr2[minIndex]);

        cout << "After pass: " << pass << ' ';
        showArray(arr2, size);
        pass++;
    }
}