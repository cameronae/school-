// This program demonstrates the linear search algorithm.
#include <iostream>
using namespace std;

// Function prototype
int linearSearch(const int arr[], int size, int value);

int main()
{
    const int SIZE = 6;
    int tests[SIZE] = { 87, 75, 98, 100, 82, 77 };
    int results;
    int searchNum;

    cin>> searchNum;
   // Search the array for number entered by user.
   results = linearSearch(tests, SIZE, searchNum);

   // If linearSearch returned -1, then the searchNum value  was not found in the array
   if (results == -1)
      cout << " did not find " << searchNum <<endl;
   else
   {
      // Otherwise 'results' variable  contains the subscript of where the value was found in the array
      
      cout << searchNum <<" found at element ";
      cout << (results + 1) << endl;
   }
   return 0;

}

//*****************************************************************
// The linearSearch function performs a linear search on an       *
// integer array. The array arr, which has a maximum of size      *
// elements, is searched for the number stored in value. If the   *
// number is found, its array subscript is returned. Otherwise,   *
// -1 is returned indicating the value was not in the array.      *
//*****************************************************************
int linearSearch(const int arr[], int size, int value)
{
   int index = 0;       // Used as a subscript to search array
   int position = -1;   // To record position of search value
   bool found = false;  // Flag to indicate if the value was found

   while (index < size && !found)
   {
      if (arr[index] == value) // If the value is found,
      {
         found = true;         // set the flag
         position = index;     // Record the value's subscript
         return position; 
      }
      index++;                 // Go to the next element in the array
   }
   return -1;              // Return the position, or -1
}