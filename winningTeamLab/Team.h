#ifndef TEAMH
#define TEAMH

#include <string>


class Team {
    private:
        std::string name; 
        int wins;
        int losses;
    public:
        void SetName(const std::string& teamName);
        void SetWins(int teamWins);
        void SetLosses(int teamLosses);
        std::string GetName() const;
        int GetWins() const;
        int GetLosses() const;
        double GetWinPercentage() const;
        std::string GetAvg() const;
        void PrintStanding() const;
};

#endif