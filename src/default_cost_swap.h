#pragma once

/**
 * Adaptive search C++
 *
 * \file default_cost_swap.h
 * \brief Default strategy to compute the cost of a swap
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-14
 */

#include "strategy_cost_swap.h"

/*!
 * \class DefaultCostSwap default_cost_swap.h
 * \brief Default strategy to compute the cost of a swap
 */
class DefaultCostSwap : public StrategyCostSwap
{

    public:
        //! Constructor
        DefaultCostSwap();

        //! Wrapper when user function costIfSwap is not defined.
        /*!
        * \param solution A given solution
        * \param currentCost the current cost when this function is called.
        * \param i (and j), the variables with which we simulate a swap to compute the resulting cost.
        * \param j (and i), the variables with which we simulate a swap to compute the resulting cost.
        * \param s_costSolution Strategy pattern to compute the cost of the given solution
        * \return The cost if we swap variables i and j.
        */
        int costIfSwap(std::vector<int> solution, int currentCost, int i, int j , std::shared_ptr<StrategyCostSolution> s_costSoltion);
};
