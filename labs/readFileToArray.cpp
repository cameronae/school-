/*Call a  function that you will write named "ReadFile" . to read the file into an Array (you must pass the name of the array to the function. In the function:
declare the file stream object.open the file "word.txt"using a for loop read each character into an array of 4 elements. 
Then Call a  function you will write named "DispArray" to display the array. You must pass the name of the array to the function. 
Use a for loop to display the array with no spaces. */

#include <iostream>
#include <fstream>
using namespace std;

void ReadFile(char array[]);
void DispArray(char array[]);
	
int main()
{
	// Variables
	char array[13];
// the name of the file to read is word.txt
	ReadFile(array);
	DispArray(array);
	
	return 0;
}
// Add functions after this line 

void ReadFile (char array[])
{
    ifstream inFs;

    inFs.open("word.txt");

    for (int i = 0; i < 13; i++)
        inFs >> array[i];

    inFs.close();
}

void DispArray(char array[])
{
    for (int i = 0; i < 13; i++)
        cout << array[i];
}