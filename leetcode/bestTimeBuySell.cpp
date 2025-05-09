#include <iostream>
#include <cstdlib> //needed for rand() and srand()
#include <ctime> //needed for time()

//You are given an array [prices] where prices[i] is the price of a given stock on the ith day. 
//You want to maximize profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock

int bestSolution(int prices[], int size);

int main ()
{
    int i, j;
    int prices[6];
    int days[6] = {1,2,3,4,5,6};
    //seed the random number generator 
    std::srand(std::time(0));

    for (i = 0; i < 6; i++)
    {
        //generate rand num between 1-10: (max - min + 1[so you dont get 0]) + min
        prices[i] = (std::rand() % (10 - 1 + 1)) + 1;
        std::cout << prices[i] << " ";
    }
    int min = prices[0]; //set min to the first number
    int profit = 0; 
    for(i = 0; i < 6; i++) //search through array for min first
    {
        if (prices[i] <= min)
        {
            min = prices[i];
            for (j = i + 1; j < 6; j++) //if there is a min search the rest of the array for max profit
        {
            if (prices[j] - min > profit)
            {
                profit = prices[j] - min;
            }
        }
        }
        
    }
    std::cout << "min:" << min;
    std::cout << "profit:" << profit << std::endl;

    std::cout << bestSolution(prices, 6);
    return 0;
}

int bestSolution(int prices[], int size)
{
    //this is the faster solution does not use two for loops
    int min = prices[0];
    int max_profit = 0;
    for (int i = 0; i < 6; i ++)
    {
        if (prices[i] < min)
        min = prices[i];

        int profit = prices[i] - min;

        if (profit > max_profit)
        max_profit = profit;

    }
    return max_profit;
}