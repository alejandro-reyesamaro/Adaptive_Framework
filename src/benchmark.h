#pragma once

/**
 * Adaptive search C++
 *
 * \file benchmark.h
 * \brief Benchmark mother class
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-10
 */

#include "strategy_cost.h"
#include "strategy_cost_swap.h"
#include "strategy_display_solution.h"
#include "strategy_execute_swap.h"
#include "strategy_next_i.h"
#include "strategy_next_j.h"
#include "strategy_reset.h"

#include <memory>

using namespace std;

/*!
 * \class Benchmark benchmark.h
 * \brief Benchmark mother class
 */
class Benchmark
{
    public:
        //! The unique constructor for Benchmark
        Benchmark();

    protected:
        shared_ptr<StrategyCost> st_cost;                   //!< Stragety to compute the projected cost on a variable
        shared_ptr<StrategyCostSwap> st_cost_swap;          //!< Stragety to compute the cost of a swap.
        shared_ptr<StrategyDisplaySolution> st_disp_sol;    //!< Stragety to display the solution
        shared_ptr<StrategyExecuteSwap> st_exec_swap;       //!< Stragety to execute a swap
        shared_ptr<StrategyNext_I> st_nextI;                //!< Stragety to return the next i (variable) to consider
        shared_ptr<StrategyNext_J> st_nextJ;                //!< Stragety to return the next j (value) to consider, given i (variable)
        shared_ptr<StrategyReset> st_reset;                 //!< Stragety to perform a reset
};
