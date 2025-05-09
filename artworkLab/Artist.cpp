#include "Artist.h"
#include <iostream>
#include <string>


// TODO: Define default constructor
Artist::Artist(): artistName("None"), birthYear(0), deathYear(0){}
// TODO: Define second constructor to initialize
Artist::Artist(std::string artistName, int birthYear, int deathYear){
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}
//       private fields (artistName, birthYear, deathYear)

std::string Artist::GetName() const{
    return artistName;
}

int Artist::GetBirthYear() const{
    return birthYear;
}

int Artist::GetDeathYear() const{
    return deathYear;
}

void Artist::PrintInfo() const{
    if (GetDeathYear() == -1){
        std::cout << "Artist: " << GetName() << " born " << GetBirthYear() << "\n";
    }
    else{
    std::cout << "Artist: " << GetName() << "(" << GetBirthYear() << "-" << GetDeathYear() <<")\n";
    }
}
