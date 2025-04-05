 // th//Simple C++ program to encrypt and decrypt a string

 #include <iostream>
 #include <string>
 using namespace std;
 
 int main()
 {
     string str;
     cout << "Please enter a string:\t";
     cin >> str;
     //------------
     // this statement creates a pointer to the string you enter so that you can treat the string as a character array 
     //IMPORTANT
     const char* charArray = str.c_str();
     
  // the length() function in the string library returns a long unsigned int 
  //by delcaring here it avoids 2 warnings from the compiler
    long unsigned int i;
 
 //-----------------
     // write a for loop to add 3 to each ascii value in the string
 //your code here 
     for (i = 0; i < str.length(); i++){
        str[i] += 3;
     }
     cout << "\nEncrypted string with offset of 3: " << str << endl;
     // Write a for loop to subtract 3 to each ascii value in the string
 //your code here 
     for (i = 0; i <str.length(); i++){
        str[i] -= 3;
     }
     cout << "\nDecrypted string with offset of 3 : " << str << endl;
 
 
 
     return 0;
 }