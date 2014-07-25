#include "default_reset.h"

#include <chrono>
#include <random>

//! Default strategy to perform a reset
int DefaultReset::reset( int n, std::vector<int> solution, int * number_of_swaps)
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator (seed);
    std::uniform_int_distribution<int> distribution(0,solution.size() - 1);

    int i, j;

    // see shuffle(..) if counting the numbers of swaps is not necesary
    // ****************************************************************
    while( n-- )
    {
        i = distribution(generator);
        j = distribution(generator);

        * number_of_swaps ++;

        std::swap(solution[i], solution[j]);
    }
    // ****************************************************************

    return -1;
}
