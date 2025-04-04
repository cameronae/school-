//Lab 13.10 
#include <iostream>
#include <fstream>
using namespace std;

//readFile function
void readFile(ifstream& inFS, char array[], int);
	
//display function
void dispArray(char array[], int );
	
//Scan array for the letter 'A'

int key(char array[], int);
	


int main()
{
	// Variables
	int const SIZE = 7;
	char in[SIZE];
	   
	ifstream inFS;

    readFile(inFS, in, SIZE);

    cout << key(in, SIZE) << endl;
	   
	return 0;
}
void readFile(ifstream& inFS, char array[], int size)
{
    inFS.open("in.txt");

    for (int i = 0; i < size; i ++){
        inFS >> array[i];
    }
    inFS.close();
    dispArray(array, size);
}
	   
	   
void dispArray(char array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}
	   
//scan for char 'A'
int key(char array[], int size) 
{
    int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] == 'A')
            count++;
    }
    return count;
}
	  