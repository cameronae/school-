#include <iostream>
#include <string>
#include "Team.h"


int main() {
   std::string name;
   int wins;
   int losses;
   Team team;

   std::cin >> name;
   std::cin >> wins;
   std::cin >> losses;

   team.SetName(name);
   team.SetWins(wins);
   team.SetLosses(losses);

   team.PrintStanding();
   
   return 0;
}