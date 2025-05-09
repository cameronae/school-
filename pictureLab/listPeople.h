#ifndef LISTPEOPLEH
#define LISTPEOPLEH
#include "placeTime.h"
#include <iostream>
#include <string>
#include <vector>

class list{
    private:
        int number;
        std::string people;
    public:

        list(): number(-1), people("Error no people"){}

        void GetList();

        int GetNumber() const;

};



#endif