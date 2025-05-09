#include "Artwork.h"
#include <iostream>
#include <string>

// TODO: Define default constructor
Artwork::Artwork(): title("NoTitle"), yearCreated(-1){}
Artwork::Artwork(std::string title, int yearCreated, Artist artist){
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

int Artwork::GetYearCreated(){
    return yearCreated;
}
std::string Artwork::GetTitle(){
    return title;
}

void Artwork::PrintInfo(){
    artist.PrintInfo();
    std::cout << "Artwork: " << GetTitle() << "\nCreated in " << GetYearCreated();
}
// TODO: Define get functions: GetTitle(), GetYearCreated()

// TODO: Define PrintInfo() function