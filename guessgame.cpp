#include <iostream> 

int main()
{
    int num;
    int guess;
    int tries;
    //function to create random variable 
    srand(time(NULL));

    //gives a random number through 1-100
    num = (rand() % 100) + 1;
    std::cout << num;
    
    std::cout<< "Welcome to the guessing game, please insert a random number 1-100:  ";
    std::cin>> guess;

    for(int i=0; i < 100; i++)
    {
        if(guess == num)
    {
        std::cout<< "Good job you guessed correctly in " << tries << " tries";
    }
        else if(guess>num)
        {
            std::cout<<"Lower: ";
        }
        else
        {
            std::cout<<"Higher: ";
        }
        tries = i;

    }
    
    return 0;
    



}