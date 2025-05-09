#ifndef PLACETIMEH
#define PLACETIMEH
#include <string>


class place {
private:
    std::string location;
    int time;
public:
    place();
    place(std::string location, int time);

    std::string GetLocation() const;
    int GetTime() const;
    void PrintInfo() const;

};




#endif