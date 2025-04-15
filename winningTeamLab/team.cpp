#include <iostream>
#include <iomanip> 
#include "Team.h"


void Team::SetName(const std::string& teamName){
   name = teamName;
}
void Team::SetWins(int teamWins){
    wins = teamWins;
}
void Team::SetLosses(int teamLosses){
    losses = teamLosses;
}

std::string Team::GetName() const{
    return name;
}
int Team::GetWins() const{
    return wins;
}
int Team::GetLosses() const{
    return losses;
}

double Team::GetWinPercentage() const{
    std::cout << std::fixed << std::setprecision(2);
    return static_cast<double>(wins) / (wins + losses);
}

void Team::PrintStanding() const{

    std::cout << "Win percentage: " << GetWinPercentage() << std::endl;
    if (GetWinPercentage() >= 0.50){
        std::cout << "Congratulations, Team " << GetName() << " has a ""winning average!\n";
    }
    else{
        std::cout << "Team " << GetName() << " has a losing average.\n";
    }
}

