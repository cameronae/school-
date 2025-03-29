#include <iostream>
#include <string.h>
using namespace std;

int CalcNumCharacters(string userString, char userChar)
{
    int numChars = 0;
    for (int i = 0; i < userString.length(); i ++)
    {
        if (userString.at(i) == userChar)
            numChars++;
    }
    return numChars;
} 

int main() {
   char inputChar;
    string inputString;
    int numChars;
    //"Char to count 
    cin >> inputChar ;
    //String to search 
    cin>>inputString;

    numChars = CalcNumCharacters(inputString, inputChar);
   
// Display the number with "'s" after it unless the number is 1
    if(numChars > 1)
        cout << numChars << "'s";
    else
        cout << numChars;

   return 0;
}