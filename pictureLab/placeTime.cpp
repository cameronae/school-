#include <iostream>
#include <string>
#include "PlaceTime.h"

place::place(): location("Error"), time(-1){}

place::place(std::string location, int time){
    this->location = location;
    this->time = time;
}

std::string place::GetLocation() const{
    return location;
}

int place::GetTime() const{
    return time;
}

void place::PrintInfo() const{
    std::printf("Location for pictures is at %s and the time is at %i", location, time);
}

