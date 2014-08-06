#include "default_reset.h"
#include "af_random_tools.h"

#include <chrono>
#include <random>

//! Default strategy to perform a reset
int DefaultReset::reset(int n, std::vector<int> solution, int * number_of_swaps)
{
    unsigned size = solution.size();

    int i, j;

    // see shuffle(..) if counting the numbers of swaps is not necesary
    // ****************************************************************
    while( n-- )
    {
        i = AF_RandomTools::Random(size);
        j = AF_RandomTools::Random(size);

        * number_of_swaps ++;

        std::swap(solution[i], solution[j]);
    }
    // ****************************************************************

    return -1;
}
