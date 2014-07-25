#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_cost_solution.h
 * \brief Strategy Pattern to compute the cost of a given solution
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-10
 */

#include <vector>

/*!
 * \class StrategyCostSolution strategy_cost_solution.h
 * \brief Strategy Pattern to compute the cost of a given solution
 */
class StrategyCostSolution
{
    public:
        //! Compute the cost of a solution
        /*!
        * \param solution A given solution
        * \return The cost of a given solution.
        */
        virtual int costOfSolution( std::vector<int> solution ) = 0;
};
