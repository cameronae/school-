#ifndef ARTISTH
#define ARTISTH

#include <string>


class Artist{
   public:
      Artist();

      Artist(std::string artistName, int birthYear, int deathYear);

      std::string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;

   private:
      // TODO: Declare private data members - artistName, birthYear, deathYear
      std::string artistName;
      int birthYear;
      int deathYear;
};

#endif