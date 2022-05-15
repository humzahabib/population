#include <cs50.h>
#include <stdio.h>


int CalculatePopulation(int _currentPopulation);

int main(void)
{
    float startSize;
    float endSize;
    float currentPopulation = 0;
    int yearsPassed = 0;


    // TODO: Prompt for start size
    do
    {
        startSize = get_int("Start Size: ");
        currentPopulation = startSize;
    }
    while(startSize < 9);

    // TODO: Prompt for end size
    do
    {
        endSize = get_int("End Size: ");
    }
    while(endSize < startSize);



    // TODO: Calculate number of years until we reach threshold

    // Keep adding population and incrementing years passed until it reaches or exceeds endSize
    while(currentPopulation < endSize)
    {
        currentPopulation = CalculatePopulation(currentPopulation);
            yearsPassed++;
    }

    // TODO: Print number of years

    printf("Years: %i \n", yearsPassed);

}

// Method to change currentPopulation every year
int CalculatePopulation(int _currentPopulation)
{
    return _currentPopulation += _currentPopulation / 3 - _currentPopulation / 4;

}
