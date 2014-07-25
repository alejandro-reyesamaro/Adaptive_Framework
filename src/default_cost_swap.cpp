#include "default_cost_swap.h"

#include <algorithm>

//! Default strategy to compute the cost of a swap
int DefaultCostSwap::costIfSwap(std::vector<int> solution, int currentCost, int i, int j, std::shared_ptr<StrategyCostSolution> s_costSoltion)
{
    std::swap(solution[i], solution[j]);
    int cost = s_costSoltion->costOfSolution( solution );
    std::swap(solution[i], solution[j]);

    // ??
    //if( ad_reinit_after_if_swap )
    //costOfSolution( 0 );

    return cost;
}
