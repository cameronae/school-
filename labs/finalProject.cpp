/*In.txt has 12 letters each letter is on a separate line in the file
Final Project Requirements
Write an encryption program using in.txt as 'input"
How to approach this program Test you program after each step
cin the filename and Read the file specified in the filename into an array.
Display the array (See lab 12.3) dispArray(letters,SIZE);
Determine offset key (see lab 13.9) Call the “key” function to determine the encryption offset key. The function will count the number of E’s and A’s in your “letters” Array and
and add them together to create the value for “offsetKey” Return an integer to the variable "offsetKey"
Display the offsetKey
Encyrpt the "letters" array. Call the “encryptArray” function: (See lab 14.2) encrypt each char in the “letters” array by adding the value of key to the char value and write the new char to an array called “encrypt”
Display the “encrypt” array
Decrypt the “encrypt” array and create the “decipher” array. Subtract the key value from every char in the “cipher” array and write the char into the decipher array (See Lab 14.2)
Display the “decipher array
Reverse the "letters" array and write the results in the "reverse" array (lab 12.11)
Call the reverseArray function
Display the “reverse” array*/

#include <iostream>
#include <fstream>

using namespace std;

// Function prototypes
// complete the following function prototype as you complete each function 
void readFile(ifstream& inFile, char letters[], int size);
void dispArray(char array[], int size);

int key(char letters[], int size);
void encryptArray(char letters[], char encrypt[], int key, int size);

void decryptArray(char decrypt[], char encrypt[], int key, int size);

void reverseArray(char letters[], char reverse[], int size);

int main()
{
    const int  SIZE = 12;
    int offsetKey = 0;
    // Arrays to hold the numbers 
    char letters[SIZE];
    char encrypt[SIZE];
    char decrypt[SIZE];
    char reverse[SIZE];
    // File stream object
    ifstream inFile;
    
    //readFikle into array
    readFile(inFile, letters, SIZE);
    //display the array 
    dispArray(letters, SIZE);

    //Calculate and display the offsetKey
    cout << key(letters, SIZE) << endl;

    //encrypt the array
    encryptArray(letters, encrypt, key(letters,SIZE), SIZE);
    dispArray(encrypt, SIZE);
    //decrypt the array
    decryptArray(decrypt, encrypt, key(letters, SIZE), SIZE);
    dispArray(decrypt, SIZE);
    
    //reverse the array
    reverseArray(letters, reverse, SIZE);
    dispArray(reverse, SIZE);
    
    return 0;
}

void readFile(ifstream& inFile, char letters[], int size){
    string fileName; 
    cout << "Please Enter the file name: ";   
    cin >> fileName;   
    inFile.open(fileName);
    if(!inFile.is_open()){ //if user does not enter a correct file then it does not work
        cout << "Error trying to open file, make sure it is the correct file name,";
    }
    for(int i = 0; i < size; i++){
        inFile >> letters[i];
    }
    inFile.close();
}

void dispArray(char array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << ' ';
    }
    cout << endl;
}
/*This function will count the number of E’s and A’s in your “letters” Array and
and add them together to create the value for “offsetKey” Return an integer to the variable "offsetKey"*/
int key (char letters[], int size){
    int offsetKey = 0;
    for (int  i = 0; i < size; i++){
        if (letters[i] == 'A' || letters[i] == 'E'){
            offsetKey++; //increases the count for the key
        }
    }
    return offsetKey;
}
//this function encrypts the letters array by adding the ASCII value from the key function to it and storing that value in the encrypt array
void encryptArray (char letters[], char encrypt[], int key, int size){
    for (int i = 0; i < size; i++){
        encrypt[i] = letters[i] + key;
    }
}
//This funciton takes the encrypted array and subtracts the key offset value to decrypt it and stores it in the decrypt array
void decryptArray(char decrypt[], char encrypt[], int key, int size){
    for (int i = 0; i < size; i++){
        decrypt[i] = encrypt[i] - key;
    }
}
//this function takes the letters array and reverses the characters in the array and then stores them into the reverse array 
void reverseArray(char letters[], char reverse[], int size){
    int right = size - 1;
    for (int left = 0; left < size / 2; left++){
        swap(letters[left], letters[right]); //std::swap function instead of using temp value
        right--;
    }
    
    for (int i = 0; i < size; i++){
        reverse[i] = letters[i];
    }
}