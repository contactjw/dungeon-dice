// Implementation file for the Die class
#include <cstdlib>
#include <ctime>
#include "Die.h"
using namespace std;


Die::Die(int numSides)
{
    // Get the system time.
    unsigned seed = time(0);
    
    // Seed the random number generator.
    srand(seed);
    
    // Set the number of sides.
    sides = numSides;
    
    // Perform the initial roll.
    roll();
}

void Die::roll()
{
    // Constant for the minimum die value
    const int MIN_VALUE = 1;
    
    // Get the random value for the die.
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

int Die::getSides()
{
    return sides;
}

int Die::getValue()
{
    return value;
}
