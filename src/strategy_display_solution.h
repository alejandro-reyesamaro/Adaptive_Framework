#pragma once

/**
 * Adaptive search C++
 *
 * \file strategy_display_solution.h
 * \brief Strategy Pattern to display the solution
 * \author Florian Richoux, Alejandro Reyes
 * \date 2014-07-10
 */

#include "ad_data.h"

#include <memory>

/*!
 * \class StrategyDisplaySolution strategy_display_solution.h
 * \brief Strategy Pattern to display the solution
 */
class StrategyDisplaySolution
{
    public:
        //! Display the solution
        /*!
        * \param p_ad Pointer toward the current configuration (or solution).
        */
        virtual void displaySolution(std::shared_ptr<AdData> data) = 0;
};
