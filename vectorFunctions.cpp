#include <iostream>
#include <vector>
using namespace std;

int main() {
   // Create a vector of integers
   vector<int> numbers;

   // push_back() – Adds an element to the end
   numbers.push_back(10);
   numbers.push_back(20);
   numbers.push_back(30);

   // size() – Returns the number of elements
   cout << "Size: " << numbers.size() << endl;  // Output: 3

   // at(index) – Access element at given index with bounds checking
   cout << "Element at index 1: " << numbers.at(1) << endl;  // Output: 20

   // operator[] – Access element at given index (no bounds checking)
   cout << "Element at index 2: " << numbers[2] << endl;  // Output: 30

   // front() – Returns the first element
   cout << "First element: " << numbers.front() << endl;  // Output: 10

   // back() – Returns the last element
   cout << "Last element: " << numbers.back() << endl;  // Output: 30

   // insert() – Inserts element at specific position
   numbers.insert(numbers.begin() + 1, 15);  // Insert 15 at index 1

   // erase() – Removes element at specific position
   numbers.erase(numbers.begin() + 2);  // Remove element at index 2 (was 20)

   // pop_back() – Removes the last element
   numbers.pop_back();  // Removes 30

   // empty() – Returns true if the vector is empty
   cout << "Is vector empty? " << (numbers.empty() ? "Yes" : "No") << endl;

   // clear() – Removes all elements
   numbers.clear();

   // Display vector contents
   cout << "Final contents of vector: ";
   for (int val : numbers) {
      cout << val << " ";
   } 
   cout << endl;

   return 0;
}