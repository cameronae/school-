#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//(each record contains a filename)
//Modifiy the filename 
// using .find the "_photo.jpg" and .replace it with "_info.txt" then output the new file name. 

int main() {
   string inputFile;
   string fileName;
   int position;
   ifstream inFS; //needed to create file variable

   // Get the name of the inputFile file
   cin >> inputFile;

   // Open the input file
    inFS.open(inputFile);

    if (!inFS.is_open())
    {
        cout << "Could not open input file " << inputFile << endl;
        return 1;
    }
// create a  while loop to read a record from input file
while (inFS >> fileName)
{
    position = fileName.find("photo.jpg");
    fileName.replace(position, strlen("photo.jpg"), "info.txt");
    cout << fileName << endl;
}


 // Close the input file   
    inFS.close();

   return 0;
}