#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_cost_swap.h
 * \brief Strategy Pattern to compute the cost of a swap
 * \author Florian Richoux, Alejandro
 * \date 2014-07-10
 */

#include "strategy_cost_solution.h"

#include <memory>

/*!
 * \class StrategyCostSwap strategy_cost_swap.h
 * \brief Strategy Pattern to compute the cost of a swap
 */
class StrategyCostSwap
{
    public:
        //! Compute the cost of the swap.
        /*!
        * \param solution A given solution
        * \param currentCost: the current cost when this function is called.
        * \param i (and j), the variables with which we simulate a swap to compute the resulting cost.
        * \param j (and i), the variables with which we simulate a swap to compute the resulting cost.
        * \param s_costSolution Strategy pattern to compute the cost of the given solution
        * \return The cost if we swap variables i and j.
        */
        virtual int costIfSwap( std::vector<int> solution, int currentCost, int i, int j, std::shared_ptr<StrategyCostSolution> s_costSoltion) = 0;
};
